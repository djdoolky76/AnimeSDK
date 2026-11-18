#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AHDHIGCGKCK;
class HIADILJIJHH_GHFODICPPFL;

#define HIADILJIJHH_OMALCJBMKBA_DIPGOHMHDHJ_OFFSET UNITYSDK_OFFSET(0x16CF1E30)
#define HIADILJIJHH_OMALCJBMKBA_GCMJLGPKJJB_OFFSET UNITYSDK_OFFSET(0x16CF1EA0)
#define HIADILJIJHH_OMALCJBMKBA__CTOR_OFFSET UNITYSDK_OFFSET(0x16CF1E20)

inline static constexpr unsigned int HIADILJIJHH_OMALCJBMKBA_TypeDefinitionIndex = 61811;

class HIADILJIJHH_OMALCJBMKBA : public ::System::Object
{
public:
	::AHDHIGCGKCK* IPMMCGDMODG; // 0x10
	::HIADILJIJHH_GHFODICPPFL* EEMOEMFLABI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIADILJIJHH_OMALCJBMKBA__CTOR_OFFSET))(this);
	}

	::System::Void DIPGOHMHDHJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIADILJIJHH_OMALCJBMKBA_DIPGOHMHDHJ_OFFSET))(this);
	}

	::System::Void GCMJLGPKJJB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIADILJIJHH_OMALCJBMKBA_GCMJLGPKJJB_OFFSET))(this);
	}
};
