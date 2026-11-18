#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FMHDMLBDIJC;
class IFOHGNLIAKH;
class LDKAJKFFOED_OJJPBHIJELI;

#define LDKAJKFFOED_AEGMCAOFFBI_FOCFCAENOCJ_OFFSET UNITYSDK_OFFSET(0x184E2190)
#define LDKAJKFFOED_AEGMCAOFFBI__CTOR_OFFSET UNITYSDK_OFFSET(0x184E2180)

inline static constexpr unsigned int LDKAJKFFOED_AEGMCAOFFBI_TypeDefinitionIndex = 90512;

class LDKAJKFFOED_AEGMCAOFFBI : public ::System::Object
{
public:
	::FMHDMLBDIJC* DLBHGIIOOPI; // 0x10
	::LDKAJKFFOED_OJJPBHIJELI* FGBNBFHOKAA; // 0x18
	::System::Int32 PLAELLPAJCJ; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDKAJKFFOED_AEGMCAOFFBI__CTOR_OFFSET))(this);
	}

	::System::Void FOCFCAENOCJ(::IFOHGNLIAKH* LOJLNELCDJL)
	{
		return ((::System::Void(*)(::PVOID, ::IFOHGNLIAKH*))((::PBYTE)hIl2Cpp + LDKAJKFFOED_AEGMCAOFFBI_FOCFCAENOCJ_OFFSET))(this, LOJLNELCDJL);
	}
};
