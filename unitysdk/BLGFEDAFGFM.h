#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JMLLJAOFDGD.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define BLGFEDAFGFM_BIKHPDLBMFA_OFFSET UNITYSDK_OFFSET(0x11519B30)
#define BLGFEDAFGFM_DECMGICKDLH_OFFSET UNITYSDK_OFFSET(0x11519670)
#define BLGFEDAFGFM_EJHKKKPFCKE_OFFSET UNITYSDK_OFFSET(0x115196F0)
#define BLGFEDAFGFM_KFHPPBIFOMG_OFFSET UNITYSDK_OFFSET(0x11519680)
#define BLGFEDAFGFM_PAGPCOMNDMM_OFFSET UNITYSDK_OFFSET(0x115199D0)
#define BLGFEDAFGFM__CTOR_OFFSET UNITYSDK_OFFSET(0x11519690)

inline static constexpr unsigned int BLGFEDAFGFM_TypeDefinitionIndex = 50060;

class BLGFEDAFGFM : public ::JMLLJAOFDGD
{
public:
	::System::String* DMHCGLJNEPO; // 0x30
	::System::String* _BLBIAMKGHJL_k__BackingField; // 0x38
	::System::Action_2<::System::Int32, ::System::String*>* EJGDHCIBCJH; // 0x40
	::System::Int32 OJJILCIKLKB; // 0x48

	::System::Void _ctor(::System::Action_2<::System::Int32, ::System::String*>* EJGDHCIBCJH, ::System::String* DMHCGLJNEPO, ::System::Int32 OJJILCIKLKB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Int32, ::System::String*>*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + BLGFEDAFGFM__CTOR_OFFSET))(this, EJGDHCIBCJH, DMHCGLJNEPO, OJJILCIKLKB);
	}

	::System::String* DECMGICKDLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLGFEDAFGFM_DECMGICKDLH_OFFSET))(this);
	}

	::System::Void KFHPPBIFOMG(::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BLGFEDAFGFM_KFHPPBIFOMG_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void EJHKKKPFCKE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLGFEDAFGFM_EJHKKKPFCKE_OFFSET))(this);
	}

	::System::Void PAGPCOMNDMM(::System::String* DKPGLAFDLBC)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BLGFEDAFGFM_PAGPCOMNDMM_OFFSET))(this, DKPGLAFDLBC);
	}

	::System::Void BIKHPDLBMFA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLGFEDAFGFM_BIKHPDLBMFA_OFFSET))(this);
	}
};
