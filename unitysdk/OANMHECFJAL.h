#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ICJMMODMIOK.h"
#include "unitysdk/System/Object.h"

#define OANMHECFJAL_HHNODMCKAHJ_OFFSET UNITYSDK_OFFSET(0x13A44D40)
#define OANMHECFJAL_JMDEKPONKMF_OFFSET UNITYSDK_OFFSET(0x13A44CA0)
#define OANMHECFJAL_OKDMKDOJPLE_OFFSET UNITYSDK_OFFSET(0x13A44CE0)

inline static constexpr unsigned int OANMHECFJAL_TypeDefinitionIndex = 86617;

class OANMHECFJAL : public ::System::Object
{
public:
	static ::ICJMMODMIOK* StaticGet_JOKKJGGKFKL()
	{
		return (::ICJMMODMIOK*)Il2CppClass::FromTypeDefinitionIndex(OANMHECFJAL_TypeDefinitionIndex)->GetStaticField(0x11620);
	}

	static ::System::Void JMDEKPONKMF()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OANMHECFJAL_JMDEKPONKMF_OFFSET))();
	}

	static ::System::Void OKDMKDOJPLE(::ICJMMODMIOK NFKAJAIMGJM, ::System::Boolean KMPCLKEOLAO)
	{
		return ((::System::Void(*)(::ICJMMODMIOK, ::System::Boolean))((::PBYTE)hIl2Cpp + OANMHECFJAL_OKDMKDOJPLE_OFFSET))(NFKAJAIMGJM, KMPCLKEOLAO);
	}

	static ::System::Boolean HHNODMCKAHJ(::ICJMMODMIOK NFKAJAIMGJM)
	{
		return ((::System::Boolean(*)(::ICJMMODMIOK))((::PBYTE)hIl2Cpp + OANMHECFJAL_HHNODMCKAHJ_OFFSET))(NFKAJAIMGJM);
	}
};
