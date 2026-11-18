#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HFOPGPPNOOM.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderDataHandle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/HFFLAMAFFLH.h"

class AKNBJKELIBD;
class CLIPPFJKIGI;
class CNBBKIKPFKA;
class DJAIIONPIPF;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IHLMLCKGLFC_OHNMCFEFHBI_CLMJOFIDANF_OFFSET UNITYSDK_OFFSET(0x15C11AD0)
#define IHLMLCKGLFC_OHNMCFEFHBI_EDEFLFIKNFK_OFFSET UNITYSDK_OFFSET(0x15C11860)
#define IHLMLCKGLFC_OHNMCFEFHBI_HOADCMABAIM_OFFSET UNITYSDK_OFFSET(0x15C116F0)
#define IHLMLCKGLFC_OHNMCFEFHBI_JDBFBPKAJFD_OFFSET UNITYSDK_OFFSET(0x15C11700)
#define IHLMLCKGLFC_OHNMCFEFHBI_KLDMODBMCDG_OFFSET UNITYSDK_OFFSET(0x15C116E0)
#define IHLMLCKGLFC_OHNMCFEFHBI_LENOHFKGINL_OFFSET UNITYSDK_OFFSET(0x15C11C60)
#define IHLMLCKGLFC_OHNMCFEFHBI_OKLLFEIJKHN_OFFSET UNITYSDK_OFFSET(0x15C119C0)
#define IHLMLCKGLFC_OHNMCFEFHBI_PGHAJOMNDDJ_OFFSET UNITYSDK_OFFSET(0x15C11710)
#define IHLMLCKGLFC_OHNMCFEFHBI__CTOR_OFFSET UNITYSDK_OFFSET(0x15C11450)

inline static constexpr unsigned int IHLMLCKGLFC_OHNMCFEFHBI_TypeDefinitionIndex = 51108;

class IHLMLCKGLFC_OHNMCFEFHBI : public ::System::Object
{
public:
	::DJAIIONPIPF* OGCNKNGNBEM; // 0x10
	::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::RenderDataHandle>* _IFHMJKFKMEB_k__BackingField; // 0x18
	::System::Collections::Generic::List_1<::CLIPPFJKIGI*>* DDOBDKMDAKF; // 0x20
	::System::Collections::Generic::HashSet_1<::CLIPPFJKIGI*>* JMDILJBFPFH; // 0x28

	::System::Void _ctor(::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::RenderDataHandle>* KIKBIAABIID, ::AKNBJKELIBD* HBMLDMGOJOP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::RenderDataHandle>*, ::AKNBJKELIBD*))((::PBYTE)hIl2Cpp + IHLMLCKGLFC_OHNMCFEFHBI__CTOR_OFFSET))(this, KIKBIAABIID, HBMLDMGOJOP);
	}

	::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::RenderDataHandle>* KLDMODBMCDG()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::RenderDataHandle>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IHLMLCKGLFC_OHNMCFEFHBI_KLDMODBMCDG_OFFSET))(this);
	}

	::System::Boolean HOADCMABAIM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IHLMLCKGLFC_OHNMCFEFHBI_HOADCMABAIM_OFFSET))(this);
	}

	::HFOPGPPNOOM JDBFBPKAJFD()
	{
		return ((::HFOPGPPNOOM(*)(::PVOID))((::PBYTE)hIl2Cpp + IHLMLCKGLFC_OHNMCFEFHBI_JDBFBPKAJFD_OFFSET))(this);
	}

	::System::Void PGHAJOMNDDJ(::HFFLAMAFFLH& AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::HFFLAMAFFLH&))((::PBYTE)hIl2Cpp + IHLMLCKGLFC_OHNMCFEFHBI_PGHAJOMNDDJ_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Void EDEFLFIKNFK(::HFFLAMAFFLH& AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::HFFLAMAFFLH&))((::PBYTE)hIl2Cpp + IHLMLCKGLFC_OHNMCFEFHBI_EDEFLFIKNFK_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Void OKLLFEIJKHN(::DJAIIONPIPF* DNOHELNGGLJ)
	{
		return ((::System::Void(*)(::PVOID, ::DJAIIONPIPF*))((::PBYTE)hIl2Cpp + IHLMLCKGLFC_OHNMCFEFHBI_OKLLFEIJKHN_OFFSET))(this, DNOHELNGGLJ);
	}

	::System::Void CLMJOFIDANF(::CNBBKIKPFKA* DNOHELNGGLJ)
	{
		return ((::System::Void(*)(::PVOID, ::CNBBKIKPFKA*))((::PBYTE)hIl2Cpp + IHLMLCKGLFC_OHNMCFEFHBI_CLMJOFIDANF_OFFSET))(this, DNOHELNGGLJ);
	}

	::System::Void LENOHFKGINL(::CLIPPFJKIGI* CJEKDBFDGID)
	{
		return ((::System::Void(*)(::PVOID, ::CLIPPFJKIGI*))((::PBYTE)hIl2Cpp + IHLMLCKGLFC_OHNMCFEFHBI_LENOHFKGINL_OFFSET))(this, CJEKDBFDGID);
	}
};
