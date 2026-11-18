#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JMLLJAOFDGD.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define MEKGGPJABCB_BIKHPDLBMFA_OFFSET UNITYSDK_OFFSET(0x10742A30)
#define MEKGGPJABCB_DECMGICKDLH_OFFSET UNITYSDK_OFFSET(0x107427A0)
#define MEKGGPJABCB_EJHKKKPFCKE_OFFSET UNITYSDK_OFFSET(0x10742800)
#define MEKGGPJABCB_FEFBOAKPIHM_OFFSET UNITYSDK_OFFSET(0x107428D0)
#define MEKGGPJABCB_KFHPPBIFOMG_OFFSET UNITYSDK_OFFSET(0x107427B0)
#define MEKGGPJABCB__CTOR_OFFSET UNITYSDK_OFFSET(0x107427C0)

inline static constexpr unsigned int MEKGGPJABCB_TypeDefinitionIndex = 81010;

class MEKGGPJABCB : public ::JMLLJAOFDGD
{
public:
	::System::String* _BLBIAMKGHJL_k__BackingField; // 0x30
	::System::Action_2<::System::Int32, ::System::String*>* EJGDHCIBCJH; // 0x38

	::System::Void _ctor(::System::Action_2<::System::Int32, ::System::String*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Int32, ::System::String*>*))((::PBYTE)hIl2Cpp + MEKGGPJABCB__CTOR_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::String* DECMGICKDLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEKGGPJABCB_DECMGICKDLH_OFFSET))(this);
	}

	::System::Void KFHPPBIFOMG(::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MEKGGPJABCB_KFHPPBIFOMG_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void EJHKKKPFCKE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEKGGPJABCB_EJHKKKPFCKE_OFFSET))(this);
	}

	::System::Void FEFBOAKPIHM(::System::String* DKPGLAFDLBC)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MEKGGPJABCB_FEFBOAKPIHM_OFFSET))(this, DKPGLAFDLBC);
	}

	::System::Void BIKHPDLBMFA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEKGGPJABCB_BIKHPDLBMFA_OFFSET))(this);
	}
};
