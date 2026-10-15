#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareAngleBetweenVCameraAndDir; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREANGLEBETWEENVCAMERAANDDIR_CTOR_OFFSET UNITYSDK_OFFSET(0x1D49B9C0)
#define RPG_GAMECORE_BYCOMPAREANGLEBETWEENVCAMERAANDDIR_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D49BCD0)
#define RPG_GAMECORE_BYCOMPAREANGLEBETWEENVCAMERAANDDIR_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D49BCA0)
#define RPG_GAMECORE_BYCOMPAREANGLEBETWEENVCAMERAANDDIR_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D49B9D0)
#define RPG_GAMECORE_BYCOMPAREANGLEBETWEENVCAMERAANDDIR_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D49B990)

namespace RPG::GameCore
{
	class ByCompareAngleBetweenVCameraAndDir : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Boolean UseRealCameraDir; // 0x20
		::System::Byte _padding0[0x7];
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x28
		::RPG::GameCore::TargetEvaluator* SourceType; // 0x30
		::RPG::GameCore::CompareType CompareType; // 0x38
		::System::Byte _padding1[0x4];
		::RPG::GameCore::DynamicFloat* CompareValue; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREANGLEBETWEENVCAMERAANDDIR_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareAngleBetweenVCameraAndDir* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareAngleBetweenVCameraAndDir*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREANGLEBETWEENVCAMERAANDDIR_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareAngleBetweenVCameraAndDir* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareAngleBetweenVCameraAndDir*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREANGLEBETWEENVCAMERAANDDIR_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareAngleBetweenVCameraAndDir* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareAngleBetweenVCameraAndDir*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREANGLEBETWEENVCAMERAANDDIR_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareAngleBetweenVCameraAndDir* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareAngleBetweenVCameraAndDir*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREANGLEBETWEENVCAMERAANDDIR_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
