#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LHHEGNEBMLN.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
namespace RPG::GameCore { class GameEntity; }

#define EGPLHHDBEIP_CTOR_OFFSET UNITYSDK_OFFSET(0x1639A8B0)
#define EGPLHHDBEIP_GET_DIFFICULTYRATIO_OFFSET UNITYSDK_OFFSET(0x1639A890)
#define EGPLHHDBEIP_GET_ISPERMANENT_OFFSET UNITYSDK_OFFSET(0x1639A870)
#define EGPLHHDBEIP_MLKICMLGALL_OFFSET UNITYSDK_OFFSET(0x1639A6A0)
#define EGPLHHDBEIP_ONAFTERPLAYERCREATE_OFFSET UNITYSDK_OFFSET(0x1639A630)
#define EGPLHHDBEIP_ONBATTLEINSTANCECREATED_OFFSET UNITYSDK_OFFSET(0x1639A580)
#define EGPLHHDBEIP_SET_DIFFICULTYRATIO_OFFSET UNITYSDK_OFFSET(0x1639A8A0)
#define EGPLHHDBEIP_SET_ISPERMANENT_OFFSET UNITYSDK_OFFSET(0x1639A880)

inline static constexpr unsigned int EGPLHHDBEIP_TypeDefinitionIndex = 57219;

	class EGPLHHDBEIP : public ::LHHEGNEBMLN
	{
	public:
		::RPG::GameCore::FixPoint _DifficultyRatio_k__BackingField; // 0x48
		::System::Boolean _IsPermanent_k__BackingField; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGPLHHDBEIP_CTOR_OFFSET))(this);
		}

		::System::Void OnBattleInstanceCreated()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGPLHHDBEIP_ONBATTLEINSTANCECREATED_OFFSET))(this);
		}

		::System::Void OnAfterPlayerCreate(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + EGPLHHDBEIP_ONAFTERPLAYERCREATE_OFFSET))(this, a1);
		}

		::System::Void MLKICMLGALL(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + EGPLHHDBEIP_MLKICMLGALL_OFFSET))(this, a1);
		}

		::System::Boolean get_IsPermanent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EGPLHHDBEIP_GET_ISPERMANENT_OFFSET))(this);
		}

		::System::Void set_IsPermanent(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EGPLHHDBEIP_SET_ISPERMANENT_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_DifficultyRatio()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + EGPLHHDBEIP_GET_DIFFICULTYRATIO_OFFSET))(this);
		}

		::System::Void set_DifficultyRatio(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + EGPLHHDBEIP_SET_DIFFICULTYRATIO_OFFSET))(this, a1);
		}

	};
