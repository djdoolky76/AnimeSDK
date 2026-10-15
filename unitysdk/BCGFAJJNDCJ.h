#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LastFixPoint.h"
#include "unitysdk/System/Decimal.h"

#define BCGFAJJNDCJ_EICEIEHKMBB_OFFSET UNITYSDK_OFFSET(0x3C41150)
#define BCGFAJJNDCJ_GBMNPHELINJ_OFFSET UNITYSDK_OFFSET(0x3C410B0)
#define BCGFAJJNDCJ_JKPIANMFEMO_OFFSET UNITYSDK_OFFSET(0x1D30)
#define BCGFAJJNDCJ_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x3C41130)
#define BCGFAJJNDCJ_MCEPPPJPEGG_OFFSET UNITYSDK_OFFSET(0x1D30)
#define BCGFAJJNDCJ_NLOPAOJDOAG_OFFSET UNITYSDK_OFFSET(0x1D40)

inline static constexpr unsigned int BCGFAJJNDCJ_TypeDefinitionIndex = 9947;

	struct alignas(4) BCGFAJJNDCJ
	{
		::System::Int64 KIPJPGOLEJH; // 0x10
		::RPG::GameCore::LastFixPoint OCMIKFFIAIN; // 0x18
		::System::Void GBMNPHELINJ(::RPG::GameCore::LastFixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LastFixPoint))((::PBYTE)hIl2Cpp + BCGFAJJNDCJ_GBMNPHELINJ_OFFSET))(this, a1);
		}

		::System::Int64 JKPIANMFEMO()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + BCGFAJJNDCJ_JKPIANMFEMO_OFFSET))(this);
		}

		::RPG::GameCore::LastFixPoint NLOPAOJDOAG()
		{
			return ((::RPG::GameCore::LastFixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + BCGFAJJNDCJ_NLOPAOJDOAG_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCGFAJJNDCJ_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Int64 MCEPPPJPEGG()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + BCGFAJJNDCJ_MCEPPPJPEGG_OFFSET))(this);
		}

		::System::Decimal EICEIEHKMBB()
		{
			return ((::System::Decimal(*)(::PVOID))((::PBYTE)hIl2Cpp + BCGFAJJNDCJ_EICEIEHKMBB_OFFSET))(this);
		}

	};
