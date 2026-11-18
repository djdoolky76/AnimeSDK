#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHOBPPAJKIL.h"

class EAIOHODECAO;

#define GCOFAPOAMEA_KMMIPNMJILI_OFFSET UNITYSDK_OFFSET(0x1F3671E0)
#define GCOFAPOAMEA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1F367190)
#define GCOFAPOAMEA__CTOR_OFFSET UNITYSDK_OFFSET(0x1F367220)

inline static constexpr unsigned int GCOFAPOAMEA_TypeDefinitionIndex = 96655;

class GCOFAPOAMEA : public ::MHOBPPAJKIL
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCOFAPOAMEA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::EAIOHODECAO* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::EAIOHODECAO*))((::PBYTE)hIl2Cpp + GCOFAPOAMEA_OJENCMOGDKL_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void KMMIPNMJILI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCOFAPOAMEA_KMMIPNMJILI_OFFSET))(this);
	}
};
