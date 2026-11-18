#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EAIOHODECAO;

#define MHOBPPAJKIL_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x1F54B4D0)
#define MHOBPPAJKIL_HJPHMMNADIM_OFFSET UNITYSDK_OFFSET(0x1F54B480)
#define MHOBPPAJKIL_JJEJHGOJOII_OFFSET UNITYSDK_OFFSET(0x1F54B580)
#define MHOBPPAJKIL_PPLIDHJDMGF_OFFSET UNITYSDK_OFFSET(0x1F54B530)
#define MHOBPPAJKIL__CTOR_OFFSET UNITYSDK_OFFSET(0x1F54B4C0)

inline static constexpr unsigned int MHOBPPAJKIL_TypeDefinitionIndex = 29123;

class MHOBPPAJKIL : public ::System::Object
{
public:
	::EAIOHODECAO* GEEHGDABNJF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHOBPPAJKIL__CTOR_OFFSET))(this);
	}

	::System::Void HJPHMMNADIM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHOBPPAJKIL_HJPHMMNADIM_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::EAIOHODECAO* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::EAIOHODECAO*))((::PBYTE)hIl2Cpp + MHOBPPAJKIL_BBOMJDBNHIC_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void PPLIDHJDMGF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHOBPPAJKIL_PPLIDHJDMGF_OFFSET))(this);
	}

	::System::Void JJEJHGOJOII()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHOBPPAJKIL_JJEJHGOJOII_OFFSET))(this);
	}
};
