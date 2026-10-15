#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BNDIHLKKEDI.h"
namespace RPG::GameCore { class FiveDimMiniGameCollectCoinWave; }

#define DADCHPKLKMJ_CNGIOAOEHHK_OFFSET UNITYSDK_OFFSET(0xDFBF830)
#define DADCHPKLKMJ_CTOR_OFFSET UNITYSDK_OFFSET(0xDFBFAD0)
#define DADCHPKLKMJ_DPNBJKBDOMM_OFFSET UNITYSDK_OFFSET(0xDFBF940)
#define DADCHPKLKMJ_IAALCCPFIAG_OFFSET UNITYSDK_OFFSET(0xDFBEE80)
#define DADCHPKLKMJ_LIICLMEACCN_OFFSET UNITYSDK_OFFSET(0xDFBEDB0)
#define DADCHPKLKMJ_MCCBIPLHJOD_OFFSET UNITYSDK_OFFSET(0xDFBF6A0)

inline static constexpr unsigned int DADCHPKLKMJ_TypeDefinitionIndex = 76938;

	class DADCHPKLKMJ : public ::BNDIHLKKEDI
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DADCHPKLKMJ_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::FiveDimMiniGameCollectCoinWave* LIICLMEACCN()
		{
			return ((::RPG::GameCore::FiveDimMiniGameCollectCoinWave*(*)(::PVOID))((::PBYTE)hIl2Cpp + DADCHPKLKMJ_LIICLMEACCN_OFFSET))(this);
		}

		::System::Boolean IAALCCPFIAG(::RPG::GameCore::FiveDimMiniGameCollectCoinWave* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::FiveDimMiniGameCollectCoinWave*))((::PBYTE)hIl2Cpp + DADCHPKLKMJ_IAALCCPFIAG_OFFSET))(this, a1);
		}

		::System::Void MCCBIPLHJOD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DADCHPKLKMJ_MCCBIPLHJOD_OFFSET))(this);
		}

		::System::Single CNGIOAOEHHK()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DADCHPKLKMJ_CNGIOAOEHHK_OFFSET))(this);
		}

		::System::Single DPNBJKBDOMM()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DADCHPKLKMJ_DPNBJKBDOMM_OFFSET))(this);
		}

	};
