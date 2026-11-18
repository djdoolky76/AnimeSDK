#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define NOHGGLFKBEH_AJEDNAAGNMK_OFFSET UNITYSDK_OFFSET(0x70CDD0)
#define NOHGGLFKBEH_EMDBJBOMLNF_OFFSET UNITYSDK_OFFSET(0x13773FE0)
#define NOHGGLFKBEH_JFKLHOBENDO_OFFSET UNITYSDK_OFFSET(0x70D0D0)
#define NOHGGLFKBEH_LCJHCNFBPGC_OFFSET UNITYSDK_OFFSET(0x70D1B0)
#define NOHGGLFKBEH_MJPDFEAPEDH_OFFSET UNITYSDK_OFFSET(0x70CED0)
#define NOHGGLFKBEH_NLMDGNLNLKD_OFFSET UNITYSDK_OFFSET(0x70D290)
#define NOHGGLFKBEH_OBPPOIIKOHA_OFFSET UNITYSDK_OFFSET(0x70CFF0)

inline static constexpr unsigned int NOHGGLFKBEH_TypeDefinitionIndex = 84116;

struct alignas(4) NOHGGLFKBEH
{
	::UnityEngine::Vector3 OCBADCBKADA; // 0x10
	::UnityEngine::Vector3 CBCCNODPNHD; // 0x1C
	::UnityEngine::Vector3 LLBMFBENOJH; // 0x28
	::UnityEngine::Vector3 DIKNDGOGEBM; // 0x34
	::UnityEngine::Vector3 IMPCOBPNCBC; // 0x40
	::UnityEngine::Vector3 FBHOHLLOIMJ; // 0x4C
	::UnityEngine::Vector3 CAHMBDHEMGL; // 0x58
	::System::Single IDHJACPONHG; // 0x64
	::System::Single LAJPIFPMMEE; // 0x68
	::System::Single NJGJPFNNGDL; // 0x6C
	::System::Single DJCOLFCNGIL; // 0x70
	::System::Single NNGKPOCIPKJ; // 0x74
	::UnityEngine::Vector3 OOEFHGNFCBE; // 0x78
	::UnityEngine::Vector3 LJNHIDDMEOH; // 0x84
	::UnityEngine::Vector3 GLFAPCJCGNK; // 0x90
	::System::Boolean JNHAFPNPMLN; // 0x9C
	::System::Boolean CBECDBDEBCA; // 0x9D

	::UnityEngine::Vector3 AJEDNAAGNMK()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHGGLFKBEH_AJEDNAAGNMK_OFFSET))(this);
	}

	/*
	::System::Void MJPDFEAPEDH(::NOHGGLFKBEH& HODAIDNDKHD)
	{
		return ((::System::Void(*)(::PVOID, ::NOHGGLFKBEH&))((::PBYTE)hIl2Cpp + NOHGGLFKBEH_MJPDFEAPEDH_OFFSET))(this, HODAIDNDKHD);
	}
	*/

	::UnityEngine::Vector3 OBPPOIIKOHA()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHGGLFKBEH_OBPPOIIKOHA_OFFSET))(this);
	}

	/*
	static ::System::Void EMDBJBOMLNF(::NOHGGLFKBEH& ELKGOHFIOEH, ::NOHGGLFKBEH& ABAKHDIFKKL, ::NOHGGLFKBEH& ECDFBPODEOB, ::System::Single EJAOAGGJHHA)
	{
		return ((::System::Void(*)(::NOHGGLFKBEH&, ::NOHGGLFKBEH&, ::NOHGGLFKBEH&, ::System::Single))((::PBYTE)hIl2Cpp + NOHGGLFKBEH_EMDBJBOMLNF_OFFSET))(ELKGOHFIOEH, ABAKHDIFKKL, ECDFBPODEOB, EJAOAGGJHHA);
	}
	*/

	::UnityEngine::Vector3 JFKLHOBENDO()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHGGLFKBEH_JFKLHOBENDO_OFFSET))(this);
	}

	::UnityEngine::Vector3 LCJHCNFBPGC()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHGGLFKBEH_LCJHCNFBPGC_OFFSET))(this);
	}

	::System::Void NLMDGNLNLKD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHGGLFKBEH_NLMDGNLNLKD_OFFSET))(this);
	}
};
