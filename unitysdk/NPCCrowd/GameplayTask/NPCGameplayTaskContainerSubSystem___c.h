#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class COCJHGGDBCA;
namespace System { template <typename T> class Action_1; }

#define NPCCROWD_GAMEPLAYTASK_NPCGAMEPLAYTASKCONTAINERSUBSYSTEM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xFD2F550)
#define NPCCROWD_GAMEPLAYTASK_NPCGAMEPLAYTASKCONTAINERSUBSYSTEM___C__CTOR_OFFSET UNITYSDK_OFFSET(0xFD2F590)
#define NPCCROWD_GAMEPLAYTASK_NPCGAMEPLAYTASKCONTAINERSUBSYSTEM___C__UPDATE_B__2_0_OFFSET UNITYSDK_OFFSET(0xFD2F5A0)

namespace NPCCrowd::GameplayTask
{
	inline static constexpr unsigned int NPCGameplayTaskContainerSubSystem___c_TypeDefinitionIndex = 60381;

	class NPCGameplayTaskContainerSubSystem___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(NPCGameplayTaskContainerSubSystem___c_TypeDefinitionIndex)->GetStaticField(0x47700);
		}
		static ::System::Action_1<::COCJHGGDBCA*>** StaticGet___9__2_0()
		{
			return (::System::Action_1<::COCJHGGDBCA*>**)Il2CppClass::FromTypeDefinitionIndex(NPCGameplayTaskContainerSubSystem___c_TypeDefinitionIndex)->GetStaticField(0x47708);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_GAMEPLAYTASK_NPCGAMEPLAYTASKCONTAINERSUBSYSTEM___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_GAMEPLAYTASK_NPCGAMEPLAYTASKCONTAINERSUBSYSTEM___C__CTOR_OFFSET))(this);
		}

		::System::Void _Update_b__2_0(::COCJHGGDBCA* npcComp)
		{
			return ((::System::Void(*)(::PVOID, ::COCJHGGDBCA*))((::PBYTE)hIl2Cpp + NPCCROWD_GAMEPLAYTASK_NPCGAMEPLAYTASKCONTAINERSUBSYSTEM___C__UPDATE_B__2_0_OFFSET))(this, npcComp);
		}
	};
}
