#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LGCNEDCMPKM.h"
#include "unitysdk/System/Object.h"

class CAFBIOHKMHB;
class MBKILECHIMB;

#define FBCJMIJEOPE_BABJPPPMEJN_OIIDDIBIOPO_OFFSET UNITYSDK_OFFSET(0x17261840)
#define FBCJMIJEOPE_BABJPPPMEJN__CTOR_OFFSET UNITYSDK_OFFSET(0x17261830)

inline static constexpr unsigned int FBCJMIJEOPE_BABJPPPMEJN_TypeDefinitionIndex = 64363;

class FBCJMIJEOPE_BABJPPPMEJN : public ::System::Object
{
public:
	::CAFBIOHKMHB* GDOMFPNKECJ; // 0x10
	::MBKILECHIMB* DOAHNMLLFNA; // 0x18
	::LGCNEDCMPKM AAOCANGHBDG; // 0x20
	::System::Int32 DEFAKCIAKLG; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBCJMIJEOPE_BABJPPPMEJN__CTOR_OFFSET))(this);
	}

	::System::Void OIIDDIBIOPO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBCJMIJEOPE_BABJPPPMEJN_OIIDDIBIOPO_OFFSET))(this);
	}
};
