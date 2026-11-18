#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BAIAHAFJNBN.h"

#define JFGIIEHAFJC_DHJKFDOENGN_OFFSET UNITYSDK_OFFSET(0x165A1F40)
#define JFGIIEHAFJC_IMBNMFODKPJ_OFFSET UNITYSDK_OFFSET(0x165A24F0)
#define JFGIIEHAFJC__CTOR_OFFSET UNITYSDK_OFFSET(0x165A24E0)

inline static constexpr unsigned int JFGIIEHAFJC_TypeDefinitionIndex = 44132;

class JFGIIEHAFJC : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFGIIEHAFJC__CTOR_OFFSET))(this);
	}

	::System::Void DHJKFDOENGN(::BAIAHAFJNBN& AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::BAIAHAFJNBN&))((::PBYTE)hIl2Cpp + JFGIIEHAFJC_DHJKFDOENGN_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Void IMBNMFODKPJ(::BAIAHAFJNBN& AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::BAIAHAFJNBN&))((::PBYTE)hIl2Cpp + JFGIIEHAFJC_IMBNMFODKPJ_OFFSET))(this, AAOCANGHBDG);
	}
};
