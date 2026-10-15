#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class FPBABHMOAII;
namespace RPG::GameCore { class DynamicFloat; }

#define FPBABHMOAII_CTOR_OFFSET UNITYSDK_OFFSET(0x1CDEB920)
#define FPBABHMOAII_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CDEB930)
#define FPBABHMOAII_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CDEB8F0)

inline static constexpr unsigned int FPBABHMOAII_TypeDefinitionIndex = 10194;

	class FPBABHMOAII : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* FMLGGKAFMKC; // 0x18
		::RPG::GameCore::DynamicFloat* MFNNLGJAEML; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPBABHMOAII_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::FPBABHMOAII* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::FPBABHMOAII*))((::PBYTE)hIl2Cpp + FPBABHMOAII_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::FPBABHMOAII* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::FPBABHMOAII*))((::PBYTE)hIl2Cpp + FPBABHMOAII_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
