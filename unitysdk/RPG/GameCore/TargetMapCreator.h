#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetMapCreator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETMAPCREATOR_CTOR_OFFSET UNITYSDK_OFFSET(0x206F4C50)
#define RPG_GAMECORE_TARGETMAPCREATOR_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x206F4D50)
#define RPG_GAMECORE_TARGETMAPCREATOR_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x206F4D20)
#define RPG_GAMECORE_TARGETMAPCREATOR_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x206F4C60)
#define RPG_GAMECORE_TARGETMAPCREATOR_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x206F4B80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetMapCreator_TypeDefinitionIndex = 24410;

	class TargetMapCreator : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Boolean Recursive; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPCREATOR_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetMapCreator* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetMapCreator*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPCREATOR_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetMapCreator* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetMapCreator*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPCREATOR_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapCreator* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapCreator*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPCREATOR_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapCreator* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapCreator*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPCREATOR_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
