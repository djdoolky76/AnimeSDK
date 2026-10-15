#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
#include "unitysdk/RPG/Client/MonoEmoAnimMouthShapeLayerController_AnimMouthShapeParams.h"
#include "unitysdk/RPGTools/Timeline/Emotion/EmoMouthBakedBlendShapes_LipType.h"
namespace RPG::Client { class MonoEmoAnimMouthShapeLayerController; }
namespace RPGTools::Timeline::Emotion { class EmoMouthBakedBlendShapesData; }
namespace System { class String; }
namespace UnityEngine { class MonoBehaviour; }

#define MHDENEBAEMI_ABPDGJOBLCB_OFFSET UNITYSDK_OFFSET(0xB92CF30)
#define MHDENEBAEMI_BPFMDOFPFAL_OFFSET UNITYSDK_OFFSET(0xB92C950)
#define MHDENEBAEMI_CIAMBFAKPGH_OFFSET UNITYSDK_OFFSET(0xB92C730)
#define MHDENEBAEMI_CTOR_OFFSET UNITYSDK_OFFSET(0xB92D730)
#define MHDENEBAEMI_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB92C810)
#define MHDENEBAEMI_EGNMELNENAC_OFFSET UNITYSDK_OFFSET(0xB92C9C0)
#define MHDENEBAEMI_FCAJBLDIJDH_OFFSET UNITYSDK_OFFSET(0xB92CCF0)
#define MHDENEBAEMI_HFKFNFKIEON_OFFSET UNITYSDK_OFFSET(0xB92C8E0)
#define MHDENEBAEMI_HPNDIIPEFLJ_OFFSET UNITYSDK_OFFSET(0xB92C6D0)
#define MHDENEBAEMI_JDAGFHEPMHF_OFFSET UNITYSDK_OFFSET(0xB92CC20)
#define MHDENEBAEMI_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xB92CD50)
#define MHDENEBAEMI_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB92C740)
#define MHDENEBAEMI_NLMMCJKJMEK_OFFSET UNITYSDK_OFFSET(0xB92C720)
#define MHDENEBAEMI_OCKFCJDBOEI_OFFSET UNITYSDK_OFFSET(0xB92D590)

inline static constexpr unsigned int MHDENEBAEMI_TypeDefinitionIndex = 71143;

	class MHDENEBAEMI : public ::RPG::Client::BehaviorBase
	{
	public:
		::System::String* GPMCKOJDADG; // 0x18
		::RPGTools::Timeline::Emotion::EmoMouthBakedBlendShapesData* AMMBPPIHFBM; // 0x20
		::System::Single AKGLAFOODBA; // 0x28
		::System::Boolean GMOBMDCCOOF; // 0x2C
		::System::Boolean OFEPHLEKKCD; // 0x2D
		::System::Byte _padding0[0x2];
		::RPG::Client::MonoEmoAnimMouthShapeLayerController_AnimMouthShapeParams GKEODJGEDMB; // 0x30
		::System::Single HFJJFMBPDFD; // 0x40
		::System::Single DDPJNLAFNAN; // 0x44
		::System::Single GHHNHNKAIBK; // 0x48
		::System::Single FDICGAEIANB; // 0x4C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHDENEBAEMI_CTOR_OFFSET))(this);
		}

		::RPG::Client::MonoEmoAnimMouthShapeLayerController* HPNDIIPEFLJ()
		{
			return ((::RPG::Client::MonoEmoAnimMouthShapeLayerController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHDENEBAEMI_HPNDIIPEFLJ_OFFSET))(this);
		}

		::System::Single NLMMCJKJMEK()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MHDENEBAEMI_NLMMCJKJMEK_OFFSET))(this);
		}

		::RPG::Client::MonoEmoAnimMouthShapeLayerController_AnimMouthShapeParams CIAMBFAKPGH()
		{
			return ((::RPG::Client::MonoEmoAnimMouthShapeLayerController_AnimMouthShapeParams(*)(::PVOID))((::PBYTE)hIl2Cpp + MHDENEBAEMI_CIAMBFAKPGH_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::UnityEngine::MonoBehaviour* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + MHDENEBAEMI_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHDENEBAEMI_DISPOSE_OFFSET))(this);
		}

		::System::Void BPFMDOFPFAL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHDENEBAEMI_BPFMDOFPFAL_OFFSET))(this);
		}

		::System::Void JDAGFHEPMHF(::System::UInt32 a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MHDENEBAEMI_JDAGFHEPMHF_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EGNMELNENAC(::System::String* a1, ::System::Boolean a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MHDENEBAEMI_EGNMELNENAC_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void HFKFNFKIEON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHDENEBAEMI_HFKFNFKIEON_OFFSET))(this);
		}

		::System::Void FCAJBLDIJDH(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MHDENEBAEMI_FCAJBLDIJDH_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MHDENEBAEMI_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::RPG::Client::MonoEmoAnimMouthShapeLayerController_AnimMouthShapeParams OCKFCJDBOEI(::RPGTools::Timeline::Emotion::EmoMouthBakedBlendShapes_LipType a1)
		{
			return ((::RPG::Client::MonoEmoAnimMouthShapeLayerController_AnimMouthShapeParams(*)(::PVOID, ::RPGTools::Timeline::Emotion::EmoMouthBakedBlendShapes_LipType))((::PBYTE)hIl2Cpp + MHDENEBAEMI_OCKFCJDBOEI_OFFSET))(this, a1);
		}

		::RPG::Client::MonoEmoAnimMouthShapeLayerController_AnimMouthShapeParams ABPDGJOBLCB()
		{
			return ((::RPG::Client::MonoEmoAnimMouthShapeLayerController_AnimMouthShapeParams(*)(::PVOID))((::PBYTE)hIl2Cpp + MHDENEBAEMI_ABPDGJOBLCB_OFFSET))(this);
		}

	};
