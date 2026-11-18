#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JMFPIKMGIFG.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define GAGNEILNOKP_FCCINGJHEJK_OFFSET UNITYSDK_OFFSET(0x11C887B0)
#define GAGNEILNOKP_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x11C885F0)
#define GAGNEILNOKP_FNPLIFNDGHJ_OFFSET UNITYSDK_OFFSET(0x11C887A0)
#define GAGNEILNOKP_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x11C88940)
#define GAGNEILNOKP_GDFNAFAAHNN_OFFSET UNITYSDK_OFFSET(0x11C887D0)
#define GAGNEILNOKP_OPOOCFBKBFA_OFFSET UNITYSDK_OFFSET(0x11C887C0)
#define GAGNEILNOKP__CTOR_OFFSET UNITYSDK_OFFSET(0x11C887E0)

inline static constexpr unsigned int GAGNEILNOKP_TypeDefinitionIndex = 55456;

class GAGNEILNOKP : public ::JMFPIKMGIFG
{
public:
	::AAMKEDEDHPD_1<::UnityEngine::Vector3>* OLLFNNGJCFN; // 0x18
	::AAMKEDEDHPD_1<::System::Single>* BDEJMKEEIBL; // 0x20
	::KCMIFNGABDC_1<::System::String*>* HFKLMCDMDOH; // 0x28
	::AAMKEDEDHPD_1<::System::Int32>* HBDAMPKJIME; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAGNEILNOKP__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAGNEILNOKP_FEDNEKFMGNF_OFFSET))(this);
	}

	::KCMIFNGABDC_1<::System::String*>* FNPLIFNDGHJ()
	{
		return ((::KCMIFNGABDC_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAGNEILNOKP_FNPLIFNDGHJ_OFFSET))(this);
	}

	::AAMKEDEDHPD_1<::UnityEngine::Vector3>* FCCINGJHEJK()
	{
		return ((::AAMKEDEDHPD_1<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAGNEILNOKP_FCCINGJHEJK_OFFSET))(this);
	}

	::AAMKEDEDHPD_1<::System::Single>* OPOOCFBKBFA()
	{
		return ((::AAMKEDEDHPD_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAGNEILNOKP_OPOOCFBKBFA_OFFSET))(this);
	}

	::AAMKEDEDHPD_1<::System::Int32>* GDFNAFAAHNN()
	{
		return ((::AAMKEDEDHPD_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAGNEILNOKP_GDFNAFAAHNN_OFFSET))(this);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAGNEILNOKP_GDEOPIBNOIN_OFFSET))(this);
	}
};
