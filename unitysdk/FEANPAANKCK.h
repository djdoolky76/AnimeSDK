#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHOBPPAJKIL.h"

class EAIOHODECAO;
namespace System { class String; }

#define FEANPAANKCK_KMMIPNMJILI_OFFSET UNITYSDK_OFFSET(0x1EB6E310)
#define FEANPAANKCK_MBGOMBLDBMB_OFFSET UNITYSDK_OFFSET(0x1EB6E370)
#define FEANPAANKCK_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1EB6E1D0)
#define FEANPAANKCK_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x1EB6E530)
#define FEANPAANKCK__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB6E360)

inline static constexpr unsigned int FEANPAANKCK_TypeDefinitionIndex = 96478;

class FEANPAANKCK : public ::MHOBPPAJKIL
{
public:
	::System::Int32 BJKMGFHNEIO; // 0x18
	::System::Int32 GIKICHMBBDF; // 0x1C
	::System::Single AGKOOJIIBED; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEANPAANKCK__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::EAIOHODECAO* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::EAIOHODECAO*))((::PBYTE)hIl2Cpp + FEANPAANKCK_OJENCMOGDKL_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void KMMIPNMJILI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEANPAANKCK_KMMIPNMJILI_OFFSET))(this);
	}

	::System::Void MBGOMBLDBMB(::System::String* FDCDHPGECCC)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FEANPAANKCK_MBGOMBLDBMB_OFFSET))(this, FDCDHPGECCC);
	}

	::System::Void OKJCHFGIKBH(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FEANPAANKCK_OKJCHFGIKBH_OFFSET))(this, PMNLNNGEIFM);
	}
};
