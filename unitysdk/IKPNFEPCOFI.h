#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/CellDiffusionConfigParas.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class FBAMLABJMKF;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IKPNFEPCOFI_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x16580890)
#define IKPNFEPCOFI_BLAEBCBLLMD_OFFSET UNITYSDK_OFFSET(0x16581040)
#define IKPNFEPCOFI_DDPPCLDJMHF_OFFSET UNITYSDK_OFFSET(0x16581050)
#define IKPNFEPCOFI_EAKLNAEHABA_OFFSET UNITYSDK_OFFSET(0x165802B0)
#define IKPNFEPCOFI_HCFDBPECLOP_OFFSET UNITYSDK_OFFSET(0x165801F0)
#define IKPNFEPCOFI_HDDHCIOMPCJ_OFFSET UNITYSDK_OFFSET(0x165812B0)
#define IKPNFEPCOFI_PDCDGKDLGFI_OFFSET UNITYSDK_OFFSET(0x16580C40)
#define IKPNFEPCOFI_PKAFJHDJEDO_OFFSET UNITYSDK_OFFSET(0x165800E0)
#define IKPNFEPCOFI__CTOR_OFFSET UNITYSDK_OFFSET(0x1657FED0)

inline static constexpr unsigned int IKPNFEPCOFI_TypeDefinitionIndex = 41482;

class IKPNFEPCOFI : public ::System::Object
{
public:
	::System::Action_1<::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::System::Single>*>* HBAKFLBLIBF; // 0x10
	::System::Action* CHCGMACMJLD; // 0x18
	::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::System::Nullable_1<::System::Single>>* BHNKLAOCPKI; // 0x20
	::MoleMole::HollowChessboard::CellDiffusionConfigParas JPBLNONPOFN; // 0x28
	::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* IMNGHFJJFFO; // 0x48
	::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::System::Single>* IMCBMMEKHKB; // 0x50
	::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::System::Single>* HPDGGJKAEIG; // 0x58
	::System::Single JFIBDDIDEMA; // 0x60
	::System::Single PACAOHEGLOH; // 0x64
	::System::Single AMBPGELHGAE; // 0x68
	::System::Single CFPNFFDCGOL; // 0x6C
	::MoleMole::Vector2Int MKEGNKPNOAB; // 0x70
	::System::Boolean JMDILJBFPFH; // 0x78
	::System::Boolean BNPFOGHFOBD; // 0x79
	::System::Boolean GGOPFLNDJGB; // 0x7A
	::System::Byte _padding0[0x1];
	::System::ValueTuple_2<::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell> HKEIALIKNFP; // 0x7C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKPNFEPCOFI__CTOR_OFFSET))(this);
	}

	::System::Void PKAFJHDJEDO(::System::Single NMJENEBEBAB, ::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::System::Single>* MIGEAFFJKEL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::System::Single>*))((::PBYTE)hIl2Cpp + IKPNFEPCOFI_PKAFJHDJEDO_OFFSET))(this, NMJENEBEBAB, MIGEAFFJKEL);
	}

	::System::Void BBOMJDBNHIC(::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* BEDDEEHNOIN, ::FBAMLABJMKF* COBEJJHGMPO, ::MoleMole::Vector2Int BOPALLCIMBM, ::System::ValueTuple_2<::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell> IJILJGHLBBO, ::System::Single DIJICEHGBJM, ::MoleMole::HollowChessboard::CellDiffusionConfigParas BGPBINIJKCK, ::System::Boolean IBPPKLKGNOO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*, ::FBAMLABJMKF*, ::MoleMole::Vector2Int, ::System::ValueTuple_2<::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell>, ::System::Single, ::MoleMole::HollowChessboard::CellDiffusionConfigParas, ::System::Boolean))((::PBYTE)hIl2Cpp + IKPNFEPCOFI_BBOMJDBNHIC_OFFSET))(this, BEDDEEHNOIN, COBEJJHGMPO, BOPALLCIMBM, IJILJGHLBBO, DIJICEHGBJM, BGPBINIJKCK, IBPPKLKGNOO);
	}

	::System::Single PDCDGKDLGFI(::MoleMole::Vector2Int MPLDDNMCECG, ::System::ValueTuple_2<::MoleMole::Vector2Int, ::MoleMole::Vector2Int> CILGJGGKAGM)
	{
		return ((::System::Single(*)(::PVOID, ::MoleMole::Vector2Int, ::System::ValueTuple_2<::MoleMole::Vector2Int, ::MoleMole::Vector2Int>))((::PBYTE)hIl2Cpp + IKPNFEPCOFI_PDCDGKDLGFI_OFFSET))(this, MPLDDNMCECG, CILGJGGKAGM);
	}

	::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::System::Single>* BLAEBCBLLMD()
	{
		return ((::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKPNFEPCOFI_BLAEBCBLLMD_OFFSET))(this);
	}

	::System::Void DDPPCLDJMHF(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IKPNFEPCOFI_DDPPCLDJMHF_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Boolean HDDHCIOMPCJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IKPNFEPCOFI_HDDHCIOMPCJ_OFFSET))(this);
	}

	::System::Single HCFDBPECLOP(::System::Single EPPCCEEAHLN, ::System::Single EEODALLOKMF)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + IKPNFEPCOFI_HCFDBPECLOP_OFFSET))(this, EPPCCEEAHLN, EEODALLOKMF);
	}

	::System::Void EAKLNAEHABA(::System::Single EPPCCEEAHLN, ::System::Single GPBGNDMFOAC, ::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::System::Single>* LJMAHFIDOAB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::System::Single>*))((::PBYTE)hIl2Cpp + IKPNFEPCOFI_EAKLNAEHABA_OFFSET))(this, EPPCCEEAHLN, GPBGNDMFOAC, LJMAHFIDOAB);
	}
};
