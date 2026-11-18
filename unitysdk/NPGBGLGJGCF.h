#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OCLIHFICGGG;

#define NPGBGLGJGCF_DPPONIIFFKD_OFFSET UNITYSDK_OFFSET(0x15F49DA0)
#define NPGBGLGJGCF_KGDIAFKIAMN_OFFSET UNITYSDK_OFFSET(0x15F49E50)
#define NPGBGLGJGCF__CCTOR_OFFSET UNITYSDK_OFFSET(0x15F49D40)

inline static constexpr unsigned int NPGBGLGJGCF_TypeDefinitionIndex = 59303;

class NPGBGLGJGCF : public ::System::Object
{
public:
	static ::OCLIHFICGGG** StaticGet_PGPGMPCLGIE()
	{
		return (::OCLIHFICGGG**)Il2CppClass::FromTypeDefinitionIndex(NPGBGLGJGCF_TypeDefinitionIndex)->GetStaticField(0x3A0B0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPGBGLGJGCF__CCTOR_OFFSET))();
	}

	static ::System::Void DPPONIIFFKD(::OCLIHFICGGG* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::OCLIHFICGGG*))((::PBYTE)hIl2Cpp + NPGBGLGJGCF_DPPONIIFFKD_OFFSET))(EGEGIMGMJHN);
	}

	static ::OCLIHFICGGG* KGDIAFKIAMN()
	{
		return ((::OCLIHFICGGG*(*)())((::PBYTE)hIl2Cpp + NPGBGLGJGCF_KGDIAFKIAMN_OFFSET))();
	}
};
