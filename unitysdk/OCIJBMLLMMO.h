#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BDNMHHIKMIL.h"

class JMNDEAFIAAF;

#define OCIJBMLLMMO_BGJPLEHEDKJ_OFFSET UNITYSDK_OFFSET(0x114E7E30)
#define OCIJBMLLMMO_KHAEIOINMBG_OFFSET UNITYSDK_OFFSET(0x114E7FC0)
#define OCIJBMLLMMO_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x114E7BC0)
#define OCIJBMLLMMO_OMCCGHBCCNI_OFFSET UNITYSDK_OFFSET(0x114E7ED0)
#define OCIJBMLLMMO__CTOR_OFFSET UNITYSDK_OFFSET(0x114E7F80)

inline static constexpr unsigned int OCIJBMLLMMO_TypeDefinitionIndex = 45946;

class OCIJBMLLMMO : public ::BDNMHHIKMIL
{
public:
	::System::Int32 JKBLDFBGBPK; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCIJBMLLMMO__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCIJBMLLMMO_OJENCMOGDKL_OFFSET))(this);
	}

	::System::Void BGJPLEHEDKJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCIJBMLLMMO_BGJPLEHEDKJ_OFFSET))(this);
	}

	::System::Void OMCCGHBCCNI(::JMNDEAFIAAF* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::JMNDEAFIAAF*))((::PBYTE)hIl2Cpp + OCIJBMLLMMO_OMCCGHBCCNI_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Void KHAEIOINMBG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCIJBMLLMMO_KHAEIOINMBG_OFFSET))(this);
	}
};
