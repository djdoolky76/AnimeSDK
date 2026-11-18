#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GMBDKAPICHA;
namespace System { class String; }

#define DKNANPCGMLK__CTOR_OFFSET UNITYSDK_OFFSET(0x148B2AD0)

inline static constexpr unsigned int DKNANPCGMLK_TypeDefinitionIndex = 47208;

class DKNANPCGMLK : public ::System::Object
{
public:
	::GMBDKAPICHA* LJBPECKCCEA; // 0x10
	::System::String* AMEEMEPHGEL; // 0x18
	::System::String* IHHJKLMNAEB; // 0x20
	::System::Int32 HCILKCPGDFI; // 0x28
	::System::Single MDPPNMIPDMP; // 0x2C
	::System::Boolean CABLGCLLDII; // 0x30
	::System::Boolean EFGNBFAOINI; // 0x31

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKNANPCGMLK__CTOR_OFFSET))(this);
	}
};
