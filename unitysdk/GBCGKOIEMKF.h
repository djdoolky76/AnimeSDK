#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
class GBCGKOIEMKF;

#define GBCGKOIEMKF_CTOR_OFFSET UNITYSDK_OFFSET(0x1CDF4960)
#define GBCGKOIEMKF_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CDF4680)
#define GBCGKOIEMKF_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CDF43E0)

inline static constexpr unsigned int GBCGKOIEMKF_TypeDefinitionIndex = 23336;

	class GBCGKOIEMKF : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBCGKOIEMKF_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::GBCGKOIEMKF* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GBCGKOIEMKF*))((::PBYTE)hIl2Cpp + GBCGKOIEMKF_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::GBCGKOIEMKF* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GBCGKOIEMKF*))((::PBYTE)hIl2Cpp + GBCGKOIEMKF_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
