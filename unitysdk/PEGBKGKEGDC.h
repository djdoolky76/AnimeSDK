#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Decimal.h"

#define PEGBKGKEGDC_EICEIEHKMBB_OFFSET UNITYSDK_OFFSET(0x3C40A70)
#define PEGBKGKEGDC_GBMNPHELINJ_OFFSET UNITYSDK_OFFSET(0x3C40A40)
#define PEGBKGKEGDC_JKPIANMFEMO_OFFSET UNITYSDK_OFFSET(0x1D30)
#define PEGBKGKEGDC_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x3C40A50)
#define PEGBKGKEGDC_MCEPPPJPEGG_OFFSET UNITYSDK_OFFSET(0x1D30)
#define PEGBKGKEGDC_NLOPAOJDOAG_OFFSET UNITYSDK_OFFSET(0x1D40)

inline static constexpr unsigned int PEGBKGKEGDC_TypeDefinitionIndex = 9941;

	struct alignas(4) PEGBKGKEGDC
	{
		::System::Int64 KIPJPGOLEJH; // 0x10
		::RPG::GameCore::FixPoint OCMIKFFIAIN; // 0x18
		::System::Void GBMNPHELINJ(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + PEGBKGKEGDC_GBMNPHELINJ_OFFSET))(this, a1);
		}

		::System::Int64 JKPIANMFEMO()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + PEGBKGKEGDC_JKPIANMFEMO_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint NLOPAOJDOAG()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + PEGBKGKEGDC_NLOPAOJDOAG_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEGBKGKEGDC_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Int64 MCEPPPJPEGG()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + PEGBKGKEGDC_MCEPPPJPEGG_OFFSET))(this);
		}

		::System::Decimal EICEIEHKMBB()
		{
			return ((::System::Decimal(*)(::PVOID))((::PBYTE)hIl2Cpp + PEGBKGKEGDC_EICEIEHKMBB_OFFSET))(this);
		}

	};
