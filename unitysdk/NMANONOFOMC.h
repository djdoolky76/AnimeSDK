#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class NMANONOFOMC;

#define NMANONOFOMC_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2350C0)
#define NMANONOFOMC_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D2350D0)
#define NMANONOFOMC_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D235090)

inline static constexpr unsigned int NMANONOFOMC_TypeDefinitionIndex = 19940;

	class NMANONOFOMC : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMANONOFOMC_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::NMANONOFOMC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NMANONOFOMC*))((::PBYTE)hIl2Cpp + NMANONOFOMC_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::NMANONOFOMC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NMANONOFOMC*))((::PBYTE)hIl2Cpp + NMANONOFOMC_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
