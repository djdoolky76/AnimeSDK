#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AJNEAMAGNAN;
class KFJOPOOIOLD;

#define KFJOPOOIOLD_MNCECPJCMIL_OCALBMIGNKA_OFFSET UNITYSDK_OFFSET(0x17703D60)
#define KFJOPOOIOLD_MNCECPJCMIL__CTOR_OFFSET UNITYSDK_OFFSET(0x17703D50)

inline static constexpr unsigned int KFJOPOOIOLD_MNCECPJCMIL_TypeDefinitionIndex = 89205;

class KFJOPOOIOLD_MNCECPJCMIL : public ::System::Object
{
public:
	::AJNEAMAGNAN* HBMGHPEPBNC; // 0x10
	::KFJOPOOIOLD* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFJOPOOIOLD_MNCECPJCMIL__CTOR_OFFSET))(this);
	}

	::System::Void OCALBMIGNKA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFJOPOOIOLD_MNCECPJCMIL_OCALBMIGNKA_OFFSET))(this);
	}
};
