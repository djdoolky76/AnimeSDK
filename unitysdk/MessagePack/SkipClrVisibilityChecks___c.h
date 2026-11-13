#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System::Reflection { class ConstructorInfo; }

#define MESSAGEPACK_SKIPCLRVISIBILITYCHECKS___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EF6C1E0)
#define MESSAGEPACK_SKIPCLRVISIBILITYCHECKS___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EF6C220)
#define MESSAGEPACK_SKIPCLRVISIBILITYCHECKS___C___CCTOR_B__15_0_OFFSET UNITYSDK_OFFSET(0x1EF6C230)

namespace MessagePack
{
	inline static constexpr unsigned int SkipClrVisibilityChecks___c_TypeDefinitionIndex = 7249;

	class SkipClrVisibilityChecks___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MessagePack", "<>c")->GetStaticField(0x341D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_SKIPCLRVISIBILITYCHECKS___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_SKIPCLRVISIBILITYCHECKS___C_CTOR_OFFSET))(this);
		}

		::System::Boolean __cctor_b__15_0(::System::Reflection::ConstructorInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::ConstructorInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_SKIPCLRVISIBILITYCHECKS___C___CCTOR_B__15_0_OFFSET))(this, a1);
		}

	};
}
