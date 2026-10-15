#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleTarget.h"
#include "unitysdk/RPG/GameCore/MarbleTaskConfig.h"
class AOOPAHPBLHI;
class FCOEMCEDLNL;

#define AOOPAHPBLHI_CTOR_OFFSET UNITYSDK_OFFSET(0x1CCBDCD0)
#define AOOPAHPBLHI_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CCBDCE0)
#define AOOPAHPBLHI_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CCBDC80)

inline static constexpr unsigned int AOOPAHPBLHI_TypeDefinitionIndex = 16850;

	class AOOPAHPBLHI : public ::RPG::GameCore::MarbleTaskConfig
	{
	public:
		::RPG::GameCore::MarbleTarget HILNFHCPEAD; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOOPAHPBLHI_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::AOOPAHPBLHI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::AOOPAHPBLHI*))((::PBYTE)hIl2Cpp + AOOPAHPBLHI_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::AOOPAHPBLHI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::AOOPAHPBLHI*))((::PBYTE)hIl2Cpp + AOOPAHPBLHI_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
