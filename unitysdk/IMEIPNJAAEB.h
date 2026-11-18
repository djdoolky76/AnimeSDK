#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHOBPPAJKIL.h"

class EAIOHODECAO;

#define IMEIPNJAAEB_KMMIPNMJILI_OFFSET UNITYSDK_OFFSET(0x20035AD0)
#define IMEIPNJAAEB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x20035A80)
#define IMEIPNJAAEB__CTOR_OFFSET UNITYSDK_OFFSET(0x20035B10)

inline static constexpr unsigned int IMEIPNJAAEB_TypeDefinitionIndex = 96402;

class IMEIPNJAAEB : public ::MHOBPPAJKIL
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMEIPNJAAEB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::EAIOHODECAO* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::EAIOHODECAO*))((::PBYTE)hIl2Cpp + IMEIPNJAAEB_OJENCMOGDKL_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void KMMIPNMJILI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMEIPNJAAEB_KMMIPNMJILI_OFFSET))(this);
	}
};
