#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CFMGIKJLMBJ;
class MLJGMELKNCC_ONKAPFOMFDK;

#define IFGMHKCFNCE_PGCHNCFAAMB_EPCNOJKOKGC_OFFSET UNITYSDK_OFFSET(0x12EA9510)
#define IFGMHKCFNCE_PGCHNCFAAMB__CTOR_OFFSET UNITYSDK_OFFSET(0x12EA9500)

inline static constexpr unsigned int IFGMHKCFNCE_PGCHNCFAAMB_TypeDefinitionIndex = 67845;

class IFGMHKCFNCE_PGCHNCFAAMB : public ::System::Object
{
public:
	::MLJGMELKNCC_ONKAPFOMFDK* KPNIHKEKDOC; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFGMHKCFNCE_PGCHNCFAAMB__CTOR_OFFSET))(this);
	}

	::System::Void EPCNOJKOKGC(::CFMGIKJLMBJ* JBLGEGMELPE)
	{
		return ((::System::Void(*)(::PVOID, ::CFMGIKJLMBJ*))((::PBYTE)hIl2Cpp + IFGMHKCFNCE_PGCHNCFAAMB_EPCNOJKOKGC_OFFSET))(this, JBLGEGMELPE);
	}
};
