#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DLDGOPHECJB;
namespace System { class Action; }

#define OMHPCIPLEFK_DKDJDEJHABH_OFFSET UNITYSDK_OFFSET(0x16F85180)
#define OMHPCIPLEFK_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x16F85430)
#define OMHPCIPLEFK__CTOR_OFFSET UNITYSDK_OFFSET(0x16F85420)

inline static constexpr unsigned int OMHPCIPLEFK_TypeDefinitionIndex = 81491;

class OMHPCIPLEFK : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMHPCIPLEFK__CTOR_OFFSET))(this);
	}

	::System::Void DKDJDEJHABH(::System::Action* PABLEDCGDGM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + OMHPCIPLEFK_DKDJDEJHABH_OFFSET))(this, PABLEDCGDGM);
	}

	static ::OMHPCIPLEFK* JFDOOELFAOA(::DLDGOPHECJB* GDINHGLCODO)
	{
		return ((::OMHPCIPLEFK*(*)(::DLDGOPHECJB*))((::PBYTE)hIl2Cpp + OMHPCIPLEFK_JFDOOELFAOA_OFFSET))(GDINHGLCODO);
	}
};
