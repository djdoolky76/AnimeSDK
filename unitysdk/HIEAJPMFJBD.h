#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OEKHMAPHEJH.h"

class JFLHGHFBNGJ;

#define HIEAJPMFJBD_DLJEAGFGEBN_OFFSET UNITYSDK_OFFSET(0x1101D730)
#define HIEAJPMFJBD_OKKNACFMDOA_OFFSET UNITYSDK_OFFSET(0x1101DA70)
#define HIEAJPMFJBD__CTOR_OFFSET UNITYSDK_OFFSET(0x1101D720)

inline static constexpr unsigned int HIEAJPMFJBD_TypeDefinitionIndex = 41801;

class HIEAJPMFJBD : public ::OEKHMAPHEJH
{
public:
	::JFLHGHFBNGJ* EFFAONJBCOG; // 0x20

	::System::Void _ctor(::JFLHGHFBNGJ* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::JFLHGHFBNGJ*))((::PBYTE)hIl2Cpp + HIEAJPMFJBD__CTOR_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void DLJEAGFGEBN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIEAJPMFJBD_DLJEAGFGEBN_OFFSET))(this);
	}

	::System::Void OKKNACFMDOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIEAJPMFJBD_OKKNACFMDOA_OFFSET))(this);
	}
};
