#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define LFGBJHCEJID_ELBMBBEOCNA_OFFSET UNITYSDK_OFFSET(0x7B09E0)
#define LFGBJHCEJID_GIDLPKDLECH_OFFSET UNITYSDK_OFFSET(0x7FE440)
#define LFGBJHCEJID_GPCNGMJCMIE_OFFSET UNITYSDK_OFFSET(0x7FE530)
#define LFGBJHCEJID_ICHNIHFBEKC_OFFSET UNITYSDK_OFFSET(0x7FE0B0)
#define LFGBJHCEJID_LLJCLFDJAOM_OFFSET UNITYSDK_OFFSET(0x7FE660)
#define LFGBJHCEJID_OHFCMFEELGO_OFFSET UNITYSDK_OFFSET(0x7FE310)
#define LFGBJHCEJID_PFEFIHNCKMA_OFFSET UNITYSDK_OFFSET(0x7FE4C0)
#define LFGBJHCEJID_PNHJAIIDAEL_OFFSET UNITYSDK_OFFSET(0x7FE1E0)
#define LFGBJHCEJID__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A6058D0)
#define LFGBJHCEJID__CTOR_OFFSET UNITYSDK_OFFSET(0x362170)

inline static constexpr unsigned int LFGBJHCEJID_TypeDefinitionIndex = 73950;

struct alignas(4) LFGBJHCEJID
{
	static ::LFGBJHCEJID* StaticGet_CDLDFCAJEKI()
	{
		return (::LFGBJHCEJID*)Il2CppClass::FromTypeDefinitionIndex(LFGBJHCEJID_TypeDefinitionIndex)->GetStaticField(0xA520);
	}
	::UnityEngine::Vector3 OHOGDOMNHNK; // 0x10
	::UnityEngine::Quaternion BFBELMDIAHI; // 0x1C

	::System::Void _ctor(::UnityEngine::Vector3 CKPGOKHECCH, ::UnityEngine::Quaternion GJNLCLDFFIN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + LFGBJHCEJID__CTOR_OFFSET))(this, CKPGOKHECCH, GJNLCLDFFIN);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LFGBJHCEJID__CCTOR_OFFSET))();
	}

	::UnityEngine::Vector3 ICHNIHFBEKC()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + LFGBJHCEJID_ICHNIHFBEKC_OFFSET))(this);
	}

	::UnityEngine::Vector3 PNHJAIIDAEL()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + LFGBJHCEJID_PNHJAIIDAEL_OFFSET))(this);
	}

	::UnityEngine::Vector3 OHFCMFEELGO()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + LFGBJHCEJID_OHFCMFEELGO_OFFSET))(this);
	}

	::UnityEngine::Vector3 ELBMBBEOCNA()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + LFGBJHCEJID_ELBMBBEOCNA_OFFSET))(this);
	}

	::UnityEngine::Vector3 GIDLPKDLECH()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + LFGBJHCEJID_GIDLPKDLECH_OFFSET))(this);
	}

	::System::Single PFEFIHNCKMA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LFGBJHCEJID_PFEFIHNCKMA_OFFSET))(this);
	}

	::UnityEngine::Vector3 GPCNGMJCMIE()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + LFGBJHCEJID_GPCNGMJCMIE_OFFSET))(this);
	}

	::UnityEngine::Vector3 LLJCLFDJAOM()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + LFGBJHCEJID_LLJCLFDJAOM_OFFSET))(this);
	}
};
