#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BCHFMCFMKMG.h"
#include "unitysdk/MFPKEGLIDLI_GGNLDAMIDEI.h"
#include "unitysdk/MoleMole/HollowChessboard/GeometryHeightType.h"
#include "unitysdk/PNBEKPFCMKK.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/PEBKOGJHCAF.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DPGAMAHNECL_BDEJPJCPFAE_OFFSET UNITYSDK_OFFSET(0x13473C50)
#define DPGAMAHNECL_DDMGALAMCDL_OFFSET UNITYSDK_OFFSET(0x13473800)
#define DPGAMAHNECL_DMOLIELPHPA_OFFSET UNITYSDK_OFFSET(0x13473A70)
#define DPGAMAHNECL_LLNEBHDKNGO_OFFSET UNITYSDK_OFFSET(0x134739E0)
#define DPGAMAHNECL_MBHJJNFNGPE_OFFSET UNITYSDK_OFFSET(0x13473720)
#define DPGAMAHNECL_NGIGLEAHIFG_OFFSET UNITYSDK_OFFSET(0x13473A60)
#define DPGAMAHNECL_OFJFJMDFNOB_OFFSET UNITYSDK_OFFSET(0x13473A80)
#define DPGAMAHNECL_OGJLOILPGOB_OFFSET UNITYSDK_OFFSET(0x13473BA0)
#define DPGAMAHNECL__CCTOR_OFFSET UNITYSDK_OFFSET(0x13473710)
#define DPGAMAHNECL__CTOR_OFFSET UNITYSDK_OFFSET(0x13473590)

inline static constexpr unsigned int DPGAMAHNECL_TypeDefinitionIndex = 41262;

class DPGAMAHNECL : public ::System::Object
{
public:
	static ::System::UInt32* StaticGet_ABHBKFJKINO()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(DPGAMAHNECL_TypeDefinitionIndex)->GetStaticField(0xC870);
	}
	::PNBEKPFCMKK BDNIGFGPGCC; // 0x10
	::PNBEKPFCMKK POINNGPLAFC; // 0x30
	::System::Collections::Generic::List_1<::PNBEKPFCMKK>* NGFAMIGHNMN; // 0x50
	::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Single>* CDCALHCNGDF; // 0x58
	::System::Collections::Generic::List_1<::PNBEKPFCMKK>* OOBOMJFEMEA; // 0x60
	::System::Single _MOJIHAILMDL_k__BackingField; // 0x68
	::MoleMole::HollowChessboard::GeometryHeightType HKGDOOKHFGH; // 0x6C
	::BCHFMCFMKMG OBNIAHNMHPF; // 0x70

	::System::Void _ctor(::MoleMole::HollowChessboard::GeometryHeightType HKGDOOKHFGH, ::BCHFMCFMKMG OBNIAHNMHPF)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::GeometryHeightType, ::BCHFMCFMKMG))((::PBYTE)hIl2Cpp + DPGAMAHNECL__CTOR_OFFSET))(this, HKGDOOKHFGH, OBNIAHNMHPF);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DPGAMAHNECL__CCTOR_OFFSET))();
	}

	::PEBKOGJHCAF MBHJJNFNGPE(::PNBEKPFCMKK HEJIBNEHLIG)
	{
		return ((::PEBKOGJHCAF(*)(::PVOID, ::PNBEKPFCMKK))((::PBYTE)hIl2Cpp + DPGAMAHNECL_MBHJJNFNGPE_OFFSET))(this, HEJIBNEHLIG);
	}

	::PNBEKPFCMKK LLNEBHDKNGO()
	{
		return ((::PNBEKPFCMKK(*)(::PVOID))((::PBYTE)hIl2Cpp + DPGAMAHNECL_LLNEBHDKNGO_OFFSET))(this);
	}

	::System::Void NGIGLEAHIFG(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DPGAMAHNECL_NGIGLEAHIFG_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void DDMGALAMCDL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPGAMAHNECL_DDMGALAMCDL_OFFSET))(this);
	}

	::System::Single DMOLIELPHPA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DPGAMAHNECL_DMOLIELPHPA_OFFSET))(this);
	}

	::System::Single OFJFJMDFNOB(::MFPKEGLIDLI_GGNLDAMIDEI JFGNFFPLHGF, ::System::Boolean& HCFFLDIFMDK)
	{
		return ((::System::Single(*)(::PVOID, ::MFPKEGLIDLI_GGNLDAMIDEI, ::System::Boolean&))((::PBYTE)hIl2Cpp + DPGAMAHNECL_OFJFJMDFNOB_OFFSET))(this, JFGNFFPLHGF, HCFFLDIFMDK);
	}

	::System::Boolean OGJLOILPGOB(::PEBKOGJHCAF PHHDHIBOCKA)
	{
		return ((::System::Boolean(*)(::PVOID, ::PEBKOGJHCAF))((::PBYTE)hIl2Cpp + DPGAMAHNECL_OGJLOILPGOB_OFFSET))(this, PHHDHIBOCKA);
	}

	::System::Void BDEJPJCPFAE(::MFPKEGLIDLI_GGNLDAMIDEI JFGNFFPLHGF, ::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MFPKEGLIDLI_GGNLDAMIDEI, ::System::Single))((::PBYTE)hIl2Cpp + DPGAMAHNECL_BDEJPJCPFAE_OFFSET))(this, JFGNFFPLHGF, EGEGIMGMJHN);
	}
};
