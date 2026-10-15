#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
namespace RPG::Client { class MonoTVScreenLod; }
namespace RPG::Client { class VideoTexture; }
namespace System { class String; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class MonoBehaviour; }
namespace UnityEngine { class Renderer; }

#define NGPNLKHIIMN_CTOR_OFFSET UNITYSDK_OFFSET(0xBBB5140)
#define NGPNLKHIIMN_HBOHKIPCHHE_OFFSET UNITYSDK_OFFSET(0xBBB4FD0)
#define NGPNLKHIIMN_HPNDIIPEFLJ_OFFSET UNITYSDK_OFFSET(0xBBB50D0)
#define NGPNLKHIIMN_JDAGFHEPMHF_OFFSET UNITYSDK_OFFSET(0xBBB3DA0)
#define NGPNLKHIIMN_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xBBB38F0)
#define NGPNLKHIIMN_LOPLOLMCIIN_OFFSET UNITYSDK_OFFSET(0xBBB39A0)
#define NGPNLKHIIMN_MJJGDLJOJDE_OFFSET UNITYSDK_OFFSET(0xBBB5060)
#define NGPNLKHIIMN_OLMCEKIKCKJ_OFFSET UNITYSDK_OFFSET(0xBBB3DF0)
#define NGPNLKHIIMN_PICDOIMIDKM_OFFSET UNITYSDK_OFFSET(0xBBB3D50)

inline static constexpr unsigned int NGPNLKHIIMN_TypeDefinitionIndex = 70379;

	class NGPNLKHIIMN : public ::RPG::Client::BehaviorBase
	{
	public:
		::UnityEngine::Renderer* DJFIHMBKFLC; // 0x18
		::System::String* IDKHILEIKBD; // 0x20
		::RPG::Client::VideoTexture* EPINKOCFFKN; // 0x28
		::UnityEngine::MaterialPropertyBlock* ONMIFIOAENE; // 0x30
		::System::String* MIFHCMJGIHO; // 0x38
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
