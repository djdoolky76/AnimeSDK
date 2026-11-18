#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MonoUITableScrollV2;
namespace System { class Action; }

#define JOMECMCADAI_GGMFCHGDBGN_GCBMPDIOMMD_OFFSET UNITYSDK_OFFSET(0x14FC6DF0)
#define JOMECMCADAI_GGMFCHGDBGN__CTOR_OFFSET UNITYSDK_OFFSET(0x14FC6DE0)

inline static constexpr unsigned int JOMECMCADAI_GGMFCHGDBGN_TypeDefinitionIndex = 92947;

class JOMECMCADAI_GGMFCHGDBGN : public ::System::Object
{
public:
	::MonoUITableScrollV2* NLNBPDBCCGM; // 0x10
	::System::Action* FJDOCPKEACA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOMECMCADAI_GGMFCHGDBGN__CTOR_OFFSET))(this);
	}

	::System::Void GCBMPDIOMMD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOMECMCADAI_GGMFCHGDBGN_GCBMPDIOMMD_OFFSET))(this);
	}
};
