#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MAPENPFOIOM.h"
#include "unitysdk/Share/EQuestLifeType.h"
#include "unitysdk/Share/EQuestType.h"
#include "unitysdk/NGACDFKIGHM.h"

class KGBFLHNJHHN;
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EGOPHPIBPJJ_ABECMANHNLA_OFFSET UNITYSDK_OFFSET(0x11A71850)
#define EGOPHPIBPJJ_BACDELNOKHJ_OFFSET UNITYSDK_OFFSET(0x11A71840)
#define EGOPHPIBPJJ_GFGMECHGKJE_OFFSET UNITYSDK_OFFSET(0x11A718B0)
#define EGOPHPIBPJJ_IDBEBPOAIEE_OFFSET UNITYSDK_OFFSET(0x11A717F0)
#define EGOPHPIBPJJ_JBEGDMPIMNF_OFFSET UNITYSDK_OFFSET(0x11A71870)
#define EGOPHPIBPJJ_KPJFBDAPHGE_OFFSET UNITYSDK_OFFSET(0x11A71860)
#define EGOPHPIBPJJ_LHBMHPCICHN_OFFSET UNITYSDK_OFFSET(0x11A717E0)
#define EGOPHPIBPJJ_MCJNAFHBHLF_OFFSET UNITYSDK_OFFSET(0x11A71B50)
#define EGOPHPIBPJJ_MPGMOIPFLPP_OFFSET UNITYSDK_OFFSET(0x11A71A00)
#define EGOPHPIBPJJ_OIHAOFFFGNO_OFFSET UNITYSDK_OFFSET(0x11A72040)
#define EGOPHPIBPJJ__CTOR_OFFSET UNITYSDK_OFFSET(0x11A71740)

inline static constexpr unsigned int EGOPHPIBPJJ_TypeDefinitionIndex = 63968;

class EGOPHPIBPJJ : public ::MAPENPFOIOM
{
public:
	::System::Collections::Generic::List_1<::System::Object*>* _AHFLMLFGOHP_k__BackingField; // 0xD0
	::System::Collections::Generic::List_1<::System::Int32>* ILMPHOGDFCI; // 0xD8
	::System::Int32 _ACHCAMJDHIK_k__BackingField; // 0xE0
	::Share::EQuestLifeType _ANMGJBDDCMN_k__BackingField; // 0xE4

	::System::Void _ctor(::NGACDFKIGHM LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::NGACDFKIGHM, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + EGOPHPIBPJJ__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Collections::Generic::List_1<::System::Object*>* LHBMHPCICHN()
	{
		return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGOPHPIBPJJ_LHBMHPCICHN_OFFSET))(this);
	}

	::Share::EQuestType IDBEBPOAIEE()
	{
		return ((::Share::EQuestType(*)(::PVOID))((::PBYTE)hIl2Cpp + EGOPHPIBPJJ_IDBEBPOAIEE_OFFSET))(this);
	}

	::Share::EQuestLifeType BACDELNOKHJ()
	{
		return ((::Share::EQuestLifeType(*)(::PVOID))((::PBYTE)hIl2Cpp + EGOPHPIBPJJ_BACDELNOKHJ_OFFSET))(this);
	}

	::System::Int32 ABECMANHNLA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EGOPHPIBPJJ_ABECMANHNLA_OFFSET))(this);
	}

	::System::Void KPJFBDAPHGE(::Share::EQuestLifeType EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::Share::EQuestLifeType))((::PBYTE)hIl2Cpp + EGOPHPIBPJJ_KPJFBDAPHGE_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::UInt16 JBEGDMPIMNF()
	{
		return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + EGOPHPIBPJJ_JBEGDMPIMNF_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* GFGMECHGKJE()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGOPHPIBPJJ_GFGMECHGKJE_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* MPGMOIPFLPP()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGOPHPIBPJJ_MPGMOIPFLPP_OFFSET))(this);
	}

	::System::String* MCJNAFHBHLF(::System::Int32 NFNBJCMNNNC)
	{
		return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EGOPHPIBPJJ_MCJNAFHBHLF_OFFSET))(this, NFNBJCMNNNC);
	}

	::System::Void OIHAOFFFGNO(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EGOPHPIBPJJ_OIHAOFFFGNO_OFFSET))(this, EGEGIMGMJHN);
	}
};
