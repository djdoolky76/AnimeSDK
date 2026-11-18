#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KJIMMLJEGMI_KINPAELKGMF.h"
#include "unitysdk/PDIFFNFEKKD.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class AnimationCurve; }

#define KJIMMLJEGMI_AMEKHHBHOEP_OFFSET UNITYSDK_OFFSET(0x19959C90)
#define KJIMMLJEGMI_GFFGAFCMFHD_OFFSET UNITYSDK_OFFSET(0x19959C40)
#define KJIMMLJEGMI_JHMKILKMJFI_OFFSET UNITYSDK_OFFSET(0x19959980)
#define KJIMMLJEGMI_LDIGKKAPBOB_OFFSET UNITYSDK_OFFSET(0x19959AA0)
#define KJIMMLJEGMI_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x19959BE0)
#define KJIMMLJEGMI_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x19959910)
#define KJIMMLJEGMI__CTOR_OFFSET UNITYSDK_OFFSET(0x19959C30)

inline static constexpr unsigned int KJIMMLJEGMI_TypeDefinitionIndex = 86207;

class KJIMMLJEGMI : public ::System::Object
{
public:
	::PDIFFNFEKKD KAJLDJKFKPC; // 0x10
	::PDIFFNFEKKD HGEFMALPLHL; // 0x18
	::System::Single AANOJHKDHEK; // 0x20
	::KJIMMLJEGMI_KINPAELKGMF BEEMBEGEAGO; // 0x24
	::System::Single HLJBMKCGIHO; // 0x2C
	::System::Single EACCJCGCBOL; // 0x30
	::System::Single OJGBCNFJKMJ; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJIMMLJEGMI__CTOR_OFFSET))(this);
	}

	::System::Void PLPONJAKNEB(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KJIMMLJEGMI_PLPONJAKNEB_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Boolean JHMKILKMJFI(::UnityEngine::Vector4& HGENMIBAKDN)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + KJIMMLJEGMI_JHMKILKMJFI_OFFSET))(this, HGENMIBAKDN);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJIMMLJEGMI_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::Void GFFGAFCMFHD(::UnityEngine::Vector2 AEFBPLEGCJJ)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + KJIMMLJEGMI_GFFGAFCMFHD_OFFSET))(this, AEFBPLEGCJJ);
	}

	::System::Void AMEKHHBHOEP(::System::Single EGFFHBOHDLF, ::UnityEngine::AnimationCurve* BMGGKAICHPL, ::System::Single CJHDDFFJKDI, ::UnityEngine::AnimationCurve* IKLIBOGBJHH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::AnimationCurve*, ::System::Single, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + KJIMMLJEGMI_AMEKHHBHOEP_OFFSET))(this, EGFFHBOHDLF, BMGGKAICHPL, CJHDDFFJKDI, IKLIBOGBJHH);
	}

	::UnityEngine::Vector4 LDIGKKAPBOB(::System::Single FPNIKHLFLDJ, ::System::Single ALANPFFDMAP)
	{
		return ((::UnityEngine::Vector4(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + KJIMMLJEGMI_LDIGKKAPBOB_OFFSET))(this, FPNIKHLFLDJ, ALANPFFDMAP);
	}
};
