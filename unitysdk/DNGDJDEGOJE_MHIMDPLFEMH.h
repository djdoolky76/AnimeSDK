#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UISkillIndex.h"
#include "unitysdk/RPG/GameCore/BattleOperationType.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class EventManager; }
namespace System { class Action; }

#define DNGDJDEGOJE_MHIMDPLFEMH_BKFNAAILPOB_OFFSET UNITYSDK_OFFSET(0x1194A080)
#define DNGDJDEGOJE_MHIMDPLFEMH_CTOR_OFFSET UNITYSDK_OFFSET(0x11949550)
#define DNGDJDEGOJE_MHIMDPLFEMH_EGLJMJGJBEE_OFFSET UNITYSDK_OFFSET(0x1194A0D0)
#define DNGDJDEGOJE_MHIMDPLFEMH_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1194A260)
#define DNGDJDEGOJE_MHIMDPLFEMH_KIMGPAHIEDA_OFFSET UNITYSDK_OFFSET(0x1194A1B0)
#define DNGDJDEGOJE_MHIMDPLFEMH_OEAHGJKNEPI_OFFSET UNITYSDK_OFFSET(0x1194A200)

inline static constexpr unsigned int DNGDJDEGOJE_MHIMDPLFEMH_TypeDefinitionIndex = 58869;

	class DNGDJDEGOJE_MHIMDPLFEMH : public ::System::Object
	{
	public:
		::System::Action* BJLJAHMLKIO; // 0x10
		::RPG::Client::UISkillIndex LDJMILLLCAE; // 0x18
		::System::Void _ctor(::RPG::Client::UISkillIndex a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UISkillIndex))((::PBYTE)hIl2Cpp + DNGDJDEGOJE_MHIMDPLFEMH_CTOR_OFFSET))(this, a1);
		}

		::System::Void BKFNAAILPOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGDJDEGOJE_MHIMDPLFEMH_BKFNAAILPOB_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::BattleOperationType>* EGLJMJGJBEE()
		{
			return ((::Il2CppArray<::RPG::GameCore::BattleOperationType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGDJDEGOJE_MHIMDPLFEMH_EGLJMJGJBEE_OFFSET))(this);
		}

		::System::Boolean KIMGPAHIEDA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGDJDEGOJE_MHIMDPLFEMH_KIMGPAHIEDA_OFFSET))(this);
		}

		::System::Void OEAHGJKNEPI(::RPG::GameCore::EventManager* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EventManager*, ::System::Action*))((::PBYTE)hIl2Cpp + DNGDJDEGOJE_MHIMDPLFEMH_OEAHGJKNEPI_OFFSET))(this, a1, a2);
		}

		::System::Void JLANKNHFKCN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGDJDEGOJE_MHIMDPLFEMH_JLANKNHFKCN_OFFSET))(this);
		}

	};
