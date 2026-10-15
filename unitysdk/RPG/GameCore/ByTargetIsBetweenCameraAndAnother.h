#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByTargetIsBetweenCameraAndAnother; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYTARGETISBETWEENCAMERAANDANOTHER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D50D8B0)
#define RPG_GAMECORE_BYTARGETISBETWEENCAMERAANDANOTHER_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D50DAB0)
#define RPG_GAMECORE_BYTARGETISBETWEENCAMERAANDANOTHER_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D50DA80)
#define RPG_GAMECORE_BYTARGETISBETWEENCAMERAANDANOTHER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D50D8C0)
#define RPG_GAMECORE_BYTARGETISBETWEENCAMERAANDANOTHER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D50D880)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByTargetIsBetweenCameraAndAnother_TypeDefinitionIndex = 23327;

	class ByTargetIsBetweenCameraAndAnother : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* MiddleTarget; // 0x20
		::RPG::GameCore::TargetEvaluator* AnotherTarget; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETISBETWEENCAMERAANDANOTHER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByTargetIsBetweenCameraAndAnother* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByTargetIsBetweenCameraAndAnother*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETISBETWEENCAMERAANDANOTHER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByTargetIsBetweenCameraAndAnother* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByTargetIsBetweenCameraAndAnother*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETISBETWEENCAMERAANDANOTHER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetIsBetweenCameraAndAnother* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetIsBetweenCameraAndAnother*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETISBETWEENCAMERAANDANOTHER_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetIsBetweenCameraAndAnother* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetIsBetweenCameraAndAnother*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETISBETWEENCAMERAANDANOTHER_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
