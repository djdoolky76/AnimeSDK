#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CPINLODJHPN_CPOIENCAPPG;
namespace System { class String; }

#define MMBAFEFIGDD_BNIHBGOOCBC_DDFIBCLEJFN_OFFSET UNITYSDK_OFFSET(0x12172D40)
#define MMBAFEFIGDD_BNIHBGOOCBC_FEDFLMDHEGD_OFFSET UNITYSDK_OFFSET(0x12172D20)
#define MMBAFEFIGDD_BNIHBGOOCBC_MILJNFIHGDK_OFFSET UNITYSDK_OFFSET(0x12172D60)
#define MMBAFEFIGDD_BNIHBGOOCBC_PNDPGODDDIP_OFFSET UNITYSDK_OFFSET(0x12172D00)
#define MMBAFEFIGDD_BNIHBGOOCBC__CTOR_OFFSET UNITYSDK_OFFSET(0x12172CF0)

inline static constexpr unsigned int MMBAFEFIGDD_BNIHBGOOCBC_TypeDefinitionIndex = 80227;

class MMBAFEFIGDD_BNIHBGOOCBC : public ::System::Object
{
public:
	::CPINLODJHPN_CPOIENCAPPG* LJBPECKCCEA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMBAFEFIGDD_BNIHBGOOCBC__CTOR_OFFSET))(this);
	}

	::System::String* PNDPGODDDIP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMBAFEFIGDD_BNIHBGOOCBC_PNDPGODDDIP_OFFSET))(this);
	}

	::System::String* FEDFLMDHEGD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMBAFEFIGDD_BNIHBGOOCBC_FEDFLMDHEGD_OFFSET))(this);
	}

	::System::String* DDFIBCLEJFN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMBAFEFIGDD_BNIHBGOOCBC_DDFIBCLEJFN_OFFSET))(this);
	}

	::System::String* MILJNFIHGDK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMBAFEFIGDD_BNIHBGOOCBC_MILJNFIHGDK_OFFSET))(this);
	}
};
