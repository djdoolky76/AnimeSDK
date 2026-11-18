#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AHNHEANMAML;
class BNDBNODKGAP_ILDNAEHKOEH;
class EBEAAFHPBJG;

#define BNDBNODKGAP_GEJMMOILJIA_MBBMFKEDDKD_OFFSET UNITYSDK_OFFSET(0x128B49B0)
#define BNDBNODKGAP_GEJMMOILJIA__CTOR_OFFSET UNITYSDK_OFFSET(0x128B49A0)

inline static constexpr unsigned int BNDBNODKGAP_GEJMMOILJIA_TypeDefinitionIndex = 78419;

class BNDBNODKGAP_GEJMMOILJIA : public ::System::Object
{
public:
	::AHNHEANMAML* DMHKCLNEMHJ; // 0x10
	::BNDBNODKGAP_ILDNAEHKOEH* FGBNBFHOKAA; // 0x18
	::EBEAAFHPBJG* DKELJKPOHOC; // 0x20
	::System::Boolean IHFHBLMMLIK; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNDBNODKGAP_GEJMMOILJIA__CTOR_OFFSET))(this);
	}

	::System::Void MBBMFKEDDKD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNDBNODKGAP_GEJMMOILJIA_MBBMFKEDDKD_OFFSET))(this);
	}
};
