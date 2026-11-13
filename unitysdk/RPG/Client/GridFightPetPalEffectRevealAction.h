#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightPreparationPendingAction.h"
namespace RPG::Client { class GridFightPetPalConfig; }
namespace RPG::Client { class GridFightPetPalEffectConfig; }
namespace RPG::Client { class LuaUIController; }
namespace System { class Action; }

#define RPG_CLIENT_GRIDFIGHTPETPALEFFECTREVEALACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF1B940)
#define RPG_CLIENT_GRIDFIGHTPETPALEFFECTREVEALACTION_GET_PETPALCONFIG_OFFSET UNITYSDK_OFFSET(0x1DF241D0)
#define RPG_CLIENT_GRIDFIGHTPETPALEFFECTREVEALACTION_GET_PETPALEFFECTCONFIG_OFFSET UNITYSDK_OFFSET(0x1DF241E0)
#define RPG_CLIENT_GRIDFIGHTPETPALEFFECTREVEALACTION_REGISTERBEFOREFINISHACTION_OFFSET UNITYSDK_OFFSET(0x1DF24370)
#define RPG_CLIENT_GRIDFIGHTPETPALEFFECTREVEALACTION__ONFINISH_OFFSET UNITYSDK_OFFSET(0x1DF24300)
#define RPG_CLIENT_GRIDFIGHTPETPALEFFECTREVEALACTION__ONSTART_OFFSET UNITYSDK_OFFSET(0x1DF24200)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightPetPalEffectRevealAction_TypeDefinitionIndex = 66729;

	class GridFightPetPalEffectRevealAction : public ::RPG::Client::GridFightPreparationPendingAction
	{
	public:
		::RPG::Client::GridFightPetPalConfig* _PetPalConfig_k__BackingField; // 0x20
		::System::Action* _BeforeFinishAction; // 0x28
		::RPG::Client::LuaUIController* _HandleUI; // 0x30
		::RPG::Client::GridFightPetPalEffectConfig* _PetPalEffectConfig_k__BackingField; // 0x38
		// static const ::System::String* _SCRIPT_PATH; // 0x0
		::System::Void _ctor(::RPG::Client::GridFightPetPalConfig* a1, ::RPG::Client::GridFightPetPalEffectConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightPetPalConfig*, ::RPG::Client::GridFightPetPalEffectConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPETPALEFFECTREVEALACTION_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::GridFightPetPalConfig* get_PetPalConfig()
		{
			return ((::RPG::Client::GridFightPetPalConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPETPALEFFECTREVEALACTION_GET_PETPALCONFIG_OFFSET))(this);
		}

		::RPG::Client::GridFightPetPalEffectConfig* get_PetPalEffectConfig()
		{
			return ((::RPG::Client::GridFightPetPalEffectConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPETPALEFFECTREVEALACTION_GET_PETPALEFFECTCONFIG_OFFSET))(this);
		}

		::System::Void _OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPETPALEFFECTREVEALACTION__ONSTART_OFFSET))(this);
		}

		::System::Void _OnFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPETPALEFFECTREVEALACTION__ONFINISH_OFFSET))(this);
		}

		::System::Void RegisterBeforeFinishAction(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPETPALEFFECTREVEALACTION_REGISTERBEFOREFINISHACTION_OFFSET))(this, a1);
		}

	};
}
