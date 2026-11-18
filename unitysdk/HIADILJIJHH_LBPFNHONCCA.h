#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AHDHIGCGKCK;
class HIADILJIJHH_GHFODICPPFL;

#define HIADILJIJHH_LBPFNHONCCA_DEMDOMBBACF_OFFSET UNITYSDK_OFFSET(0x146FCB20)
#define HIADILJIJHH_LBPFNHONCCA_GBLPKKDAMJH_OFFSET UNITYSDK_OFFSET(0x146FCAB0)
#define HIADILJIJHH_LBPFNHONCCA__CTOR_OFFSET UNITYSDK_OFFSET(0x146FCAA0)

inline static constexpr unsigned int HIADILJIJHH_LBPFNHONCCA_TypeDefinitionIndex = 61813;

class HIADILJIJHH_LBPFNHONCCA : public ::System::Object
{
public:
	::HIADILJIJHH_GHFODICPPFL* KGFKHBMEKBL; // 0x10
	::AHDHIGCGKCK* IPMMCGDMODG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIADILJIJHH_LBPFNHONCCA__CTOR_OFFSET))(this);
	}

	::System::Void GBLPKKDAMJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIADILJIJHH_LBPFNHONCCA_GBLPKKDAMJH_OFFSET))(this);
	}

	::System::Void DEMDOMBBACF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIADILJIJHH_LBPFNHONCCA_DEMDOMBBACF_OFFSET))(this);
	}
};
