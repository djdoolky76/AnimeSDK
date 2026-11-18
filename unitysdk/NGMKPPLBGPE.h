#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JMLLJAOFDGD.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }

#define NGMKPPLBGPE_BIKHPDLBMFA_OFFSET UNITYSDK_OFFSET(0x10D76690)
#define NGMKPPLBGPE_DECMGICKDLH_OFFSET UNITYSDK_OFFSET(0x10D76060)
#define NGMKPPLBGPE_EJHKKKPFCKE_OFFSET UNITYSDK_OFFSET(0x10D760E0)
#define NGMKPPLBGPE_KFHPPBIFOMG_OFFSET UNITYSDK_OFFSET(0x10D76070)
#define NGMKPPLBGPE__CTOR_OFFSET UNITYSDK_OFFSET(0x10D76080)

inline static constexpr unsigned int NGMKPPLBGPE_TypeDefinitionIndex = 83117;

class NGMKPPLBGPE : public ::JMLLJAOFDGD
{
public:
	::System::Action_3<::System::Int32, ::System::String*, ::System::String*>* EJGDHCIBCJH; // 0x30
	::System::String* _BLBIAMKGHJL_k__BackingField; // 0x38
	::System::Int32 HMGPMMNEDGJ; // 0x40
	::System::Byte _padding0[0x4];
	::System::UInt64 ADGEDIIGAJO; // 0x48

	::System::Void _ctor(::System::Action_3<::System::Int32, ::System::String*, ::System::String*>* EJGDHCIBCJH, ::System::Int32 HMGPMMNEDGJ, ::System::UInt64 ADGEDIIGAJO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_3<::System::Int32, ::System::String*, ::System::String*>*, ::System::Int32, ::System::UInt64))((::PBYTE)hIl2Cpp + NGMKPPLBGPE__CTOR_OFFSET))(this, EJGDHCIBCJH, HMGPMMNEDGJ, ADGEDIIGAJO);
	}

	::System::String* DECMGICKDLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGMKPPLBGPE_DECMGICKDLH_OFFSET))(this);
	}

	::System::Void KFHPPBIFOMG(::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NGMKPPLBGPE_KFHPPBIFOMG_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void EJHKKKPFCKE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGMKPPLBGPE_EJHKKKPFCKE_OFFSET))(this);
	}

	::System::Void BIKHPDLBMFA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGMKPPLBGPE_BIKHPDLBMFA_OFFSET))(this);
	}
};
