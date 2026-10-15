#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class HNGOKEODKMC;
namespace RPG::GameCore { class DynamicString; }

#define HNGOKEODKMC_CTOR_OFFSET UNITYSDK_OFFSET(0x1CECCD10)
#define HNGOKEODKMC_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CECCD20)
#define HNGOKEODKMC_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CECCCE0)

inline static constexpr unsigned int HNGOKEODKMC_TypeDefinitionIndex = 21437;

	class HNGOKEODKMC : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* MNMHMECGDAK; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNGOKEODKMC_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::HNGOKEODKMC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::HNGOKEODKMC*))((::PBYTE)hIl2Cpp + HNGOKEODKMC_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::HNGOKEODKMC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::HNGOKEODKMC*))((::PBYTE)hIl2Cpp + HNGOKEODKMC_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
