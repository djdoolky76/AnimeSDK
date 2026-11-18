#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NPCCROWD_NPCCROWDMODULEMAINSYSTEM_CODESETTING_ABILITY__CCTOR_OFFSET UNITYSDK_OFFSET(0xFD35F10)

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCCrowdModuleMainSystem_CodeSetting_Ability_TypeDefinitionIndex = 66626;

	class NPCCrowdModuleMainSystem_CodeSetting_Ability : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_Max_Enitty_Num()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdModuleMainSystem_CodeSetting_Ability_TypeDefinitionIndex)->GetStaticField(0xDE90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMAINSYSTEM_CODESETTING_ABILITY__CCTOR_OFFSET))();
		}
	};
}
