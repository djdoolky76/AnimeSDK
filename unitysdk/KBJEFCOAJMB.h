#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DAJFJPNDFPK;
class KMMKMIMOBEJ;
namespace System { class String; }

#define KBJEFCOAJMB__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18609290)
#define KBJEFCOAJMB__CTOR_OFFSET UNITYSDK_OFFSET(0x18609130)

inline static constexpr unsigned int KBJEFCOAJMB_TypeDefinitionIndex = 67579;

class KBJEFCOAJMB : public ::System::Object
{
public:
	::System::String* EGAJMEOAOMG; // 0x10
	::System::String* BACHPPCDKKL; // 0x18
	::System::String* MBGGEGCNPMB; // 0x20
	::System::String* LKGPJFDOKFL; // 0x28
	::System::String* CKLGDGENJKL; // 0x30
	::System::UInt32 ACHBBPJIBIE; // 0x38
	::System::UInt32 OGHGHPOJKDA; // 0x3C
	::System::UInt32 MGJELFBPLEA; // 0x40
	::System::Int32 LOEGOEFCAEO; // 0x44
	::System::Boolean OHMCAKEHBAF; // 0x48
	::System::Byte _padding0[0x3];
	::System::UInt32 HLPCJFHBADD; // 0x4C

	::System::Void _ctor(::DAJFJPNDFPK* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::DAJFJPNDFPK*))((::PBYTE)hIl2Cpp + KBJEFCOAJMB__CTOR_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void _ctor_1(::KMMKMIMOBEJ* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::KMMKMIMOBEJ*))((::PBYTE)hIl2Cpp + KBJEFCOAJMB__CTOR_1_OFFSET))(this, LJBPECKCCEA);
	}
};
