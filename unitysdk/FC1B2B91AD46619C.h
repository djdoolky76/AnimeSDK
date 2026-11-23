#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FC1B2B91AD46619C_E89F8B259165A735.h"

namespace System { class String; }

#define FC1B2B91AD46619C_B0B7BABB96BB8E30_OFFSET UNITYSDK_OFFSET(0x44107A0)
#define FC1B2B91AD46619C_FCF702214EE3E4BF_OFFSET UNITYSDK_OFFSET(0x4410780)

inline static constexpr unsigned int FC1B2B91AD46619C_TypeDefinitionIndex = 21142;

class FC1B2B91AD46619C : public ::System::Object
{
public:
	static ::System::Boolean FCF702214EE3E4BF(::System::Char A97F5B807CC19082)
	{
		return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + FC1B2B91AD46619C_FCF702214EE3E4BF_OFFSET))(A97F5B807CC19082);
	}

	static ::FC1B2B91AD46619C_E89F8B259165A735 B0B7BABB96BB8E30(::System::String* F1B74DA73881CF9B, ::System::Int32 FC300ADBDFF24726)
	{
		return ((::FC1B2B91AD46619C_E89F8B259165A735(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + FC1B2B91AD46619C_B0B7BABB96BB8E30_OFFSET))(F1B74DA73881CF9B, FC300ADBDFF24726);
	}
};
