#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JMLLJAOFDGD.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define EJDEFHNHNFL_BIKHPDLBMFA_OFFSET UNITYSDK_OFFSET(0x14A9F820)
#define EJDEFHNHNFL_DECMGICKDLH_OFFSET UNITYSDK_OFFSET(0x14A9F6F0)
#define EJDEFHNHNFL_EJHKKKPFCKE_OFFSET UNITYSDK_OFFSET(0x14A9F750)
#define EJDEFHNHNFL_FEFBOAKPIHM_OFFSET UNITYSDK_OFFSET(0x14A9F830)
#define EJDEFHNHNFL_KFHPPBIFOMG_OFFSET UNITYSDK_OFFSET(0x14A9F700)
#define EJDEFHNHNFL__CTOR_OFFSET UNITYSDK_OFFSET(0x14A9F710)

inline static constexpr unsigned int EJDEFHNHNFL_TypeDefinitionIndex = 87878;

class EJDEFHNHNFL : public ::JMLLJAOFDGD
{
public:
	::System::String* _BLBIAMKGHJL_k__BackingField; // 0x30
	::System::Action_2<::System::Int32, ::System::String*>* EJGDHCIBCJH; // 0x38

	::System::Void _ctor(::System::Action_2<::System::Int32, ::System::String*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Int32, ::System::String*>*))((::PBYTE)hIl2Cpp + EJDEFHNHNFL__CTOR_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::String* DECMGICKDLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJDEFHNHNFL_DECMGICKDLH_OFFSET))(this);
	}

	::System::Void KFHPPBIFOMG(::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EJDEFHNHNFL_KFHPPBIFOMG_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void EJHKKKPFCKE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJDEFHNHNFL_EJHKKKPFCKE_OFFSET))(this);
	}

	::System::Void BIKHPDLBMFA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJDEFHNHNFL_BIKHPDLBMFA_OFFSET))(this);
	}

	::System::Void FEFBOAKPIHM(::System::String* DKPGLAFDLBC)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EJDEFHNHNFL_FEFBOAKPIHM_OFFSET))(this, DKPGLAFDLBC);
	}
};
