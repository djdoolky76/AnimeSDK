#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LJIBNLBCGFG.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

class DFMDFLNGIOG;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AHMDFMCICNL_FAFOHGJJMOG_OFFSET UNITYSDK_OFFSET(0x1647C2B0)
#define AHMDFMCICNL_HCEKJODLHFA_OFFSET UNITYSDK_OFFSET(0x1647C2C0)
#define AHMDFMCICNL_HMNEKBMHILA_OFFSET UNITYSDK_OFFSET(0x1647BD50)
#define AHMDFMCICNL_JALCIHPCJOK_OFFSET UNITYSDK_OFFSET(0x1647C770)
#define AHMDFMCICNL_KEOHGBHCKPJ_OFFSET UNITYSDK_OFFSET(0x1647C820)
#define AHMDFMCICNL_LOGDDKOIODF_OFFSET UNITYSDK_OFFSET(0x1647C2D0)
#define AHMDFMCICNL_MKJHIKOJPGA_OFFSET UNITYSDK_OFFSET(0x1647C690)
#define AHMDFMCICNL_NLPAEDIDCII_OFFSET UNITYSDK_OFFSET(0x1647BFC0)
#define AHMDFMCICNL_OJCIKDBNCJJ_OFFSET UNITYSDK_OFFSET(0x1647C490)
#define AHMDFMCICNL__CTOR_OFFSET UNITYSDK_OFFSET(0x1647BCB0)

inline static constexpr unsigned int AHMDFMCICNL_TypeDefinitionIndex = 74942;

class AHMDFMCICNL : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::DFMDFLNGIOG*>* GMCMLPCDCKP; // 0x10
	::LJIBNLBCGFG _IJCKNMEFNAJ_k__BackingField; // 0x18

	::System::Void _ctor(::LJIBNLBCGFG BONICGBNDAA)
	{
		return ((::System::Void(*)(::PVOID, ::LJIBNLBCGFG))((::PBYTE)hIl2Cpp + AHMDFMCICNL__CTOR_OFFSET))(this, BONICGBNDAA);
	}

	::DFMDFLNGIOG* HMNEKBMHILA(::MoleMole::HollowChessboard::HollowCell CKPGOKHECCH)
	{
		return ((::DFMDFLNGIOG*(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + AHMDFMCICNL_HMNEKBMHILA_OFFSET))(this, CKPGOKHECCH);
	}

	::System::Int32 NLPAEDIDCII(::MoleMole::HollowChessboard::HollowCell CKPGOKHECCH)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + AHMDFMCICNL_NLPAEDIDCII_OFFSET))(this, CKPGOKHECCH);
	}

	::LJIBNLBCGFG FAFOHGJJMOG()
	{
		return ((::LJIBNLBCGFG(*)(::PVOID))((::PBYTE)hIl2Cpp + AHMDFMCICNL_FAFOHGJJMOG_OFFSET))(this);
	}

	::System::Void HCEKJODLHFA(::LJIBNLBCGFG EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::LJIBNLBCGFG))((::PBYTE)hIl2Cpp + AHMDFMCICNL_HCEKJODLHFA_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void LOGDDKOIODF(::System::UInt32 PDDFCKMAAAM)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AHMDFMCICNL_LOGDDKOIODF_OFFSET))(this, PDDFCKMAAAM);
	}

	::System::Int32 OJCIKDBNCJJ(::DFMDFLNGIOG* ADANGBMIJBF)
	{
		return ((::System::Int32(*)(::PVOID, ::DFMDFLNGIOG*))((::PBYTE)hIl2Cpp + AHMDFMCICNL_OJCIKDBNCJJ_OFFSET))(this, ADANGBMIJBF);
	}

	::DFMDFLNGIOG* MKJHIKOJPGA(::System::UInt32 PDDFCKMAAAM)
	{
		return ((::DFMDFLNGIOG*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AHMDFMCICNL_MKJHIKOJPGA_OFFSET))(this, PDDFCKMAAAM);
	}

	::System::Boolean JALCIHPCJOK(::System::UInt32 PDDFCKMAAAM)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AHMDFMCICNL_JALCIHPCJOK_OFFSET))(this, PDDFCKMAAAM);
	}

	::System::Boolean KEOHGBHCKPJ(::MoleMole::HollowChessboard::HollowCell CKPGOKHECCH)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + AHMDFMCICNL_KEOHGBHCKPJ_OFFSET))(this, CKPGOKHECCH);
	}
};
