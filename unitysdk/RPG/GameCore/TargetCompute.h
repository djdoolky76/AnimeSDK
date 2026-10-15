#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetComputeType.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetCompute; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETCOMPUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB598E0)
#define RPG_GAMECORE_TARGETCOMPUTE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB59A90)
#define RPG_GAMECORE_TARGETCOMPUTE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB59A40)
#define RPG_GAMECORE_TARGETCOMPUTE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB598F0)
#define RPG_GAMECORE_TARGETCOMPUTE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB59890)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetCompute_TypeDefinitionIndex = 23896;

	class TargetCompute : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::RPG::GameCore::TargetComputeType ComputeType; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::TargetEvaluator*>* Targets; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETCOMPUTE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetCompute* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetCompute*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETCOMPUTE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetCompute* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetCompute*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETCOMPUTE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetCompute* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetCompute*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETCOMPUTE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetCompute* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetCompute*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETCOMPUTE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
