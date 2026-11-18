#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JMLLJAOFDGD.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define JKLNPGIMCBJ_BIKHPDLBMFA_OFFSET UNITYSDK_OFFSET(0x13860690)
#define JKLNPGIMCBJ_DECMGICKDLH_OFFSET UNITYSDK_OFFSET(0x1385FFB0)
#define JKLNPGIMCBJ_EJHKKKPFCKE_OFFSET UNITYSDK_OFFSET(0x13860020)
#define JKLNPGIMCBJ_KFHPPBIFOMG_OFFSET UNITYSDK_OFFSET(0x1385FFC0)
#define JKLNPGIMCBJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1385FFD0)

inline static constexpr unsigned int JKLNPGIMCBJ_TypeDefinitionIndex = 72699;

class JKLNPGIMCBJ : public ::JMLLJAOFDGD
{
public:
	::System::String* _BLBIAMKGHJL_k__BackingField; // 0x30
	::System::Action_2<::System::Int32, ::System::String*>* EJGDHCIBCJH; // 0x38
	::System::Collections::Generic::IEnumerable_1<::System::String*>* PDPBJOPFBFE; // 0x40

	::System::Void _ctor(::System::Action_2<::System::Int32, ::System::String*>* EJGDHCIBCJH, ::System::Collections::Generic::IEnumerable_1<::System::String*>* PDPBJOPFBFE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Int32, ::System::String*>*, ::System::Collections::Generic::IEnumerable_1<::System::String*>*))((::PBYTE)hIl2Cpp + JKLNPGIMCBJ__CTOR_OFFSET))(this, EJGDHCIBCJH, PDPBJOPFBFE);
	}

	::System::String* DECMGICKDLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKLNPGIMCBJ_DECMGICKDLH_OFFSET))(this);
	}

	::System::Void KFHPPBIFOMG(::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JKLNPGIMCBJ_KFHPPBIFOMG_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void EJHKKKPFCKE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKLNPGIMCBJ_EJHKKKPFCKE_OFFSET))(this);
	}

	::System::Void BIKHPDLBMFA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKLNPGIMCBJ_BIKHPDLBMFA_OFFSET))(this);
	}
};
