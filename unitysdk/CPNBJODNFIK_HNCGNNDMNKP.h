#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ONIHOMNFBOO;

#define CPNBJODNFIK_HNCGNNDMNKP_IDMFPACLJHL_OFFSET UNITYSDK_OFFSET(0x1497D410)
#define CPNBJODNFIK_HNCGNNDMNKP__CTOR_OFFSET UNITYSDK_OFFSET(0x1497D400)

inline static constexpr unsigned int CPNBJODNFIK_HNCGNNDMNKP_TypeDefinitionIndex = 49710;

class CPNBJODNFIK_HNCGNNDMNKP : public ::System::Object
{
public:
	::System::Int32 DKPFBNACHBK; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPNBJODNFIK_HNCGNNDMNKP__CTOR_OFFSET))(this);
	}

	::System::Boolean IDMFPACLJHL(::ONIHOMNFBOO* HAAEBCOBKFF)
	{
		return ((::System::Boolean(*)(::PVOID, ::ONIHOMNFBOO*))((::PBYTE)hIl2Cpp + CPNBJODNFIK_HNCGNNDMNKP_IDMFPACLJHL_OFFSET))(this, HAAEBCOBKFF);
	}
};
