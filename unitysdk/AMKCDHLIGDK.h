#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class IRogueFormulaBuffCountItem; }
namespace RPG::GameCore { class RogueTournFormulaRow; }

#define AMKCDHLIGDK_CTOR_OFFSET UNITYSDK_OFFSET(0x155791E0)
#define AMKCDHLIGDK_GET_ISACTIVATED_OFFSET UNITYSDK_OFFSET(0x15579270)
#define AMKCDHLIGDK_GET_MAINITEM_OFFSET UNITYSDK_OFFSET(0x15579250)
#define AMKCDHLIGDK_GET_SUBITEM_OFFSET UNITYSDK_OFFSET(0x15579260)

inline static constexpr unsigned int AMKCDHLIGDK_TypeDefinitionIndex = 67213;

	class AMKCDHLIGDK : public ::System::Object
	{
	public:
		::RPG::Client::IRogueFormulaBuffCountItem* _SubItem_k__BackingField; // 0x10
		::RPG::Client::IRogueFormulaBuffCountItem* _MainItem_k__BackingField; // 0x18
		::System::Void _ctor(::RPG::GameCore::RogueTournFormulaRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueTournFormulaRow*))((::PBYTE)hIl2Cpp + AMKCDHLIGDK_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::IRogueFormulaBuffCountItem* get_MainItem()
		{
			return ((::RPG::Client::IRogueFormulaBuffCountItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMKCDHLIGDK_GET_MAINITEM_OFFSET))(this);
		}

		::RPG::Client::IRogueFormulaBuffCountItem* get_SubItem()
		{
			return ((::RPG::Client::IRogueFormulaBuffCountItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMKCDHLIGDK_GET_SUBITEM_OFFSET))(this);
		}

		::System::Boolean get_IsActivated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AMKCDHLIGDK_GET_ISACTIVATED_OFFSET))(this);
		}

	};
