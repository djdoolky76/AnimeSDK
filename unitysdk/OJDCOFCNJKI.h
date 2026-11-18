#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PBHPOOFFAFI.h"

class DFJDONMDDMJ;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OJDCOFCNJKI_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x11B36510)
#define OJDCOFCNJKI__CTOR_OFFSET UNITYSDK_OFFSET(0x11B36500)

inline static constexpr unsigned int OJDCOFCNJKI_TypeDefinitionIndex = 91417;

class OJDCOFCNJKI : public ::PBHPOOFFAFI
{
public:
	::System::String* GEBOELEBLLB; // 0x28
	::System::Collections::Generic::List_1<::System::Int32>* GLAJCAIPPLA; // 0x30
	::System::Single MHLGIENJHCD; // 0x38
	::System::Int32 JJINIKKHINP; // 0x3C
	::System::Int32 DDPHAJDLBDH; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJDCOFCNJKI__CTOR_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::DFJDONMDDMJ* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::DFJDONMDDMJ*))((::PBYTE)hIl2Cpp + OJDCOFCNJKI_BBOMJDBNHIC_OFFSET))(this, LJBPECKCCEA);
	}
};
