#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BMBMBLDFBID.h"

class JEPHFHPHAIB;

#define BAMJLJPJPFA_ICDACDHNDMN_JLGHENHMEGM_OFFSET UNITYSDK_OFFSET(0x169DA0C0)
#define BAMJLJPJPFA_ICDACDHNDMN__CTOR_OFFSET UNITYSDK_OFFSET(0x169DA0B0)

inline static constexpr unsigned int BAMJLJPJPFA_ICDACDHNDMN_TypeDefinitionIndex = 92522;

class BAMJLJPJPFA_ICDACDHNDMN : public ::System::Object
{
public:
	::JEPHFHPHAIB* IJEGAGBCCKK; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAMJLJPJPFA_ICDACDHNDMN__CTOR_OFFSET))(this);
	}

	::System::Void JLGHENHMEGM(::BMBMBLDFBID PHHDHIBOCKA)
	{
		return ((::System::Void(*)(::PVOID, ::BMBMBLDFBID))((::PBYTE)hIl2Cpp + BAMJLJPJPFA_ICDACDHNDMN_JLGHENHMEGM_OFFSET))(this, PHHDHIBOCKA);
	}
};
