#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IHMFPHBDBAD.h"
#include "unitysdk/System/Object.h"

#define BPKHADAMILM__CTOR_OFFSET UNITYSDK_OFFSET(0x11404A60)

inline static constexpr unsigned int BPKHADAMILM_TypeDefinitionIndex = 83875;

class BPKHADAMILM : public ::System::Object
{
public:
	::IHMFPHBDBAD PNJCOKBBCOB; // 0x10
	::System::Int32 LFKAPALCLGP; // 0x14
	::System::Boolean IDHOMHHFPOH; // 0x18
	::System::Boolean JFLJKEKANND; // 0x19
	::System::Boolean OOHPIGGBKNI; // 0x1A
	::System::Byte _padding0[0x1];
	::System::UInt32 DHAJLFMHDNG; // 0x1C

	::System::Void _ctor(::System::UInt32 KLJNHMGMDNP)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BPKHADAMILM__CTOR_OFFSET))(this, KLJNHMGMDNP);
	}
};
