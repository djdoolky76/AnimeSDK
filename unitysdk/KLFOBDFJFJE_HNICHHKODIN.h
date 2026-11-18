#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BMBMBLDFBID.h"

class KLFOBDFJFJE_ODHJCEMNKIO;
namespace MoleMole::Config { class ConfigHollowCameraStretchV2; }

#define KLFOBDFJFJE_HNICHHKODIN_JEPCDLGOGLL_OFFSET UNITYSDK_OFFSET(0x157F6EB0)
#define KLFOBDFJFJE_HNICHHKODIN__CTOR_OFFSET UNITYSDK_OFFSET(0x157F6EA0)

inline static constexpr unsigned int KLFOBDFJFJE_HNICHHKODIN_TypeDefinitionIndex = 58478;

class KLFOBDFJFJE_HNICHHKODIN : public ::System::Object
{
public:
	::MoleMole::Config::ConfigHollowCameraStretchV2* NBCCEHIHFKI; // 0x10
	::KLFOBDFJFJE_ODHJCEMNKIO* FGBNBFHOKAA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLFOBDFJFJE_HNICHHKODIN__CTOR_OFFSET))(this);
	}

	::System::Void JEPCDLGOGLL(::BMBMBLDFBID DMIAICJPPDL)
	{
		return ((::System::Void(*)(::PVOID, ::BMBMBLDFBID))((::PBYTE)hIl2Cpp + KLFOBDFJFJE_HNICHHKODIN_JEPCDLGOGLL_OFFSET))(this, DMIAICJPPDL);
	}
};
