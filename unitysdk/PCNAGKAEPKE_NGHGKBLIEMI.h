#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class APPEKHINIMK;
class BJIDGPFGOIL;
class JHACLFNMIKO;
class PCNAGKAEPKE;

#define PCNAGKAEPKE_NGHGKBLIEMI_CGFENCCAGLH_OFFSET UNITYSDK_OFFSET(0x1A7E4DF0)
#define PCNAGKAEPKE_NGHGKBLIEMI__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7E4DE0)

inline static constexpr unsigned int PCNAGKAEPKE_NGHGKBLIEMI_TypeDefinitionIndex = 86407;

class PCNAGKAEPKE_NGHGKBLIEMI : public ::System::Object
{
public:
	::PCNAGKAEPKE* KLHPEBKNIFB; // 0x10
	::BJIDGPFGOIL* LHPHKJBILKB; // 0x18
	::JHACLFNMIKO* KFJCKAANAJJ; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCNAGKAEPKE_NGHGKBLIEMI__CTOR_OFFSET))(this);
	}

	::System::Boolean CGFENCCAGLH(::APPEKHINIMK* CBLGCIFLMKL)
	{
		return ((::System::Boolean(*)(::PVOID, ::APPEKHINIMK*))((::PBYTE)hIl2Cpp + PCNAGKAEPKE_NGHGKBLIEMI_CGFENCCAGLH_OFFSET))(this, CBLGCIFLMKL);
	}
};
