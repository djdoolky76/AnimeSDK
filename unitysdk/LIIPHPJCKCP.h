#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ADJHCGJKLOK.h"
#include "unitysdk/OCDGNIGOFFE.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define LIIPHPJCKCP_AAHIHFAFFAI_OFFSET UNITYSDK_OFFSET(0x12D336B0)
#define LIIPHPJCKCP_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x12D33670)
#define LIIPHPJCKCP_PNBGBCLNMFB_OFFSET UNITYSDK_OFFSET(0x12D33710)
#define LIIPHPJCKCP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x12D335A0)
#define LIIPHPJCKCP__CTOR_OFFSET UNITYSDK_OFFSET(0x12D33660)

inline static constexpr unsigned int LIIPHPJCKCP_TypeDefinitionIndex = 64212;

class LIIPHPJCKCP : public ::System::Object
{
public:
	::OCDGNIGOFFE AHFFKIPJBPO; // 0x10
	::ADJHCGJKLOK FHKHNDKOJHF; // 0x14
	::System::Int64 OAKIADBHPBP; // 0x18
	::System::Boolean OALKHGCBGKO; // 0x20
	::System::Boolean CINPMFEJCGC; // 0x21

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIIPHPJCKCP__CTOR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LIIPHPJCKCP_TOSTRING_OFFSET))(this);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LIIPHPJCKCP_DPIHOJBBGLA_OFFSET))(this);
	}

	::System::Void AAHIHFAFFAI(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LIIPHPJCKCP_AAHIHFAFFAI_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean PNBGBCLNMFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LIIPHPJCKCP_PNBGBCLNMFB_OFFSET))(this);
	}
};
