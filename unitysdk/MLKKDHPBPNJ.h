#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderDataHandle.h"

class BEJIHCCDEPL;
class DNJGCKKGBKH_KDJJMKEANKA;
class HJEBAFLEPOF;
class PEOIIKCBFNG;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MLKKDHPBPNJ_AHCIBCLHLNE_OFFSET UNITYSDK_OFFSET(0x17D4BE40)
#define MLKKDHPBPNJ_GHBFAMLOANG_OFFSET UNITYSDK_OFFSET(0x17D4B0C0)
#define MLKKDHPBPNJ_GMIIICPILDI_1_OFFSET UNITYSDK_OFFSET(0x17D4C020)
#define MLKKDHPBPNJ_GMIIICPILDI_OFFSET UNITYSDK_OFFSET(0x17D4AFB0)
#define MLKKDHPBPNJ_MBDKAIOBEMG_OFFSET UNITYSDK_OFFSET(0x17D4B210)
#define MLKKDHPBPNJ_NJFPBOBKEKN_OFFSET UNITYSDK_OFFSET(0x17D4BB30)
#define MLKKDHPBPNJ_ODEBGPIOOBH_OFFSET UNITYSDK_OFFSET(0x17D4C010)
#define MLKKDHPBPNJ_OLIJAJHGNHN_OFFSET UNITYSDK_OFFSET(0x17D4BC60)
#define MLKKDHPBPNJ_ONOOIDDECDH_OFFSET UNITYSDK_OFFSET(0x17D4B0D0)
#define MLKKDHPBPNJ__CCTOR_OFFSET UNITYSDK_OFFSET(0x17D4AD80)
#define MLKKDHPBPNJ__CTOR_OFFSET UNITYSDK_OFFSET(0x17D4ADD0)

inline static constexpr unsigned int MLKKDHPBPNJ_TypeDefinitionIndex = 80335;

class MLKKDHPBPNJ : public ::System::Object
{
public:
	static ::DNJGCKKGBKH_KDJJMKEANKA** StaticGet_BEJDPFOFNJE()
	{
		return (::DNJGCKKGBKH_KDJJMKEANKA**)Il2CppClass::FromTypeDefinitionIndex(MLKKDHPBPNJ_TypeDefinitionIndex)->GetStaticField(0x4F840);
	}
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::UInt32>* IFJELDFNNPI; // 0x10
	::BEJIHCCDEPL* OHCDILLJFFL; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::PEOIIKCBFNG*>* FCBCMLCECOJ; // 0x20
	::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::System::UInt32>* FJNDICJKLPL; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MLKKDHPBPNJ__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLKKDHPBPNJ__CTOR_OFFSET))(this);
	}

	::PEOIIKCBFNG* GMIIICPILDI(::MoleMole::HollowChessboard::HollowCell PLCAJMBIJIB)
	{
		return ((::PEOIIKCBFNG*(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + MLKKDHPBPNJ_GMIIICPILDI_OFFSET))(this, PLCAJMBIJIB);
	}

	::BEJIHCCDEPL* GHBFAMLOANG()
	{
		return ((::BEJIHCCDEPL*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLKKDHPBPNJ_GHBFAMLOANG_OFFSET))(this);
	}

	::System::Void ONOOIDDECDH(::MoleMole::HollowChessboard::RenderDataHandle PHHDHIBOCKA)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::RenderDataHandle))((::PBYTE)hIl2Cpp + MLKKDHPBPNJ_ONOOIDDECDH_OFFSET))(this, PHHDHIBOCKA);
	}

	::PEOIIKCBFNG* MBDKAIOBEMG(::MoleMole::HollowChessboard::HollowCell PLCAJMBIJIB, ::PEOIIKCBFNG* MDFKCDCMHGB, ::HJEBAFLEPOF* LAEMJKCIKDI)
	{
		return ((::PEOIIKCBFNG*(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::PEOIIKCBFNG*, ::HJEBAFLEPOF*))((::PBYTE)hIl2Cpp + MLKKDHPBPNJ_MBDKAIOBEMG_OFFSET))(this, PLCAJMBIJIB, MDFKCDCMHGB, LAEMJKCIKDI);
	}

	::PEOIIKCBFNG* NJFPBOBKEKN(::MoleMole::HollowChessboard::HollowCell PLCAJMBIJIB)
	{
		return ((::PEOIIKCBFNG*(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + MLKKDHPBPNJ_NJFPBOBKEKN_OFFSET))(this, PLCAJMBIJIB);
	}

	::System::Void AHCIBCLHLNE(::MoleMole::HollowChessboard::RenderDataHandle PHHDHIBOCKA, ::MoleMole::HollowChessboard::HollowCell PLCAJMBIJIB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::RenderDataHandle, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + MLKKDHPBPNJ_AHCIBCLHLNE_OFFSET))(this, PHHDHIBOCKA, PLCAJMBIJIB);
	}

	::System::Void ODEBGPIOOBH(::BEJIHCCDEPL* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::BEJIHCCDEPL*))((::PBYTE)hIl2Cpp + MLKKDHPBPNJ_ODEBGPIOOBH_OFFSET))(this, EGEGIMGMJHN);
	}

	::PEOIIKCBFNG* GMIIICPILDI_1(::System::UInt32 ACHBBPJIBIE)
	{
		return ((::PEOIIKCBFNG*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MLKKDHPBPNJ_GMIIICPILDI_1_OFFSET))(this, ACHBBPJIBIE);
	}

	::PEOIIKCBFNG* OLIJAJHGNHN(::MoleMole::HollowChessboard::HollowCell PLCAJMBIJIB)
	{
		return ((::PEOIIKCBFNG*(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + MLKKDHPBPNJ_OLIJAJHGNHN_OFFSET))(this, PLCAJMBIJIB);
	}
};
