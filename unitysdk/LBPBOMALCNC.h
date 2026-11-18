#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DAJMGMMAJEH;

#define LBPBOMALCNC_COMPARE_OFFSET UNITYSDK_OFFSET(0x1A2EAAB0)
#define LBPBOMALCNC__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A2EAE20)
#define LBPBOMALCNC__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2EAE10)

inline static constexpr unsigned int LBPBOMALCNC_TypeDefinitionIndex = 55254;

class LBPBOMALCNC : public ::System::Object
{
public:
	static ::LBPBOMALCNC** StaticGet_DDGNFJDLOKA()
	{
		return (::LBPBOMALCNC**)Il2CppClass::FromTypeDefinitionIndex(LBPBOMALCNC_TypeDefinitionIndex)->GetStaticField(0x49870);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBPBOMALCNC__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LBPBOMALCNC__CCTOR_OFFSET))();
	}

	::System::Int32 Compare(::DAJMGMMAJEH* HAAEBCOBKFF, ::DAJMGMMAJEH* BFMMEICFNCD)
	{
		return ((::System::Int32(*)(::PVOID, ::DAJMGMMAJEH*, ::DAJMGMMAJEH*))((::PBYTE)hIl2Cpp + LBPBOMALCNC_COMPARE_OFFSET))(this, HAAEBCOBKFF, BFMMEICFNCD);
	}
};
