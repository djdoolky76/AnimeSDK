#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AKENMCOLJGI;
namespace System { class Action; }

#define AKENMCOLJGI_AOCEGCLPEIM_MKJBFGNBJBE_OFFSET UNITYSDK_OFFSET(0x144E4EA0)
#define AKENMCOLJGI_AOCEGCLPEIM_ONMDOOPLMOL_OFFSET UNITYSDK_OFFSET(0x144E4E50)
#define AKENMCOLJGI_AOCEGCLPEIM__CTOR_OFFSET UNITYSDK_OFFSET(0x144E4E40)

inline static constexpr unsigned int AKENMCOLJGI_AOCEGCLPEIM_TypeDefinitionIndex = 44277;

class AKENMCOLJGI_AOCEGCLPEIM : public ::System::Object
{
public:
	::System::Action* HKEBHFKHBCC; // 0x10
	::AKENMCOLJGI* KLHPEBKNIFB; // 0x18
	::System::Boolean GJAKJPAHIFJ; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKENMCOLJGI_AOCEGCLPEIM__CTOR_OFFSET))(this);
	}

	::System::Void ONMDOOPLMOL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKENMCOLJGI_AOCEGCLPEIM_ONMDOOPLMOL_OFFSET))(this);
	}

	::System::Void MKJBFGNBJBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKENMCOLJGI_AOCEGCLPEIM_MKJBFGNBJBE_OFFSET))(this);
	}
};
