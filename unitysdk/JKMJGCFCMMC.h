#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
class JKMJGCFCMMC;

#define JKMJGCFCMMC_CTOR_OFFSET UNITYSDK_OFFSET(0x1D016CC0)
#define JKMJGCFCMMC_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D016CD0)
#define JKMJGCFCMMC_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D016AF0)

inline static constexpr unsigned int JKMJGCFCMMC_TypeDefinitionIndex = 22657;

	class JKMJGCFCMMC : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKMJGCFCMMC_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::JKMJGCFCMMC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::JKMJGCFCMMC*))((::PBYTE)hIl2Cpp + JKMJGCFCMMC_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::JKMJGCFCMMC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::JKMJGCFCMMC*))((::PBYTE)hIl2Cpp + JKMJGCFCMMC_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
