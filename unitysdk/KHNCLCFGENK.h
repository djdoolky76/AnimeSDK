#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JMLLJAOFDGD.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define KHNCLCFGENK_BIKHPDLBMFA_OFFSET UNITYSDK_OFFSET(0x1790B0F0)
#define KHNCLCFGENK_DECMGICKDLH_OFFSET UNITYSDK_OFFSET(0x1790AE60)
#define KHNCLCFGENK_EJHKKKPFCKE_OFFSET UNITYSDK_OFFSET(0x1790AEC0)
#define KHNCLCFGENK_FEFBOAKPIHM_OFFSET UNITYSDK_OFFSET(0x1790AF90)
#define KHNCLCFGENK_KFHPPBIFOMG_OFFSET UNITYSDK_OFFSET(0x1790AE70)
#define KHNCLCFGENK__CTOR_OFFSET UNITYSDK_OFFSET(0x1790AE80)

inline static constexpr unsigned int KHNCLCFGENK_TypeDefinitionIndex = 51581;

class KHNCLCFGENK : public ::JMLLJAOFDGD
{
public:
	::System::Action_2<::System::Int32, ::System::String*>* EJGDHCIBCJH; // 0x30
	::System::String* _BLBIAMKGHJL_k__BackingField; // 0x38

	::System::Void _ctor(::System::Action_2<::System::Int32, ::System::String*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Int32, ::System::String*>*))((::PBYTE)hIl2Cpp + KHNCLCFGENK__CTOR_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::String* DECMGICKDLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHNCLCFGENK_DECMGICKDLH_OFFSET))(this);
	}

	::System::Void KFHPPBIFOMG(::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KHNCLCFGENK_KFHPPBIFOMG_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void EJHKKKPFCKE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHNCLCFGENK_EJHKKKPFCKE_OFFSET))(this);
	}

	::System::Void FEFBOAKPIHM(::System::String* DKPGLAFDLBC)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KHNCLCFGENK_FEFBOAKPIHM_OFFSET))(this, DKPGLAFDLBC);
	}

	::System::Void BIKHPDLBMFA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHNCLCFGENK_BIKHPDLBMFA_OFFSET))(this);
	}
};
