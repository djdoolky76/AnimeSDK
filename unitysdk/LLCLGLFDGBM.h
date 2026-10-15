#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimCustomScreenTransferStyle.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class LLCLGLFDGBM;

#define LLCLGLFDGBM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D10D3D0)
#define LLCLGLFDGBM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D10D3E0)
#define LLCLGLFDGBM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D10D3A0)

inline static constexpr unsigned int LLCLGLFDGBM_TypeDefinitionIndex = 21486;

	class LLCLGLFDGBM : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::FiveDimCustomScreenTransferStyle JJIDJALHONN; // 0x18
		::System::Boolean AHIBJAAJJKI; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLCLGLFDGBM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::LLCLGLFDGBM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LLCLGLFDGBM*))((::PBYTE)hIl2Cpp + LLCLGLFDGBM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::LLCLGLFDGBM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LLCLGLFDGBM*))((::PBYTE)hIl2Cpp + LLCLGLFDGBM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
