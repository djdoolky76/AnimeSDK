#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define BGIFCDEEENM_BMJMFLFNPAO_OFFSET UNITYSDK_OFFSET(0x3CED50)
#define BGIFCDEEENM_DAMMKDKDOCB_OFFSET UNITYSDK_OFFSET(0x678900)
#define BGIFCDEEENM_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x678990)
#define BGIFCDEEENM_DPPHDDKOHAA_OFFSET UNITYSDK_OFFSET(0x282350)
#define BGIFCDEEENM_ELCAJMMOKAO_OFFSET UNITYSDK_OFFSET(0x678910)
#define BGIFCDEEENM_GAONAIMNAOF_OFFSET UNITYSDK_OFFSET(0x678A20)
#define BGIFCDEEENM_LPOKAEADENJ_OFFSET UNITYSDK_OFFSET(0x678AA0)
#define BGIFCDEEENM_NAADFALKCEI_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BGIFCDEEENM_PAOLDNPMFMN_OFFSET UNITYSDK_OFFSET(0x379C90)
#define BGIFCDEEENM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x6788F0)

inline static constexpr unsigned int BGIFCDEEENM_TypeDefinitionIndex = 45944;

struct alignas(8) BGIFCDEEENM
{
	::System::String* OENNEMIPHLG; // 0x10
	::System::String* NKMMHFBAAHP; // 0x18
	::System::String* HHNNOCEFLNP; // 0x20
	::System::String* GKFLPJLOMBN; // 0x28
	::System::Boolean IANHKOLCODN; // 0x30
	::System::Byte _padding0[0x7];
	::System::String* PFFBGNFLJDD; // 0x38

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGIFCDEEENM_TOSTRING_OFFSET))(this);
	}

	::System::String* PAOLDNPMFMN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGIFCDEEENM_PAOLDNPMFMN_OFFSET))(this);
	}

	::System::Void DAMMKDKDOCB(::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BGIFCDEEENM_DAMMKDKDOCB_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void ELCAJMMOKAO(::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BGIFCDEEENM_ELCAJMMOKAO_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGIFCDEEENM_DPIHOJBBGLA_OFFSET))(this);
	}

	::System::String* BMJMFLFNPAO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGIFCDEEENM_BMJMFLFNPAO_OFFSET))(this);
	}

	::System::String* NAADFALKCEI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGIFCDEEENM_NAADFALKCEI_OFFSET))(this);
	}

	::System::Void GAONAIMNAOF(::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BGIFCDEEENM_GAONAIMNAOF_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void LPOKAEADENJ(::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BGIFCDEEENM_LPOKAEADENJ_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* DPPHDDKOHAA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGIFCDEEENM_DPPHDDKOHAA_OFFSET))(this);
	}
};
