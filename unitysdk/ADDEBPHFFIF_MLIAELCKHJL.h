#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ADDEBPHFFIF;
class IBFPMLALDOK;

#define ADDEBPHFFIF_MLIAELCKHJL_AKLKKMFDFNB_OFFSET UNITYSDK_OFFSET(0x16D61EE0)
#define ADDEBPHFFIF_MLIAELCKHJL__CTOR_OFFSET UNITYSDK_OFFSET(0x16D61ED0)

inline static constexpr unsigned int ADDEBPHFFIF_MLIAELCKHJL_TypeDefinitionIndex = 54154;

class ADDEBPHFFIF_MLIAELCKHJL : public ::System::Object
{
public:
	::ADDEBPHFFIF* KLHPEBKNIFB; // 0x10
	::System::Int32 NACGJJKHEJE; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADDEBPHFFIF_MLIAELCKHJL__CTOR_OFFSET))(this);
	}

	::System::Void AKLKKMFDFNB(::IBFPMLALDOK* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::IBFPMLALDOK*))((::PBYTE)hIl2Cpp + ADDEBPHFFIF_MLIAELCKHJL_AKLKKMFDFNB_OFFSET))(this, GLAOEHCGCFO);
	}
};
