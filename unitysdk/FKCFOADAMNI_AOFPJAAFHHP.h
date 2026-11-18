#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FDJDJKFDACG.h"
#include "unitysdk/System/Object.h"

class HPAALNOJJKM;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FKCFOADAMNI_AOFPJAAFHHP_FPLDKIILBLA_OFFSET UNITYSDK_OFFSET(0x141016E0)
#define FKCFOADAMNI_AOFPJAAFHHP_HJEIICAKAKH_OFFSET UNITYSDK_OFFSET(0x14101C20)
#define FKCFOADAMNI_AOFPJAAFHHP_HJJKOAKPJPL_OFFSET UNITYSDK_OFFSET(0x14101CE0)
#define FKCFOADAMNI_AOFPJAAFHHP_JLMNHFLPFBF_OFFSET UNITYSDK_OFFSET(0x14101600)
#define FKCFOADAMNI_AOFPJAAFHHP_KFDMFEPJGFO_OFFSET UNITYSDK_OFFSET(0x14101DC0)
#define FKCFOADAMNI_AOFPJAAFHHP_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x14101A80)
#define FKCFOADAMNI_AOFPJAAFHHP_PPEHHAFACPE_OFFSET UNITYSDK_OFFSET(0x14101860)
#define FKCFOADAMNI_AOFPJAAFHHP__CTOR_OFFSET UNITYSDK_OFFSET(0x14101480)

inline static constexpr unsigned int FKCFOADAMNI_AOFPJAAFHHP_TypeDefinitionIndex = 76360;

class FKCFOADAMNI_AOFPJAAFHHP : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::HPAALNOJJKM*>*>* NPCIMEIMAKB; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::HPAALNOJJKM*>*>* BFMKDKODJAP; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::FDJDJKFDACG>*>* LGOIELINPAO; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKCFOADAMNI_AOFPJAAFHHP__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::HPAALNOJJKM*>* JLMNHFLPFBF(::System::Int32 LEHABHCOMGH)
	{
		return ((::System::Collections::Generic::List_1<::HPAALNOJJKM*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FKCFOADAMNI_AOFPJAAFHHP_JLMNHFLPFBF_OFFSET))(this, LEHABHCOMGH);
	}

	::HPAALNOJJKM* FPLDKIILBLA(::System::Int32 LEHABHCOMGH, ::System::Int32 ECAFPALMHLI)
	{
		return ((::HPAALNOJJKM*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FKCFOADAMNI_AOFPJAAFHHP_FPLDKIILBLA_OFFSET))(this, LEHABHCOMGH, ECAFPALMHLI);
	}

	::System::Void PPEHHAFACPE(::System::Int32 LEHABHCOMGH, ::System::Int32 ECAFPALMHLI, ::HPAALNOJJKM* MBIGDAMKDGK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::HPAALNOJJKM*))((::PBYTE)hIl2Cpp + FKCFOADAMNI_AOFPJAAFHHP_PPEHHAFACPE_OFFSET))(this, LEHABHCOMGH, ECAFPALMHLI, MBIGDAMKDGK);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKCFOADAMNI_AOFPJAAFHHP_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void HJEIICAKAKH(::System::Int32 LEHABHCOMGH, ::System::Collections::Generic::List_1<::HPAALNOJJKM*>* DJLOKMMLFJC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::HPAALNOJJKM*>*))((::PBYTE)hIl2Cpp + FKCFOADAMNI_AOFPJAAFHHP_HJEIICAKAKH_OFFSET))(this, LEHABHCOMGH, DJLOKMMLFJC);
	}

	::System::Collections::Generic::List_1<::FDJDJKFDACG>* HJJKOAKPJPL(::System::Int32 LEHABHCOMGH)
	{
		return ((::System::Collections::Generic::List_1<::FDJDJKFDACG>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FKCFOADAMNI_AOFPJAAFHHP_HJJKOAKPJPL_OFFSET))(this, LEHABHCOMGH);
	}

	::System::Void KFDMFEPJGFO(::System::Int32 LEHABHCOMGH, ::System::Collections::Generic::List_1<::FDJDJKFDACG>* MADCPMMHGON, ::System::Boolean DIBAPAIGDLN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::FDJDJKFDACG>*, ::System::Boolean))((::PBYTE)hIl2Cpp + FKCFOADAMNI_AOFPJAAFHHP_KFDMFEPJGFO_OFFSET))(this, LEHABHCOMGH, MADCPMMHGON, DIBAPAIGDLN);
	}
};
