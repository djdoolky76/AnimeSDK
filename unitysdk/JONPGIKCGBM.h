#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
class FCOEMCEDLNL;
class JONPGIKCGBM;
namespace System { class String; }

#define JONPGIKCGBM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D058670)
#define JONPGIKCGBM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D058680)
#define JONPGIKCGBM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D058640)

	class JONPGIKCGBM : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::String* KEFNJGCFHGH; // 0x18
		::System::String* PFDLMJILKBK; // 0x20
		::System::Boolean CLJEBKODGHK; // 0x28
		::System::Boolean AHEEAFKFALM; // 0x29
		::System::Byte _padding0[0x2];
		::System::Single HIDPIGLKPFB; // 0x2C
		::System::Single MHKKCHLPABL; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JONPGIKCGBM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::JONPGIKCGBM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::JONPGIKCGBM*))((::PBYTE)hIl2Cpp + JONPGIKCGBM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::JONPGIKCGBM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::JONPGIKCGBM*))((::PBYTE)hIl2Cpp + JONPGIKCGBM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
