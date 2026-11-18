#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/Unreal/FGameplayTag.h"

#define FOUNDATION_UNREAL_FGAMEPLAYTAGCONTAINERMETHOD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x152C6FD0)
#define FOUNDATION_UNREAL_FGAMEPLAYTAGCONTAINERMETHOD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x152C7010)
#define FOUNDATION_UNREAL_FGAMEPLAYTAGCONTAINERMETHOD___C___CCTOR_B__21_0_OFFSET UNITYSDK_OFFSET(0x152C7020)

namespace Foundation::Unreal
{
	inline static constexpr unsigned int FGameplayTagContainerMethod___c_TypeDefinitionIndex = 11585;

	class FGameplayTagContainerMethod___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(FGameplayTagContainerMethod___c_TypeDefinitionIndex)->GetStaticField(0x77D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAGCONTAINERMETHOD___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAGCONTAINERMETHOD___C__CTOR_OFFSET))(this);
		}

		::System::Boolean __cctor_b__21_0(::Foundation::Unreal::FGameplayTag a, ::Foundation::Unreal::FGameplayTag b)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::Unreal::FGameplayTag, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAGCONTAINERMETHOD___C___CCTOR_B__21_0_OFFSET))(this, a, b);
		}
	};
}
