#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JMLLJAOFDGD.h"

namespace MiHoYo::SDK { class JSONObject; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define NKHFKNAKGBC_BIKHPDLBMFA_OFFSET UNITYSDK_OFFSET(0xE0A5DA0)
#define NKHFKNAKGBC_CONHOIAOLOG_OFFSET UNITYSDK_OFFSET(0xE0A5DB0)
#define NKHFKNAKGBC_DECMGICKDLH_OFFSET UNITYSDK_OFFSET(0xE0A56D0)
#define NKHFKNAKGBC_EJHKKKPFCKE_OFFSET UNITYSDK_OFFSET(0xE0A5760)
#define NKHFKNAKGBC_KFHPPBIFOMG_OFFSET UNITYSDK_OFFSET(0xE0A56E0)
#define NKHFKNAKGBC__CTOR_OFFSET UNITYSDK_OFFSET(0xE0A56F0)

inline static constexpr unsigned int NKHFKNAKGBC_TypeDefinitionIndex = 45347;

class NKHFKNAKGBC : public ::JMLLJAOFDGD
{
public:
	::MiHoYo::SDK::JSONObject* MNJKPOEPLCN; // 0x30
	::System::Action_2<::System::Int32, ::System::String*>* EJGDHCIBCJH; // 0x38
	::System::String* BNNPDDOBGNP; // 0x40
	::System::String* _BLBIAMKGHJL_k__BackingField; // 0x48
	::System::Int32 OEBDHFNBJDA; // 0x50
	::System::Int32 HMGPMMNEDGJ; // 0x54

	::System::Void _ctor(::System::Action_2<::System::Int32, ::System::String*>* EJGDHCIBCJH, ::MiHoYo::SDK::JSONObject* MNJKPOEPLCN, ::System::Int32 HMGPMMNEDGJ, ::System::Int32 OEBDHFNBJDA, ::System::String* BNNPDDOBGNP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Int32, ::System::String*>*, ::MiHoYo::SDK::JSONObject*, ::System::Int32, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + NKHFKNAKGBC__CTOR_OFFSET))(this, EJGDHCIBCJH, MNJKPOEPLCN, HMGPMMNEDGJ, OEBDHFNBJDA, BNNPDDOBGNP);
	}

	::System::String* DECMGICKDLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKHFKNAKGBC_DECMGICKDLH_OFFSET))(this);
	}

	::System::Void KFHPPBIFOMG(::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NKHFKNAKGBC_KFHPPBIFOMG_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void EJHKKKPFCKE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKHFKNAKGBC_EJHKKKPFCKE_OFFSET))(this);
	}

	::System::Void BIKHPDLBMFA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKHFKNAKGBC_BIKHPDLBMFA_OFFSET))(this);
	}

	::System::Void CONHOIAOLOG(::System::String* DKPGLAFDLBC)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NKHFKNAKGBC_CONHOIAOLOG_OFFSET))(this, DKPGLAFDLBC);
	}
};
