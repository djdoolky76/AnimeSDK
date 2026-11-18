#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BLGMMOFGMAP.h"
#include "unitysdk/DJFGDPFPPOD.h"
#include "unitysdk/EKMPCEIGNNM.h"
#include "unitysdk/FLMJPFJKBGG.h"
#include "unitysdk/KKPAJPLIGBG.h"
#include "unitysdk/OIIFBDEJKLJ.h"

class CKMHFDLJBCH;
namespace System { class String; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Renderer; }

#define JNOBFIJHLJO_AFCMCJLGJDL_OFFSET UNITYSDK_OFFSET(0x13AE1010)
#define JNOBFIJHLJO_ANHMEIEFJOA_OFFSET UNITYSDK_OFFSET(0x13AE1800)
#define JNOBFIJHLJO_BMGMBKGNMDI_OFFSET UNITYSDK_OFFSET(0x13AE0FB0)
#define JNOBFIJHLJO_EPEGKMMLHLJ_OFFSET UNITYSDK_OFFSET(0x13AE1770)
#define JNOBFIJHLJO_HFAOGILNMEC_OFFSET UNITYSDK_OFFSET(0x13AE1760)
#define JNOBFIJHLJO_HPDIHDHAKBH_OFFSET UNITYSDK_OFFSET(0x13AE1840)
#define JNOBFIJHLJO_JLNFBFFDGCI_OFFSET UNITYSDK_OFFSET(0x13AE1740)
#define JNOBFIJHLJO_LFDEIEDPIJI_OFFSET UNITYSDK_OFFSET(0x13AE1750)
#define JNOBFIJHLJO__CTOR_OFFSET UNITYSDK_OFFSET(0x13AE0FC0)

inline static constexpr unsigned int JNOBFIJHLJO_TypeDefinitionIndex = 82515;

class JNOBFIJHLJO : public ::FLMJPFJKBGG
{
public:
	::CKMHFDLJBCH* _EGBCDGIBGKN_k__BackingField; // 0x28
	::System::String* EBFEMPDEEGC; // 0x30
	::OIIFBDEJKLJ BPLBLFLCOKG; // 0x38
	::System::String* KNDBIDCPPHP; // 0x50
	::UnityEngine::Collider* FGGOKKGHGAA; // 0x58
	::BLGMMOFGMAP EJGENDANJEE; // 0x60
	::EKMPCEIGNNM JMDDOLOKMKO; // 0x70
	::UnityEngine::Renderer* LFNBIFMNJAH; // 0x98
	::System::Single IOBEFAEJIIH; // 0xA0
	::KKPAJPLIGBG OANMEMEKCFK; // 0xA4
	::System::Single EIIAPPEJOHM; // 0xA8
	::System::Int32 DLFCECDNGKL; // 0xAC
	::System::Boolean HMLPALPONFH; // 0xB0
	::System::Byte _padding0[0x3];
	::System::Single ADLJJJNMOEM; // 0xB4

	::System::Void _ctor(::EKMPCEIGNNM MIBMOLGMNEJ, ::System::String* ACFIKCMHFBK, ::System::String* KBIECIBMCHM, ::System::Single KADKNMDFFCO, ::System::Single EIOPEGGAIOL)
	{
		return ((::System::Void(*)(::PVOID, ::EKMPCEIGNNM, ::System::String*, ::System::String*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + JNOBFIJHLJO__CTOR_OFFSET))(this, MIBMOLGMNEJ, ACFIKCMHFBK, KBIECIBMCHM, KADKNMDFFCO, EIOPEGGAIOL);
	}

	::DJFGDPFPPOD BMGMBKGNMDI()
	{
		return ((::DJFGDPFPPOD(*)(::PVOID))((::PBYTE)hIl2Cpp + JNOBFIJHLJO_BMGMBKGNMDI_OFFSET))(this);
	}

	::System::Boolean AFCMCJLGJDL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JNOBFIJHLJO_AFCMCJLGJDL_OFFSET))(this);
	}

	::System::Void JLNFBFFDGCI(::CKMHFDLJBCH* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::CKMHFDLJBCH*))((::PBYTE)hIl2Cpp + JNOBFIJHLJO_JLNFBFFDGCI_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Single LFDEIEDPIJI()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + JNOBFIJHLJO_LFDEIEDPIJI_OFFSET))(this);
	}

	::CKMHFDLJBCH* HFAOGILNMEC()
	{
		return ((::CKMHFDLJBCH*(*)(::PVOID))((::PBYTE)hIl2Cpp + JNOBFIJHLJO_HFAOGILNMEC_OFFSET))(this);
	}

	::System::Boolean EPEGKMMLHLJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JNOBFIJHLJO_EPEGKMMLHLJ_OFFSET))(this);
	}

	::System::Void ANHMEIEFJOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNOBFIJHLJO_ANHMEIEFJOA_OFFSET))(this);
	}

	::System::Void HPDIHDHAKBH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNOBFIJHLJO_HPDIHDHAKBH_OFFSET))(this);
	}
};
