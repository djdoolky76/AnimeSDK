#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetTake; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETTAKE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB74250)
#define RPG_GAMECORE_TARGETTAKE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB74350)
#define RPG_GAMECORE_TARGETTAKE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB74320)
#define RPG_GAMECORE_TARGETTAKE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB74260)
#define RPG_GAMECORE_TARGETTAKE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB74180)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetTake_TypeDefinitionIndex = 23901;

	class TargetTake : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::RPG::GameCore::DynamicFloat* Count; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETTAKE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetTake* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetTake*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETTAKE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetTake* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetTake*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETTAKE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetTake* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetTake*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETTAKE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetTake* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetTake*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETTAKE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
