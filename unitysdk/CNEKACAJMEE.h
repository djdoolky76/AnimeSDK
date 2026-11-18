#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JMLLJAOFDGD.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define CNEKACAJMEE_BIKHPDLBMFA_OFFSET UNITYSDK_OFFSET(0x1A1BE430)
#define CNEKACAJMEE_DECMGICKDLH_OFFSET UNITYSDK_OFFSET(0x1A1BE1A0)
#define CNEKACAJMEE_EJHKKKPFCKE_OFFSET UNITYSDK_OFFSET(0x1A1BE200)
#define CNEKACAJMEE_FEFBOAKPIHM_OFFSET UNITYSDK_OFFSET(0x1A1BE330)
#define CNEKACAJMEE_KFHPPBIFOMG_OFFSET UNITYSDK_OFFSET(0x1A1BE1B0)
#define CNEKACAJMEE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1BE1C0)

inline static constexpr unsigned int CNEKACAJMEE_TypeDefinitionIndex = 64705;

class CNEKACAJMEE : public ::JMLLJAOFDGD
{
public:
	::System::String* _BLBIAMKGHJL_k__BackingField; // 0x30
	::System::Action_2<::System::Int32, ::System::String*>* EJGDHCIBCJH; // 0x38

	::System::Void _ctor(::System::Action_2<::System::Int32, ::System::String*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Int32, ::System::String*>*))((::PBYTE)hIl2Cpp + CNEKACAJMEE__CTOR_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::String* DECMGICKDLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNEKACAJMEE_DECMGICKDLH_OFFSET))(this);
	}

	::System::Void KFHPPBIFOMG(::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CNEKACAJMEE_KFHPPBIFOMG_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void EJHKKKPFCKE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNEKACAJMEE_EJHKKKPFCKE_OFFSET))(this);
	}

	::System::Void FEFBOAKPIHM(::System::String* DKPGLAFDLBC)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CNEKACAJMEE_FEFBOAKPIHM_OFFSET))(this, DKPGLAFDLBC);
	}

	::System::Void BIKHPDLBMFA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNEKACAJMEE_BIKHPDLBMFA_OFFSET))(this);
	}
};
