#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ExpeditionBattleFlowStateType.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class ExpeditionBattleFlowStateConfig; }
namespace System { class String; }

#define EOLPGHDBJNF_CTOR_OFFSET UNITYSDK_OFFSET(0x16B28660)
#define EOLPGHDBJNF_EKBGBBACMFL_OFFSET UNITYSDK_OFFSET(0x16B28500)
#define EOLPGHDBJNF_KPOBDDBABJG_OFFSET UNITYSDK_OFFSET(0x16B28490)

inline static constexpr unsigned int EOLPGHDBJNF_TypeDefinitionIndex = 65316;

	class EOLPGHDBJNF : public ::System::Object
	{
	public:
		// static const ::System::String* LFLICOKAJEK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOLPGHDBJNF_CTOR_OFFSET))(this);
		}

		::System::String* KPOBDDBABJG(::RPG::GameCore::ExpeditionBattleFlowStateType a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::ExpeditionBattleFlowStateType))((::PBYTE)hIl2Cpp + EOLPGHDBJNF_KPOBDDBABJG_OFFSET))(this, a1);
		}

		::RPG::GameCore::ExpeditionBattleFlowStateConfig* EKBGBBACMFL(::RPG::GameCore::ExpeditionBattleFlowStateType a1)
		{
			return ((::RPG::GameCore::ExpeditionBattleFlowStateConfig*(*)(::PVOID, ::RPG::GameCore::ExpeditionBattleFlowStateType))((::PBYTE)hIl2Cpp + EOLPGHDBJNF_EKBGBBACMFL_OFFSET))(this, a1);
		}

	};
