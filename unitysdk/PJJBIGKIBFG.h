#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
#include "unitysdk/UnityEngine/Vector4.h"
namespace RPG::Client { class MonoTVScreenControl; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class MonoBehaviour; }
namespace UnityEngine { class Texture2D; }

#define PJJBIGKIBFG_AGFDNGHDMPD_OFFSET UNITYSDK_OFFSET(0xC28C780)
#define PJJBIGKIBFG_CAIIHALHAIJ_OFFSET UNITYSDK_OFFSET(0xC28CE50)
#define PJJBIGKIBFG_CTOR_OFFSET UNITYSDK_OFFSET(0xC28D600)
#define PJJBIGKIBFG_DFHKHNLEDJO_OFFSET UNITYSDK_OFFSET(0xC28D420)
#define PJJBIGKIBFG_FIFKNIPECKH_OFFSET UNITYSDK_OFFSET(0xC28C690)
#define PJJBIGKIBFG_FPAEPLAHJFB_OFFSET UNITYSDK_OFFSET(0xC28CC30)
#define PJJBIGKIBFG_HBOHKIPCHHE_OFFSET UNITYSDK_OFFSET(0xC28C8E0)
#define PJJBIGKIBFG_HPNDIIPEFLJ_OFFSET UNITYSDK_OFFSET(0xC28C730)
#define PJJBIGKIBFG_JIOJNMENIHB_OFFSET UNITYSDK_OFFSET(0xC28CD10)
#define PJJBIGKIBFG_JNHCCJHONGF_OFFSET UNITYSDK_OFFSET(0xC28C890)
#define PJJBIGKIBFG_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xC28C550)
#define PJJBIGKIBFG_LJFAJLGPHIN_OFFSET UNITYSDK_OFFSET(0xC28D1C0)
#define PJJBIGKIBFG_NNFHLGGECOM_OFFSET UNITYSDK_OFFSET(0xC28C930)

	class PJJBIGKIBFG : public ::RPG::Client::BehaviorBase
	{
	public:
		::UnityEngine::MaterialPropertyBlock* HANCJDMEJNC; // 0x18
		::UnityEngine::Texture2D* FIDGAPLMHCC; // 0x20
		::UnityEngine::Texture2D* HEMKGCFGKEA; // 0x28
		::UnityEngine::Vector4 HFGMNNFHGKM; // 0x30
		::System::Single FGFAKKLGAPD; // 0x40
		::UnityEngine::Vector4 LIBCLFJCFDE; // 0x44
		::System::Single NIAEDAJCFHF; // 0x54
		::UnityEngine::Vector4 LBMLBGNIOMN; // 0x58
		::System::Single COCJDAKNIAP; // 0x68
		::UnityEngine::Vector4 BLFCKILHANH; // 0x6C
		::System::Single FLCNOHJMGLG; // 0x7C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJJBIGKIBFG_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::UnityEngine::MonoBehaviour* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + PJJBIGKIBFG_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void AGFDNGHDMPD(::UnityEngine::Texture2D* a1, ::UnityEngine::Texture2D* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*, ::UnityEngine::Texture2D*, ::System::Single))((::PBYTE)hIl2Cpp + PJJBIGKIBFG_AGFDNGHDMPD_OFFSET))(this, a1, a2, a3);
		}

		::System::Void JNHCCJHONGF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJJBIGKIBFG_JNHCCJHONGF_OFFSET))(this);
		}

		::System::Void HBOHKIPCHHE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJJBIGKIBFG_HBOHKIPCHHE_OFFSET))(this);
		}

		::System::Void NNFHLGGECOM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJJBIGKIBFG_NNFHLGGECOM_OFFSET))(this);
		}

		::System::Void FIFKNIPECKH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJJBIGKIBFG_FIFKNIPECKH_OFFSET))(this);
		}

		::System::Void CAIIHALHAIJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJJBIGKIBFG_CAIIHALHAIJ_OFFSET))(this);
		}

		::System::Void FPAEPLAHJFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJJBIGKIBFG_FPAEPLAHJFB_OFFSET))(this);
		}

		::System::Void JIOJNMENIHB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJJBIGKIBFG_JIOJNMENIHB_OFFSET))(this);
		}

		::System::Void LJFAJLGPHIN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJJBIGKIBFG_LJFAJLGPHIN_OFFSET))(this);
		}

		::System::Void DFHKHNLEDJO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJJBIGKIBFG_DFHKHNLEDJO_OFFSET))(this);
		}

		::RPG::Client::MonoTVScreenControl* HPNDIIPEFLJ()
		{
			return ((::RPG::Client::MonoTVScreenControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJJBIGKIBFG_HPNDIIPEFLJ_OFFSET))(this);
		}

	};
