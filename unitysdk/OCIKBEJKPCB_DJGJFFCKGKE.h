#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OCIKBEJKPCB_LANALJJPLGC;
namespace System { class EventArgs; }

#define OCIKBEJKPCB_DJGJFFCKGKE_GGLHAIGHOEG_OFFSET UNITYSDK_OFFSET(0xF175A00)
#define OCIKBEJKPCB_DJGJFFCKGKE__CTOR_OFFSET UNITYSDK_OFFSET(0xF1759F0)

inline static constexpr unsigned int OCIKBEJKPCB_DJGJFFCKGKE_TypeDefinitionIndex = 66588;

class OCIKBEJKPCB_DJGJFFCKGKE : public ::System::Object
{
public:
	::System::EventArgs* KOIBHLHLMFC; // 0x10
	::OCIKBEJKPCB_LANALJJPLGC* FGBNBFHOKAA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCIKBEJKPCB_DJGJFFCKGKE__CTOR_OFFSET))(this);
	}

	::System::Void GGLHAIGHOEG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCIKBEJKPCB_DJGJFFCKGKE_GGLHAIGHOEG_OFFSET))(this);
	}
};
