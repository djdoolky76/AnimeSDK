#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/OLPPOJJADDO.h"

#define MLOIDHCHILN_PGKDINGDONO_OFFSET UNITYSDK_OFFSET(0x17D507D0)
#define MLOIDHCHILN__CTOR_OFFSET UNITYSDK_OFFSET(0x17D507C0)

inline static constexpr unsigned int MLOIDHCHILN_TypeDefinitionIndex = 91716;

class MLOIDHCHILN : public ::System::Object
{
public:
	::System::UInt32 MNAIIBHLHMA; // 0x10
	::System::Int32 BELNJJKMMJP; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLOIDHCHILN__CTOR_OFFSET))(this);
	}

	::OLPPOJJADDO PGKDINGDONO()
	{
		return ((::OLPPOJJADDO(*)(::PVOID))((::PBYTE)hIl2Cpp + MLOIDHCHILN_PGKDINGDONO_OFFSET))(this);
	}
};
