#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BCHAOKNEKPL.h"
#include "unitysdk/MMADJDMEHDC.h"
#include "unitysdk/System/Object.h"

#define DHBBFGNGIKE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9F33E0)

inline static constexpr unsigned int DHBBFGNGIKE_TypeDefinitionIndex = 93867;

class DHBBFGNGIKE : public ::System::Object
{
public:
	::Il2CppArray<::BCHAOKNEKPL>* FJLLKIEPEPC; // 0x10
	::Il2CppArray<::MMADJDMEHDC>* GJOGBGDNKOL; // 0x18
	::System::Int32 IECAKACODNB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHBBFGNGIKE__CTOR_OFFSET))(this);
	}
};
