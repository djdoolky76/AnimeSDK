#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
namespace RPG::Client { class MonoTVScreenLod; }
namespace RPG::Client { class VideoTexture; }
namespace System { class String; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class MonoBehaviour; }
namespace UnityEngine { class Renderer; }

#define NGPNLKHIIMN_CTOR_OFFSET UNITYSDK_OFFSET(0x148871D0)
#define NGPNLKHIIMN_HBOHKIPCHHE_OFFSET UNITYSDK_OFFSET(0x14887060)
#define NGPNLKHIIMN_HPNDIIPEFLJ_OFFSET UNITYSDK_OFFSET(0x14887160)
#define NGPNLKHIIMN_JDAGFHEPMHF_OFFSET UNITYSDK_OFFSET(0x14885E30)
#define NGPNLKHIIMN_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x14885980)
#define NGPNLKHIIMN_LOPLOLMCIIN_OFFSET UNITYSDK_OFFSET(0x14885A30)
#define NGPNLKHIIMN_MJJGDLJOJDE_OFFSET UNITYSDK_OFFSET(0x148870F0)
#define NGPNLKHIIMN_OLMCEKIKCKJ_OFFSET UNITYSDK_OFFSET(0x14885E80)
#define NGPNLKHIIMN_PICDOIMIDKM_OFFSET UNITYSDK_OFFSET(0x14885DE0)

inline static constexpr unsigned int NGPNLKHIIMN_TypeDefinitionIndex = 72346;

	class NGPNLKHIIMN : public ::RPG::Client::BehaviorBase
	{
	public:
		::System::String* MIFHCMJGIHO; // 0x18
		::UnityEngine::MaterialPropertyBlock* ONMIFIOAENE; // 0x20
		::UnityEngine::Renderer* DJFIHMBKFLC; // 0x28
		::System::String* IDKHILEIKBD; // 0x30
		::RPG::Client::VideoTexture* EPINKOCFFKN; // 0x38
		::System::Single BJMAMHMCOEL; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGPNLKHIIMN_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::UnityEngine::MonoBehaviour* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + NGPNLKHIIMN_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void PICDOIMIDKM(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NGPNLKHIIMN_PICDOIMIDKM_OFFSET))(this, a1);
		}

		::System::Void JDAGFHEPMHF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGPNLKHIIMN_JDAGFHEPMHF_OFFSET))(this);
		}

		::System::Void HBOHKIPCHHE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGPNLKHIIMN_HBOHKIPCHHE_OFFSET))(this);
		}

		::System::Void LOPLOLMCIIN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NGPNLKHIIMN_LOPLOLMCIIN_OFFSET))(this, a1);
		}

		::System::Void MJJGDLJOJDE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGPNLKHIIMN_MJJGDLJOJDE_OFFSET))(this);
		}

		::System::Void OLMCEKIKCKJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGPNLKHIIMN_OLMCEKIKCKJ_OFFSET))(this);
		}

		::RPG::Client::MonoTVScreenLod* HPNDIIPEFLJ()
		{
			return ((::RPG::Client::MonoTVScreenLod*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGPNLKHIIMN_HPNDIIPEFLJ_OFFSET))(this);
		}

	};
