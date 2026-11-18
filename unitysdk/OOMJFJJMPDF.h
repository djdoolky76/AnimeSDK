#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JMLLJAOFDGD.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define OOMJFJJMPDF_BIKHPDLBMFA_OFFSET UNITYSDK_OFFSET(0x13A7C6B0)
#define OOMJFJJMPDF_DECMGICKDLH_OFFSET UNITYSDK_OFFSET(0x13A7C440)
#define OOMJFJJMPDF_EJHKKKPFCKE_OFFSET UNITYSDK_OFFSET(0x13A7C4C0)
#define OOMJFJJMPDF_KFHPPBIFOMG_OFFSET UNITYSDK_OFFSET(0x13A7C450)
#define OOMJFJJMPDF_PAGPCOMNDMM_OFFSET UNITYSDK_OFFSET(0x13A7C6C0)
#define OOMJFJJMPDF__CTOR_OFFSET UNITYSDK_OFFSET(0x13A7C460)

inline static constexpr unsigned int OOMJFJJMPDF_TypeDefinitionIndex = 54169;

class OOMJFJJMPDF : public ::JMLLJAOFDGD
{
public:
	::System::Action_2<::System::Int32, ::System::String*>* EJGDHCIBCJH; // 0x30
	::System::String* _BLBIAMKGHJL_k__BackingField; // 0x38
	::System::String* PCIDFGGIOPL; // 0x40
	::System::Int32 NFPNOFOKEKL; // 0x48

	::System::Void _ctor(::System::Action_2<::System::Int32, ::System::String*>* EJGDHCIBCJH, ::System::String* PCIDFGGIOPL, ::System::Int32 NFPNOFOKEKL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Int32, ::System::String*>*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + OOMJFJJMPDF__CTOR_OFFSET))(this, EJGDHCIBCJH, PCIDFGGIOPL, NFPNOFOKEKL);
	}

	::System::String* DECMGICKDLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOMJFJJMPDF_DECMGICKDLH_OFFSET))(this);
	}

	::System::Void KFHPPBIFOMG(::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OOMJFJJMPDF_KFHPPBIFOMG_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void EJHKKKPFCKE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOMJFJJMPDF_EJHKKKPFCKE_OFFSET))(this);
	}

	::System::Void BIKHPDLBMFA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOMJFJJMPDF_BIKHPDLBMFA_OFFSET))(this);
	}

	::System::Void PAGPCOMNDMM(::System::String* DKPGLAFDLBC)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OOMJFJJMPDF_PAGPCOMNDMM_OFFSET))(this, DKPGLAFDLBC);
	}
};
