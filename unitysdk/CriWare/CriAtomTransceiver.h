#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriMonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class A11D485ED95AEADB;
namespace CriWare { class CriAtomRegion; }
namespace CriWare { class CriAtomTransceiver_E1AB3194688E1187; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define CRIWARE_CRIATOMTRANSCEIVER_A76D76DF9CBE75B8_OFFSET UNITYSDK_OFFSET(0x2ABE5B0)
#define CRIWARE_CRIATOMTRANSCEIVER_AB36E0EE549986E5_OFFSET UNITYSDK_OFFSET(0x2ABA4F0)
#define CRIWARE_CRIATOMTRANSCEIVER_ABE2869655182215_OFFSET UNITYSDK_OFFSET(0x2ABEAD0)
#define CRIWARE_CRIATOMTRANSCEIVER_ACC5947B2422C317_OFFSET UNITYSDK_OFFSET(0x23C0680)
#define CRIWARE_CRIATOMTRANSCEIVER_AF681D04F0E4B6CC_OFFSET UNITYSDK_OFFSET(0x2ABE630)
#define CRIWARE_CRIATOMTRANSCEIVER_B1B9BA38E0D9AB73_OFFSET UNITYSDK_OFFSET(0x2ABE6C0)
#define CRIWARE_CRIATOMTRANSCEIVER_B5B4F68A9D0C6F29_OFFSET UNITYSDK_OFFSET(0x2ABE5A0)
#define CRIWARE_CRIATOMTRANSCEIVER_BC473BF39230D688_OFFSET UNITYSDK_OFFSET(0x1BF9BA0)
#define CRIWARE_CRIATOMTRANSCEIVER_BC7E0A7E7CB67BA2_OFFSET UNITYSDK_OFFSET(0x165A3F0)
#define CRIWARE_CRIATOMTRANSCEIVER_BE987AAADBC280AF_OFFSET UNITYSDK_OFFSET(0x165A450)
#define CRIWARE_CRIATOMTRANSCEIVER_BF13C91AD80643D2_OFFSET UNITYSDK_OFFSET(0x2ABE750)
#define CRIWARE_CRIATOMTRANSCEIVER_E192657B25556063_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define CRIWARE_CRIATOMTRANSCEIVER_E6B621A0B8810AED_OFFSET UNITYSDK_OFFSET(0x17F0F50)
#define CRIWARE_CRIATOMTRANSCEIVER_E80CBFFB7BD372A1_OFFSET UNITYSDK_OFFSET(0x2ABE840)
#define CRIWARE_CRIATOMTRANSCEIVER_ED2328B6FC3E9195_OFFSET UNITYSDK_OFFSET(0x17395E0)
#define CRIWARE_CRIATOMTRANSCEIVER_F179AB999EFA4707_OFFSET UNITYSDK_OFFSET(0x165A3C0)
#define CRIWARE_CRIATOMTRANSCEIVER_F328E4D8818B1E12_OFFSET UNITYSDK_OFFSET(0x2ABE7D0)
#define CRIWARE_CRIATOMTRANSCEIVER_F5C863EFF0B3C777_OFFSET UNITYSDK_OFFSET(0x2ABDCC0)
#define CRIWARE_CRIATOMTRANSCEIVER_FA6AE9B7D0E352D5_OFFSET UNITYSDK_OFFSET(0x165A470)
#define CRIWARE_CRIATOMTRANSCEIVER_FDBCDBBFE02CD51A_OFFSET UNITYSDK_OFFSET(0x2AB9740)
#define CRIWARE_CRIATOMTRANSCEIVER_FF7121296C8CF5B1_OFFSET UNITYSDK_OFFSET(0x2ABE050)
#define CRIWARE_CRIATOMTRANSCEIVER_FF776CAFDA96BF72_OFFSET UNITYSDK_OFFSET(0x23C0660)
#define CRIWARE_CRIATOMTRANSCEIVER__CTOR_OFFSET UNITYSDK_OFFSET(0x2ABE960)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomTransceiver_TypeDefinitionIndex = 19179;

	class CriAtomTransceiver : public ::CriWare::CriMonoBehaviour
	{
	public:
		::A11D485ED95AEADB* B5896A29CD6B7556; // 0x30
		::UnityEngine::Vector3 FF5630FEECE48B10; // 0x38
		::UnityEngine::Vector3 BF00C4317E94E09E; // 0x44
		::UnityEngine::Vector3 A8E0C10B657913D6; // 0x50
		::System::Byte _padding0[0x4];
		::CriWare::CriAtomRegion* regionOnStart; // 0x60
		::System::Boolean useDedicatedInput; // 0x68
		::System::Byte _padding1[0x7];
		::UnityEngine::GameObject* dedicatedInput; // 0x70
		::System::Single outputVolume; // 0x78
		::System::Single directAudioRadius; // 0x7C
		::System::Single crossFadeDistance; // 0x80
		::System::Single coneInsideAngle; // 0x84
		::System::Single coneOutsideAngle; // 0x88
		::System::Single coneOutsideVolume; // 0x8C
		::System::Single transceiverRadius; // 0x90
		::System::Single interiorDistance; // 0x94
		::System::Single minAttenuation; // 0x98
		::System::Single maxAttenuation; // 0x9C
		::System::String* globalAisacName; // 0xA0
		::System::Single maxAngleAisacDelta; // 0xA8
		::System::Byte _padding2[0x4];
		::System::String* distanceAisacControlId; // 0xB0
		::System::String* listenerAzimuthAisacControlId; // 0xB8
		::System::String* listenerElevationAisacControlId; // 0xC0
		::System::String* outputAzimuthAisacControlId; // 0xC8
		::System::String* outputElevationAisacControlId; // 0xD0
		::System::Boolean inspectorAisacSettingFoldout; // 0xD8
		::System::Boolean F53B44033722952F; // 0xD9
		::System::Boolean BE6431EE8D82F0BA; // 0xDA
		::System::Byte _padding3[0x5];
		::CriWare::CriAtomRegion* E0E5BD0A71029AAC; // 0xE0

		::System::Void B1B9BA38E0D9AB73()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMTRANSCEIVER_B1B9BA38E0D9AB73_OFFSET))(this);
		}

		::System::Void BC473BF39230D688(::A11D485ED95AEADB* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::A11D485ED95AEADB*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMTRANSCEIVER_BC473BF39230D688_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void E80CBFFB7BD372A1(::System::String* AFDFCB998701D4BA, ::CriWare::CriAtomTransceiver_E1AB3194688E1187* E04D2BE64FCE9814)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::CriWare::CriAtomTransceiver_E1AB3194688E1187*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMTRANSCEIVER_E80CBFFB7BD372A1_OFFSET))(this, AFDFCB998701D4BA, E04D2BE64FCE9814);
		}

		::System::Void FDBCDBBFE02CD51A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMTRANSCEIVER_FDBCDBBFE02CD51A_OFFSET))(this);
		}

		::System::Void FF7121296C8CF5B1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMTRANSCEIVER_FF7121296C8CF5B1_OFFSET))(this);
		}

		::UnityEngine::Vector3 FF776CAFDA96BF72()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMTRANSCEIVER_FF776CAFDA96BF72_OFFSET))(this);
		}

		::UnityEngine::Vector3 BC7E0A7E7CB67BA2()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMTRANSCEIVER_BC7E0A7E7CB67BA2_OFFSET))(this);
		}

		::System::Void BF13C91AD80643D2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMTRANSCEIVER_BF13C91AD80643D2_OFFSET))(this);
		}

		::UnityEngine::Vector3 F179AB999EFA4707()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMTRANSCEIVER_F179AB999EFA4707_OFFSET))(this);
		}

		::System::Void FA6AE9B7D0E352D5(::UnityEngine::Vector3 E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMTRANSCEIVER_FA6AE9B7D0E352D5_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void A76D76DF9CBE75B8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMTRANSCEIVER_A76D76DF9CBE75B8_OFFSET))(this);
		}

		::System::Void F5C863EFF0B3C777()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMTRANSCEIVER_F5C863EFF0B3C777_OFFSET))(this);
		}

		::System::Void E192657B25556063()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMTRANSCEIVER_E192657B25556063_OFFSET))(this);
		}

		::A11D485ED95AEADB* ED2328B6FC3E9195()
		{
			return ((::A11D485ED95AEADB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMTRANSCEIVER_ED2328B6FC3E9195_OFFSET))(this);
		}

		::System::Void ACC5947B2422C317(::UnityEngine::Vector3 E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMTRANSCEIVER_ACC5947B2422C317_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMTRANSCEIVER__CTOR_OFFSET))(this);
		}

		::System::Void AB36E0EE549986E5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMTRANSCEIVER_AB36E0EE549986E5_OFFSET))(this);
		}

		::System::Void AF681D04F0E4B6CC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMTRANSCEIVER_AF681D04F0E4B6CC_OFFSET))(this);
		}

		::System::Void B5B4F68A9D0C6F29()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMTRANSCEIVER_B5B4F68A9D0C6F29_OFFSET))(this);
		}

		::System::Void F328E4D8818B1E12()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMTRANSCEIVER_F328E4D8818B1E12_OFFSET))(this);
		}

		::System::Void BE987AAADBC280AF(::UnityEngine::Vector3 E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMTRANSCEIVER_BE987AAADBC280AF_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void ABE2869655182215(::CriWare::CriAtomRegion* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriAtomRegion*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMTRANSCEIVER_ABE2869655182215_OFFSET))(this, E937D4885DAA1AE8);
		}

		::CriWare::CriAtomRegion* E6B621A0B8810AED()
		{
			return ((::CriWare::CriAtomRegion*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMTRANSCEIVER_E6B621A0B8810AED_OFFSET))(this);
		}
	};
}
