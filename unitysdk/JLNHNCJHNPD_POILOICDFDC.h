#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define JLNHNCJHNPD_POILOICDFDC_JHOPLBIOONC_OFFSET UNITYSDK_OFFSET(0x1762DCD0)
#define JLNHNCJHNPD_POILOICDFDC__CTOR_OFFSET UNITYSDK_OFFSET(0x1762DCC0)

inline static constexpr unsigned int JLNHNCJHNPD_POILOICDFDC_TypeDefinitionIndex = 79256;

class JLNHNCJHNPD_POILOICDFDC : public ::System::Object
{
public:
	::System::Action* FKHOJLMBILE; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLNHNCJHNPD_POILOICDFDC__CTOR_OFFSET))(this);
	}

	::System::Void JHOPLBIOONC(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + JLNHNCJHNPD_POILOICDFDC_JHOPLBIOONC_OFFSET))(this, PIIPCLCCOIG);
	}
};
