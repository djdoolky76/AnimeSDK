#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/Cameras/BangbooAdjustmentCameraOverriddenConfig.h"

#define MELBADOLJML_AKIFKGFPPEO_OFFSET UNITYSDK_OFFSET(0x1852E470)
#define MELBADOLJML_EAHJPGMMLHC_OFFSET UNITYSDK_OFFSET(0x1852E620)
#define MELBADOLJML_HEKFCDDELHM_OFFSET UNITYSDK_OFFSET(0x1852E530)
#define MELBADOLJML__CCTOR_OFFSET UNITYSDK_OFFSET(0x1852E430)
#define MELBADOLJML__CTOR_OFFSET UNITYSDK_OFFSET(0x1852E420)

inline static constexpr unsigned int MELBADOLJML_TypeDefinitionIndex = 90769;

class MELBADOLJML : public ::System::Object
{
public:
	static ::MELBADOLJML** StaticGet_NJLLMPCDOEB()
	{
		return (::MELBADOLJML**)Il2CppClass::FromTypeDefinitionIndex(MELBADOLJML_TypeDefinitionIndex)->GetStaticField(0x40910);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MELBADOLJML__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MELBADOLJML__CCTOR_OFFSET))();
	}

	::MoleMole::Cameras::BangbooAdjustmentCameraOverriddenConfig AKIFKGFPPEO(::MoleMole::Cameras::BangbooAdjustmentCameraOverriddenConfig KILPCOMOCMD, ::MoleMole::Cameras::BangbooAdjustmentCameraOverriddenConfig BBCODANAFGI)
	{
		return ((::MoleMole::Cameras::BangbooAdjustmentCameraOverriddenConfig(*)(::PVOID, ::MoleMole::Cameras::BangbooAdjustmentCameraOverriddenConfig, ::MoleMole::Cameras::BangbooAdjustmentCameraOverriddenConfig))((::PBYTE)hIl2Cpp + MELBADOLJML_AKIFKGFPPEO_OFFSET))(this, KILPCOMOCMD, BBCODANAFGI);
	}

	::MoleMole::Cameras::BangbooAdjustmentCameraOverriddenConfig HEKFCDDELHM(::MoleMole::Cameras::BangbooAdjustmentCameraOverriddenConfig EJCBEJMGFAJ, ::MoleMole::Cameras::BangbooAdjustmentCameraOverriddenConfig EBFCACIEKBC, ::System::Single KGHNBNOMMJI)
	{
		return ((::MoleMole::Cameras::BangbooAdjustmentCameraOverriddenConfig(*)(::PVOID, ::MoleMole::Cameras::BangbooAdjustmentCameraOverriddenConfig, ::MoleMole::Cameras::BangbooAdjustmentCameraOverriddenConfig, ::System::Single))((::PBYTE)hIl2Cpp + MELBADOLJML_HEKFCDDELHM_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC, KGHNBNOMMJI);
	}

	::MoleMole::Cameras::BangbooAdjustmentCameraOverriddenConfig EAHJPGMMLHC(::MoleMole::Cameras::BangbooAdjustmentCameraOverriddenConfig EGEGIMGMJHN)
	{
		return ((::MoleMole::Cameras::BangbooAdjustmentCameraOverriddenConfig(*)(::PVOID, ::MoleMole::Cameras::BangbooAdjustmentCameraOverriddenConfig))((::PBYTE)hIl2Cpp + MELBADOLJML_EAHJPGMMLHC_OFFSET))(this, EGEGIMGMJHN);
	}
};
