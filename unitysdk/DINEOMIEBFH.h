#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PDIFFNFEKKD.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"

class DINEOMIEBFH_DFNKBPEMDGP;
namespace UnityEngine { class AnimationCurve; }

#define DINEOMIEBFH_AMEKHHBHOEP_OFFSET UNITYSDK_OFFSET(0x19D650E0)
#define DINEOMIEBFH_GFFGAFCMFHD_OFFSET UNITYSDK_OFFSET(0x19D65050)
#define DINEOMIEBFH_JHMKILKMJFI_OFFSET UNITYSDK_OFFSET(0x19D64DA0)
#define DINEOMIEBFH_LDIGKKAPBOB_OFFSET UNITYSDK_OFFSET(0x19D64EC0)
#define DINEOMIEBFH_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x19D64FF0)
#define DINEOMIEBFH_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x19D64D30)
#define DINEOMIEBFH__CTOR_OFFSET UNITYSDK_OFFSET(0x19D65040)

inline static constexpr unsigned int DINEOMIEBFH_TypeDefinitionIndex = 90238;

class DINEOMIEBFH : public ::System::Object
{
public:
	::PDIFFNFEKKD HGEFMALPLHL; // 0x10
	::PDIFFNFEKKD KAJLDJKFKPC; // 0x18
	::DINEOMIEBFH_DFNKBPEMDGP* BEEMBEGEAGO; // 0x20
	::System::Single OJGBCNFJKMJ; // 0x28
	::System::Single HLJBMKCGIHO; // 0x2C
	::System::Single AANOJHKDHEK; // 0x30
	::System::Single EACCJCGCBOL; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DINEOMIEBFH__CTOR_OFFSET))(this);
	}

	::System::Void PLPONJAKNEB(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DINEOMIEBFH_PLPONJAKNEB_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Boolean JHMKILKMJFI(::UnityEngine::Vector4& HGENMIBAKDN)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + DINEOMIEBFH_JHMKILKMJFI_OFFSET))(this, HGENMIBAKDN);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DINEOMIEBFH_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::Void GFFGAFCMFHD(::UnityEngine::Vector2 AEFBPLEGCJJ)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + DINEOMIEBFH_GFFGAFCMFHD_OFFSET))(this, AEFBPLEGCJJ);
	}

	::UnityEngine::Vector4 LDIGKKAPBOB(::System::Single FPNIKHLFLDJ, ::System::Single ALANPFFDMAP)
	{
		return ((::UnityEngine::Vector4(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DINEOMIEBFH_LDIGKKAPBOB_OFFSET))(this, FPNIKHLFLDJ, ALANPFFDMAP);
	}

	::System::Void AMEKHHBHOEP(::System::Single EGFFHBOHDLF, ::UnityEngine::AnimationCurve* BMGGKAICHPL, ::System::Single CJHDDFFJKDI, ::UnityEngine::AnimationCurve* IKLIBOGBJHH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::AnimationCurve*, ::System::Single, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + DINEOMIEBFH_AMEKHHBHOEP_OFFSET))(this, EGFFHBOHDLF, BMGGKAICHPL, CJHDDFFJKDI, IKLIBOGBJHH);
	}
};
