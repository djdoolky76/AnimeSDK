#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JMLLJAOFDGD.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define HJGPOBFNECO_BIKHPDLBMFA_OFFSET UNITYSDK_OFFSET(0x15DBB950)
#define HJGPOBFNECO_DECMGICKDLH_OFFSET UNITYSDK_OFFSET(0x15DBB7E0)
#define HJGPOBFNECO_EJHKKKPFCKE_OFFSET UNITYSDK_OFFSET(0x15DBB850)
#define HJGPOBFNECO_KFHPPBIFOMG_OFFSET UNITYSDK_OFFSET(0x15DBB7F0)
#define HJGPOBFNECO_NLIPLBAFEKH_OFFSET UNITYSDK_OFFSET(0x15DBB960)
#define HJGPOBFNECO__CTOR_OFFSET UNITYSDK_OFFSET(0x15DBB800)

inline static constexpr unsigned int HJGPOBFNECO_TypeDefinitionIndex = 48190;

class HJGPOBFNECO : public ::JMLLJAOFDGD
{
public:
	::System::String* PCIDFGGIOPL; // 0x30
	::System::Action_2<::System::Int32, ::System::String*>* EJGDHCIBCJH; // 0x38
	::System::String* _BLBIAMKGHJL_k__BackingField; // 0x40

	::System::Void _ctor(::System::Action_2<::System::Int32, ::System::String*>* EJGDHCIBCJH, ::System::String* PCIDFGGIOPL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Int32, ::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + HJGPOBFNECO__CTOR_OFFSET))(this, EJGDHCIBCJH, PCIDFGGIOPL);
	}

	::System::String* DECMGICKDLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJGPOBFNECO_DECMGICKDLH_OFFSET))(this);
	}

	::System::Void KFHPPBIFOMG(::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HJGPOBFNECO_KFHPPBIFOMG_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void EJHKKKPFCKE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJGPOBFNECO_EJHKKKPFCKE_OFFSET))(this);
	}

	::System::Void BIKHPDLBMFA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJGPOBFNECO_BIKHPDLBMFA_OFFSET))(this);
	}

	::System::Void NLIPLBAFEKH(::System::String* DKPGLAFDLBC)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HJGPOBFNECO_NLIPLBAFEKH_OFFSET))(this, DKPGLAFDLBC);
	}
};
