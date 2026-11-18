#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NILGNGDBENM;

#define ODGJPBGHLAJ_GOGKCEPPMPG_JODJIMELMBM_OFFSET UNITYSDK_OFFSET(0xE0EF7F0)
#define ODGJPBGHLAJ_GOGKCEPPMPG__CTOR_OFFSET UNITYSDK_OFFSET(0xE0EF7E0)

inline static constexpr unsigned int ODGJPBGHLAJ_GOGKCEPPMPG_TypeDefinitionIndex = 83792;

class ODGJPBGHLAJ_GOGKCEPPMPG : public ::System::Object
{
public:
	::System::Int32 JBNBMFNNELP; // 0x10
	::System::Int32 FAEGNLBDHJE; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODGJPBGHLAJ_GOGKCEPPMPG__CTOR_OFFSET))(this);
	}

	::System::Void JODJIMELMBM(::System::Int32 MLLANGMIIKN, ::NILGNGDBENM* ILPOKPOPGLA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::NILGNGDBENM*))((::PBYTE)hIl2Cpp + ODGJPBGHLAJ_GOGKCEPPMPG_JODJIMELMBM_OFFSET))(this, MLLANGMIIKN, ILPOKPOPGLA);
	}
};
