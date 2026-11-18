#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMDKFPOLLAI.h"
#include "unitysdk/System/Object.h"

class CCAPOCGPMMC;
class GMKHAMIOJKL;

#define GDEIDDOPHDD_KFPOAMODHKH_OFFSET UNITYSDK_OFFSET(0x18132D80)
#define GDEIDDOPHDD__CTOR_OFFSET UNITYSDK_OFFSET(0x18132B80)

inline static constexpr unsigned int GDEIDDOPHDD_TypeDefinitionIndex = 92994;

class GDEIDDOPHDD : public ::System::Object
{
public:
	::CCAPOCGPMMC* NEEANEAMNKE; // 0x10
	::GMKHAMIOJKL* ABELECAKEFK; // 0x18
	::System::Int32 NHLBLAIJGJH; // 0x20
	::FMDKFPOLLAI FKMEMKFADAN; // 0x24
	::System::Int32 EGKPJJIBBJP; // 0x28

	::System::Void _ctor(::System::Int32 FGKPNGBJBBG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GDEIDDOPHDD__CTOR_OFFSET))(this, FGKPNGBJBBG);
	}

	::System::Void KFPOAMODHKH(::GMKHAMIOJKL* ABELECAKEFK)
	{
		return ((::System::Void(*)(::PVOID, ::GMKHAMIOJKL*))((::PBYTE)hIl2Cpp + GDEIDDOPHDD_KFPOAMODHKH_OFFSET))(this, ABELECAKEFK);
	}
};
