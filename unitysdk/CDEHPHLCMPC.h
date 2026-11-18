#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HHDPDELCDNI.h"
#include "unitysdk/MoleMole/Photo/AnimationTwoBoneIKFlag.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Foundation/Unreal/FTransform3D.h"
#include "unitysdk/JLJFLLKCPKE.h"
#include "unitysdk/NPCCrowd/Animation/FRefPose.h"
#include "unitysdk/UnityEngine/NapTransformData.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CDEHPHLCMPC_FLDPBKOAKCC_OFFSET UNITYSDK_OFFSET(0x67E9A0)
#define CDEHPHLCMPC_FOMDJIIMGGF_OFFSET UNITYSDK_OFFSET(0x67E9C0)
#define CDEHPHLCMPC_NFMIIKFINHC_1_OFFSET UNITYSDK_OFFSET(0x730E90)
#define CDEHPHLCMPC_NFMIIKFINHC_OFFSET UNITYSDK_OFFSET(0x730DE0)
#define CDEHPHLCMPC_NHAPDHMJLNP_OFFSET UNITYSDK_OFFSET(0x67E9B0)
#define CDEHPHLCMPC__CTOR_OFFSET UNITYSDK_OFFSET(0x730DB0)

inline static constexpr unsigned int CDEHPHLCMPC_TypeDefinitionIndex = 68044;

struct alignas(4) CDEHPHLCMPC
{
	// static const ::System::Int32 ENFNFJNEKGB = 0x0; // 0x0
	// static const ::System::Int32 MGKEAMHADHP = 0x1; // 0x0
	// static const ::System::Int32 NPIGNHPELJF = 0x2; // 0x0
	::HHDPDELCDNI MLCADKHFHLO; // 0x10
	::HHDPDELCDNI BELGPEFMHEP; // 0x14
	::HHDPDELCDNI HDLAGIDHCAB; // 0x18
	::System::Single AGEONIMEMJH; // 0x1C
	::System::Single PFPCFMPLBBF; // 0x20
	::MoleMole::Photo::AnimationTwoBoneIKFlag HNPDIHMOHML; // 0x24

	::System::Void _ctor(::HHDPDELCDNI JLMPGGEPOCH, ::HHDPDELCDNI DHOCCGCBEJA, ::HHDPDELCDNI EPGBFHNDFKA, ::System::Single LMCKAPHANAL, ::System::Single KAAPHGECNPJ, ::MoleMole::Photo::AnimationTwoBoneIKFlag NFOLAPIBKGG)
	{
		return ((::System::Void(*)(::PVOID, ::HHDPDELCDNI, ::HHDPDELCDNI, ::HHDPDELCDNI, ::System::Single, ::System::Single, ::MoleMole::Photo::AnimationTwoBoneIKFlag))((::PBYTE)hIl2Cpp + CDEHPHLCMPC__CTOR_OFFSET))(this, JLMPGGEPOCH, DHOCCGCBEJA, EPGBFHNDFKA, LMCKAPHANAL, KAAPHGECNPJ, NFOLAPIBKGG);
	}

	::System::Void NFMIIKFINHC(::NPCCrowd::Animation::FRefPose MOEKEKKJGBB, ::UnityEngine::NapTransformData GLPJKLMANGP, ::UnityEngine::Vector3 AEBAABHINNE, ::System::Single IECOJPMPJMP)
	{
		return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::FRefPose, ::UnityEngine::NapTransformData, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CDEHPHLCMPC_NFMIIKFINHC_OFFSET))(this, MOEKEKKJGBB, GLPJKLMANGP, AEBAABHINNE, IECOJPMPJMP);
	}

	::System::Boolean FOMDJIIMGGF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CDEHPHLCMPC_FOMDJIIMGGF_OFFSET))(this);
	}

	::System::Boolean FLDPBKOAKCC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CDEHPHLCMPC_FLDPBKOAKCC_OFFSET))(this);
	}

	::System::Void NFMIIKFINHC_1(::JLJFLLKCPKE& MOEKEKKJGBB, ::Foundation::Unreal::FTransform3D GLPJKLMANGP, ::UnityEngine::Vector3 AEBAABHINNE, ::System::Single IECOJPMPJMP)
	{
		return ((::System::Void(*)(::PVOID, ::JLJFLLKCPKE&, ::Foundation::Unreal::FTransform3D, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CDEHPHLCMPC_NFMIIKFINHC_1_OFFSET))(this, MOEKEKKJGBB, GLPJKLMANGP, AEBAABHINNE, IECOJPMPJMP);
	}

	::System::Boolean NHAPDHMJLNP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CDEHPHLCMPC_NHAPDHMJLNP_OFFSET))(this);
	}
};
