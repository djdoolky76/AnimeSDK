#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class EJLGLHKDMAI;
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetEvaluator; }

#define EJLGLHKDMAI_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD62F40)
#define EJLGLHKDMAI_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CD62F50)
#define EJLGLHKDMAI_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CD62F10)

inline static constexpr unsigned int EJLGLHKDMAI_TypeDefinitionIndex = 21966;

	class EJLGLHKDMAI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJLGLHKDMAI_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::EJLGLHKDMAI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::EJLGLHKDMAI*))((::PBYTE)hIl2Cpp + EJLGLHKDMAI_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::EJLGLHKDMAI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::EJLGLHKDMAI*))((::PBYTE)hIl2Cpp + EJLGLHKDMAI_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
