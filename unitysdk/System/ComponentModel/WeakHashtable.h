#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Hashtable.h"
namespace System { class Object; }
namespace System::Collections { class IEqualityComparer; }

#define SYSTEM_COMPONENTMODEL_WEAKHASHTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C194370)
#define SYSTEM_COMPONENTMODEL_WEAKHASHTABLE_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C194210)
#define SYSTEM_COMPONENTMODEL_WEAKHASHTABLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C192640)
#define SYSTEM_COMPONENTMODEL_WEAKHASHTABLE_REMOVE_OFFSET UNITYSDK_OFFSET(0x1C194360)

namespace System::ComponentModel
{
	inline static constexpr unsigned int WeakHashtable_TypeDefinitionIndex = 2653;

	class WeakHashtable : public ::System::Collections::Hashtable
	{
	public:
		static ::System::Collections::IEqualityComparer** StaticGet__comparer()
		{
			return (::System::Collections::IEqualityComparer**)UnitySDK::FromName("System.ComponentModel", "WeakHashtable")->GetStaticField(0x36960);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_WEAKHASHTABLE_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_WEAKHASHTABLE_CCTOR_OFFSET))();
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_WEAKHASHTABLE_CLEAR_OFFSET))(this);
		}

		::System::Void Remove(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_WEAKHASHTABLE_REMOVE_OFFSET))(this, a1);
		}

	};
}
