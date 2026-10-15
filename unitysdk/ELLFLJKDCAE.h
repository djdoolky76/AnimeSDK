#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class ELLFLJKDCAE;
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define ELLFLJKDCAE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CDA4160)
#define ELLFLJKDCAE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CDA41F0)
#define ELLFLJKDCAE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CDA40B0)

inline static constexpr unsigned int ELLFLJKDCAE_TypeDefinitionIndex = 22610;

	class ELLFLJKDCAE : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* BCKBHPNAMKJ; // 0x18
		::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>* HMOBDKGBECE; // 0x20
		::RPG::GameCore::JsonEnum* PPLIJIOLFNL; // 0x28
		::RPG::GameCore::DynamicFloat* CKLLHFKPACB; // 0x30
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x38
		::System::String* MAGLCBLICBG; // 0x40
		::RPG::GameCore::TargetEvaluator* MAGHKLPOJJJ; // 0x48
		::RPG::GameCore::DynamicString* GEIGNKLEOBD; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELLFLJKDCAE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::ELLFLJKDCAE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::ELLFLJKDCAE*))((::PBYTE)hIl2Cpp + ELLFLJKDCAE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::ELLFLJKDCAE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::ELLFLJKDCAE*))((::PBYTE)hIl2Cpp + ELLFLJKDCAE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
