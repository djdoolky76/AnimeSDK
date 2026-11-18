#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CJIEIHEDMME.h"

class BGKBACMKBCL;
class MBGCILLLMBB;

#define BLOKDPHNBFL_CFIKGIBHGOB_OFFSET UNITYSDK_OFFSET(0x1857D100)
#define BLOKDPHNBFL_FFCOHGPPDKN_OFFSET UNITYSDK_OFFSET(0x1857CA50)
#define BLOKDPHNBFL_IONDPHJBCIK_OFFSET UNITYSDK_OFFSET(0x1857D070)
#define BLOKDPHNBFL_JOKOABPKLBN_OFFSET UNITYSDK_OFFSET(0x1857CAC0)
#define BLOKDPHNBFL__CTOR_OFFSET UNITYSDK_OFFSET(0x1857CA30)

inline static constexpr unsigned int BLOKDPHNBFL_TypeDefinitionIndex = 46858;

class BLOKDPHNBFL : public ::CJIEIHEDMME
{
public:
	::BGKBACMKBCL* MFEEHJAOIEN; // 0x78

	::System::Void _ctor(::MBGCILLLMBB* IKMDLFLGHAM)
	{
		return ((::System::Void(*)(::PVOID, ::MBGCILLLMBB*))((::PBYTE)hIl2Cpp + BLOKDPHNBFL__CTOR_OFFSET))(this, IKMDLFLGHAM);
	}

	::System::Void FFCOHGPPDKN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLOKDPHNBFL_FFCOHGPPDKN_OFFSET))(this);
	}

	::System::Void JOKOABPKLBN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLOKDPHNBFL_JOKOABPKLBN_OFFSET))(this);
	}

	::System::Void IONDPHJBCIK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLOKDPHNBFL_IONDPHJBCIK_OFFSET))(this);
	}

	::System::Void CFIKGIBHGOB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLOKDPHNBFL_CFIKGIBHGOB_OFFSET))(this);
	}
};
