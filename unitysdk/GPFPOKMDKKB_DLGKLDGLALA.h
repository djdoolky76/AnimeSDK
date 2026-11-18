#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define GPFPOKMDKKB_DLGKLDGLALA_DPEOMDPHFFF_OFFSET UNITYSDK_OFFSET(0x17A2D0A0)
#define GPFPOKMDKKB_DLGKLDGLALA_GEGJDOEJIOA_OFFSET UNITYSDK_OFFSET(0x17A2D220)
#define GPFPOKMDKKB_DLGKLDGLALA_GLABNAIPBNI_OFFSET UNITYSDK_OFFSET(0x17A2D550)
#define GPFPOKMDKKB_DLGKLDGLALA_KAANHGMOBGJ_OFFSET UNITYSDK_OFFSET(0x17A2D820)
#define GPFPOKMDKKB_DLGKLDGLALA_LLIDJKAELAK_OFFSET UNITYSDK_OFFSET(0x17A2D690)
#define GPFPOKMDKKB_DLGKLDGLALA_NKFALFFPMJL_OFFSET UNITYSDK_OFFSET(0x17A2D390)
#define GPFPOKMDKKB_DLGKLDGLALA_OOOEMCGFAGF_OFFSET UNITYSDK_OFFSET(0x17A2CF10)
#define GPFPOKMDKKB_DLGKLDGLALA__CTOR_OFFSET UNITYSDK_OFFSET(0x17A2CF00)

inline static constexpr unsigned int GPFPOKMDKKB_DLGKLDGLALA_TypeDefinitionIndex = 91606;

class GPFPOKMDKKB_DLGKLDGLALA : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* IGJAGLKPKBK; // 0x10
	::System::Single CIIGPGPGKBC; // 0x18
	::System::Single LMCMGLGCLJA; // 0x1C
	::System::Boolean CCEEDKILGDH; // 0x20
	::System::Boolean JJOHKOEKBBC; // 0x21
	::System::Byte _padding0[0x2];
	::System::Single PEMFDMJPKFK; // 0x24
	::System::Single BBNHJNEAJDK; // 0x28
	::System::Single FPMCGJMIKFG; // 0x2C
	::UnityEngine::Vector3 HBNPCBMMLCF; // 0x30
	::UnityEngine::Vector3 LPMDPLIOIBC; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPFPOKMDKKB_DLGKLDGLALA__CTOR_OFFSET))(this);
	}

	::System::Void OOOEMCGFAGF(::System::Single BDEDDEGJFKL, ::System::Single HBBDABAIFGC, ::System::Single IBMEJCCOPNN, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + GPFPOKMDKKB_DLGKLDGLALA_OOOEMCGFAGF_OFFSET))(this, BDEDDEGJFKL, HBBDABAIFGC, IBMEJCCOPNN, PMNLNNGEIFM);
	}

	::System::Void DPEOMDPHFFF(::System::Single HBBDABAIFGC, ::System::Single LMBCIHPGANO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + GPFPOKMDKKB_DLGKLDGLALA_DPEOMDPHFFF_OFFSET))(this, HBBDABAIFGC, LMBCIHPGANO);
	}

	::System::Void GEGJDOEJIOA(::System::Boolean PPLPBEBOEKJ, ::System::Single HBBDABAIFGC, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + GPFPOKMDKKB_DLGKLDGLALA_GEGJDOEJIOA_OFFSET))(this, PPLPBEBOEKJ, HBBDABAIFGC, PMNLNNGEIFM);
	}

	::System::Single NKFALFFPMJL(::System::Single BDEDDEGJFKL, ::System::Single HBBDABAIFGC, ::System::Single IBMEJCCOPNN, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + GPFPOKMDKKB_DLGKLDGLALA_NKFALFFPMJL_OFFSET))(this, BDEDDEGJFKL, HBBDABAIFGC, IBMEJCCOPNN, PMNLNNGEIFM);
	}

	::System::Void GLABNAIPBNI(::System::Single HBBDABAIFGC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GPFPOKMDKKB_DLGKLDGLALA_GLABNAIPBNI_OFFSET))(this, HBBDABAIFGC);
	}

	::System::Boolean LLIDJKAELAK(::System::Boolean PPLPBEBOEKJ, ::System::Single HBBDABAIFGC)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + GPFPOKMDKKB_DLGKLDGLALA_LLIDJKAELAK_OFFSET))(this, PPLPBEBOEKJ, HBBDABAIFGC);
	}

	::System::Void KAANHGMOBGJ(::UnityEngine::Vector3 JNDDJMAHNAI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GPFPOKMDKKB_DLGKLDGLALA_KAANHGMOBGJ_OFFSET))(this, JNDDJMAHNAI);
	}
};
