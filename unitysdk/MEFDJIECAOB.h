#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ENGKPGFGGLM;

#define MEFDJIECAOB_CNIGGKPAJKA_OFFSET UNITYSDK_OFFSET(0x1404BCE0)
#define MEFDJIECAOB_MBKDOMFJFIG_OFFSET UNITYSDK_OFFSET(0x1404BC70)
#define MEFDJIECAOB_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1404BD60)

inline static constexpr unsigned int MEFDJIECAOB_TypeDefinitionIndex = 72054;

class MEFDJIECAOB : public ::System::Object
{
public:
	static ::System::Void MBKDOMFJFIG(::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + MEFDJIECAOB_MBKDOMFJFIG_OFFSET))(FFNKDGGHBPP);
	}

	static ::System::Void CNIGGKPAJKA()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MEFDJIECAOB_CNIGGKPAJKA_OFFSET))();
	}

	static ::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MEFDJIECAOB_PHOADBJGFBE_OFFSET))();
	}
};
