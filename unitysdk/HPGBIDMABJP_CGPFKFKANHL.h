#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HPGBIDMABJP;
namespace System { class Action; }
namespace System { class String; }

#define HPGBIDMABJP_CGPFKFKANHL_MNGGEFGIIOL_OFFSET UNITYSDK_OFFSET(0x15BE5DC0)
#define HPGBIDMABJP_CGPFKFKANHL_PJDJKGDOILP_OFFSET UNITYSDK_OFFSET(0x15BE5E10)
#define HPGBIDMABJP_CGPFKFKANHL__CTOR_OFFSET UNITYSDK_OFFSET(0x15BE5DB0)

inline static constexpr unsigned int HPGBIDMABJP_CGPFKFKANHL_TypeDefinitionIndex = 48814;

class HPGBIDMABJP_CGPFKFKANHL : public ::System::Object
{
public:
	::System::Action* EDNJGMKPFHG; // 0x10
	::HPGBIDMABJP* KLHPEBKNIFB; // 0x18
	::System::String* AHJKNBGHELD; // 0x20
	::System::Action* MFEBNGPNPMA; // 0x28
	::System::Int32 EGEGIMGMJHN; // 0x30
	::System::UInt32 KMMGKJPAOMF; // 0x34
	::System::UInt32 GBGMOIONEEI; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPGBIDMABJP_CGPFKFKANHL__CTOR_OFFSET))(this);
	}

	::System::Void MNGGEFGIIOL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPGBIDMABJP_CGPFKFKANHL_MNGGEFGIIOL_OFFSET))(this);
	}

	::System::Void PJDJKGDOILP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPGBIDMABJP_CGPFKFKANHL_PJDJKGDOILP_OFFSET))(this);
	}
};
