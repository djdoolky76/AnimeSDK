#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class HBPGKIFDBOC;
namespace RPG::GameCore { class JsonEnum; }

#define HBPGKIFDBOC_CTOR_OFFSET UNITYSDK_OFFSET(0x1CE5CBA0)
#define HBPGKIFDBOC_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CE5CBB0)
#define HBPGKIFDBOC_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CE5CB70)

inline static constexpr unsigned int HBPGKIFDBOC_TypeDefinitionIndex = 24152;

	class HBPGKIFDBOC : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::JsonEnum* JDABEACCKPM; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBPGKIFDBOC_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::HBPGKIFDBOC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::HBPGKIFDBOC*))((::PBYTE)hIl2Cpp + HBPGKIFDBOC_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::HBPGKIFDBOC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::HBPGKIFDBOC*))((::PBYTE)hIl2Cpp + HBPGKIFDBOC_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
