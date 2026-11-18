#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OCIKBEJKPCB;
namespace System { class Action; }

#define OCIKBEJKPCB_ACIGOONFBDC_EIJHNCHABKC_OFFSET UNITYSDK_OFFSET(0x13A4AC90)
#define OCIKBEJKPCB_ACIGOONFBDC__CTOR_OFFSET UNITYSDK_OFFSET(0x13A4AC80)

inline static constexpr unsigned int OCIKBEJKPCB_ACIGOONFBDC_TypeDefinitionIndex = 66587;

class OCIKBEJKPCB_ACIGOONFBDC : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10
	::OCIKBEJKPCB* KLHPEBKNIFB; // 0x18
	::System::UInt32 IEGPOKIFOIO; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCIKBEJKPCB_ACIGOONFBDC__CTOR_OFFSET))(this);
	}

	::System::Void EIJHNCHABKC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCIKBEJKPCB_ACIGOONFBDC_EIJHNCHABKC_OFFSET))(this);
	}
};
