#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/GroupMemberIdentifier.h"
#include "unitysdk/OOCEACEEEPN.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/OLPPOJJADDO.h"

class CFHOEGBMPKN;
class LDIBODLHCNK;
template <typename T> class DBMAHDDGMHM_1;

#define AOEKLNJAEOB_AIJGLDKOKOM_OFFSET UNITYSDK_OFFSET(0x134EA920)
#define AOEKLNJAEOB_APPCLMIANHI_OFFSET UNITYSDK_OFFSET(0x134EA500)
#define AOEKLNJAEOB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x134EA320)
#define AOEKLNJAEOB_GKBAJJACIEA_OFFSET UNITYSDK_OFFSET(0x134EA910)
#define AOEKLNJAEOB_KFHDIIHCHFL_OFFSET UNITYSDK_OFFSET(0x134EA940)
#define AOEKLNJAEOB_KLNFANCKEFK_OFFSET UNITYSDK_OFFSET(0x134EA5C0)
#define AOEKLNJAEOB_MJIPDLBCHNH_OFFSET UNITYSDK_OFFSET(0x134EA430)
#define AOEKLNJAEOB_NHJAHJIKLLA_OFFSET UNITYSDK_OFFSET(0x134EA930)
#define AOEKLNJAEOB_PGKDINGDONO_OFFSET UNITYSDK_OFFSET(0x134EA5D0)
#define AOEKLNJAEOB_PHJMCBIHIAK_OFFSET UNITYSDK_OFFSET(0x134EA950)
#define AOEKLNJAEOB__CTOR_OFFSET UNITYSDK_OFFSET(0x134E9FE0)

inline static constexpr unsigned int AOEKLNJAEOB_TypeDefinitionIndex = 53480;

class AOEKLNJAEOB : public ::System::Object
{
public:
	::CFHOEGBMPKN* EDKGMLLKLJM; // 0x10
	::DBMAHDDGMHM_1<::OOCEACEEEPN>* OCOJFKMOKMK; // 0x18
	::DBMAHDDGMHM_1<::System::UInt32>* BLNOLODKKAE; // 0x20
	::Foundation::ViewObject::GroupMemberIdentifier EOJAFFGKIAG; // 0x28
	::System::Int32 _KLNBDAJDDIF_k__BackingField; // 0x30
	::System::Int32 _BIHGILPJAFO_k__BackingField; // 0x34
	::System::Int32 _OECPHFKMKNJ_k__BackingField; // 0x38

	::System::Void _ctor(::LDIBODLHCNK* OOGAOPDOCDF)
	{
		return ((::System::Void(*)(::PVOID, ::LDIBODLHCNK*))((::PBYTE)hIl2Cpp + AOEKLNJAEOB__CTOR_OFFSET))(this, OOGAOPDOCDF);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOEKLNJAEOB_DISPOSE_OFFSET))(this);
	}

	::System::UInt64 MJIPDLBCHNH()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + AOEKLNJAEOB_MJIPDLBCHNH_OFFSET))(this);
	}

	::System::Void APPCLMIANHI(::LDIBODLHCNK* JKHIHIBHDPH)
	{
		return ((::System::Void(*)(::PVOID, ::LDIBODLHCNK*))((::PBYTE)hIl2Cpp + AOEKLNJAEOB_APPCLMIANHI_OFFSET))(this, JKHIHIBHDPH);
	}

	::System::Void KLNFANCKEFK(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AOEKLNJAEOB_KLNFANCKEFK_OFFSET))(this, EGEGIMGMJHN);
	}

	::OLPPOJJADDO PGKDINGDONO()
	{
		return ((::OLPPOJJADDO(*)(::PVOID))((::PBYTE)hIl2Cpp + AOEKLNJAEOB_PGKDINGDONO_OFFSET))(this);
	}

	::System::Int32 GKBAJJACIEA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AOEKLNJAEOB_GKBAJJACIEA_OFFSET))(this);
	}

	::System::Void AIJGLDKOKOM(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AOEKLNJAEOB_AIJGLDKOKOM_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 NHJAHJIKLLA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AOEKLNJAEOB_NHJAHJIKLLA_OFFSET))(this);
	}

	::System::Int32 KFHDIIHCHFL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AOEKLNJAEOB_KFHDIIHCHFL_OFFSET))(this);
	}

	::System::Void PHJMCBIHIAK(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AOEKLNJAEOB_PHJMCBIHIAK_OFFSET))(this, EGEGIMGMJHN);
	}
};
