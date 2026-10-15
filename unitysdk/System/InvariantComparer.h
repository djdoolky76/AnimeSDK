#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class InvariantComparer; }
namespace System { class Object; }
namespace System::Globalization { class CompareInfo; }

#define SYSTEM_INVARIANTCOMPARER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F01CD60)
#define SYSTEM_INVARIANTCOMPARER_COMPARE_OFFSET UNITYSDK_OFFSET(0x1F01CC40)
#define SYSTEM_INVARIANTCOMPARER_CTOR_OFFSET UNITYSDK_OFFSET(0x1F01CBA0)

namespace System
{
	inline static constexpr unsigned int InvariantComparer_TypeDefinitionIndex = 2459;

	class InvariantComparer : public ::System::Object
	{
	public:
		::System::Globalization::CompareInfo* m_compareInfo; // 0x10
		static ::System::InvariantComparer** StaticGet_Default()
		{
			return (::System::InvariantComparer**)UnitySDK::FromName("System", "InvariantComparer")->GetStaticField(0x3AF30);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_INVARIANTCOMPARER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_INVARIANTCOMPARER_CCTOR_OFFSET))();
		}

		::System::Int32 Compare(::System::Object* a1, ::System::Object* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_INVARIANTCOMPARER_COMPARE_OFFSET))(this, a1, a2);
		}

	};
}
