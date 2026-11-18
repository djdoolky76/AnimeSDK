#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ABKGADIGHLN;
class EEDCJIDGBPN;
class NCKOHKGBAHI;
class NODDFJOBNND;
class PALLFNLFCJB;

#define OFHKKFOCBCB_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1843F200)
#define OFHKKFOCBCB__CTOR_OFFSET UNITYSDK_OFFSET(0x1843F080)

inline static constexpr unsigned int OFHKKFOCBCB_TypeDefinitionIndex = 42510;

class OFHKKFOCBCB : public ::System::Object
{
public:
	::ABKGADIGHLN* CPFEIBBJABH; // 0x10
	::EEDCJIDGBPN* LCHKDNEDJAD; // 0x18
	::PALLFNLFCJB* BAFJNOFPACG; // 0x20
	::NCKOHKGBAHI* JFPICJPFEKH; // 0x28
	::NODDFJOBNND* OCLDHJIJMDE; // 0x30
	::System::Boolean DMCKBAHEMBC; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFHKKFOCBCB__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFHKKFOCBCB_PHOADBJGFBE_OFFSET))(this);
	}
};
