#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BMBMBLDFBID.h"

class JEPHFHPHAIB;

#define BAMJLJPJPFA_AECAPHJCACE_IADNDJBKLCM_OFFSET UNITYSDK_OFFSET(0x14239BA0)
#define BAMJLJPJPFA_AECAPHJCACE__CTOR_OFFSET UNITYSDK_OFFSET(0x14239B90)

inline static constexpr unsigned int BAMJLJPJPFA_AECAPHJCACE_TypeDefinitionIndex = 92521;

class BAMJLJPJPFA_AECAPHJCACE : public ::System::Object
{
public:
	::JEPHFHPHAIB* IJEGAGBCCKK; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAMJLJPJPFA_AECAPHJCACE__CTOR_OFFSET))(this);
	}

	::System::Void IADNDJBKLCM(::BMBMBLDFBID PHHDHIBOCKA)
	{
		return ((::System::Void(*)(::PVOID, ::BMBMBLDFBID))((::PBYTE)hIl2Cpp + BAMJLJPJPFA_AECAPHJCACE_IADNDJBKLCM_OFFSET))(this, PHHDHIBOCKA);
	}
};
