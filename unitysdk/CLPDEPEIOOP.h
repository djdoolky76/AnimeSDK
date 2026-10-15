#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TurnState.h"
class CLPDEPEIOOP;
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetEvaluator; }

#define CLPDEPEIOOP_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC26C70)
#define CLPDEPEIOOP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC26CB0)
#define CLPDEPEIOOP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC26C10)

inline static constexpr unsigned int CLPDEPEIOOP_TypeDefinitionIndex = 23197;

	class CLPDEPEIOOP : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TurnState>* DIFLOKJFCEO; // 0x18
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x20
		::System::Boolean GEOPPFCKACN; // 0x28
		::System::Boolean ICADPILMFPK; // 0x29
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLPDEPEIOOP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::CLPDEPEIOOP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::CLPDEPEIOOP*))((::PBYTE)hIl2Cpp + CLPDEPEIOOP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::CLPDEPEIOOP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::CLPDEPEIOOP*))((::PBYTE)hIl2Cpp + CLPDEPEIOOP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
