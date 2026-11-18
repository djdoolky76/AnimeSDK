#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PIMJFBBFJPP_FHBHCKNALEC;
class PIMJFBBFJPP_IBCAHEFBOEM;
namespace System { class Action; }

#define PIMJFBBFJPP_IBCAHEFBOEM_KDBGPEIKKJB_KAHNMHPMJCM_OFFSET UNITYSDK_OFFSET(0x194A8F20)
#define PIMJFBBFJPP_IBCAHEFBOEM_KDBGPEIKKJB__CTOR_OFFSET UNITYSDK_OFFSET(0x194A8F10)

inline static constexpr unsigned int PIMJFBBFJPP_IBCAHEFBOEM_KDBGPEIKKJB_TypeDefinitionIndex = 58943;

class PIMJFBBFJPP_IBCAHEFBOEM_KDBGPEIKKJB : public ::System::Object
{
public:
	::PIMJFBBFJPP_FHBHCKNALEC* PCOMBAGFMBE; // 0x10
	::PIMJFBBFJPP_IBCAHEFBOEM* KLHPEBKNIFB; // 0x18
	::System::Action* IHLBALNBGKM; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIMJFBBFJPP_IBCAHEFBOEM_KDBGPEIKKJB__CTOR_OFFSET))(this);
	}

	::System::Void KAHNMHPMJCM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIMJFBBFJPP_IBCAHEFBOEM_KDBGPEIKKJB_KAHNMHPMJCM_OFFSET))(this);
	}
};
