#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetSeqOperation; }
namespace RPG::GameCore { class TargetSortSequence; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETSORTSEQUENCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB73F10)
#define RPG_GAMECORE_TARGETSORTSEQUENCE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB74020)
#define RPG_GAMECORE_TARGETSORTSEQUENCE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB73FD0)
#define RPG_GAMECORE_TARGETSORTSEQUENCE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB73F20)
#define RPG_GAMECORE_TARGETSORTSEQUENCE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB73EC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetSortSequence_TypeDefinitionIndex = 23978;

	class TargetSortSequence : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::Il2CppArray<::RPG::GameCore::TargetSeqOperation*>* SortSequence; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTSEQUENCE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetSortSequence* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetSortSequence*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTSEQUENCE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetSortSequence* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetSortSequence*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTSEQUENCE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortSequence* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortSequence*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTSEQUENCE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortSequence* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortSequence*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTSEQUENCE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
