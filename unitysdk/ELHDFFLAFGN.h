#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PoseSwitcherType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Quaternion.h"
namespace RPG::Client { class MonoMapPoseSwitcher; }
namespace RPG::GameCore { class GameEntity; }

#define ELHDFFLAFGN_BJBBEBMAJJN_OFFSET UNITYSDK_OFFSET(0x199AA2D0)
#define ELHDFFLAFGN_CTOR_OFFSET UNITYSDK_OFFSET(0x199A95C0)
#define ELHDFFLAFGN_GCFBHJOFHAO_OFFSET UNITYSDK_OFFSET(0x199A9C10)
#define ELHDFFLAFGN_GET_RUNTIMEID_OFFSET UNITYSDK_OFFSET(0x199AA6F0)
#define ELHDFFLAFGN_GET_VOLUMEGROUPID_OFFSET UNITYSDK_OFFSET(0x199AA700)
#define ELHDFFLAFGN_GET_VOLUMEINSTANCEID_OFFSET UNITYSDK_OFFSET(0x199AA710)
#define ELHDFFLAFGN_ICNAGNCGLAH_OFFSET UNITYSDK_OFFSET(0x199A9D70)
#define ELHDFFLAFGN_IHLCKDJPLCF_OFFSET UNITYSDK_OFFSET(0x199AA600)
#define ELHDFFLAFGN_INLLMMHBNKC_OFFSET UNITYSDK_OFFSET(0x199A9D20)
#define ELHDFFLAFGN_JBIOGKPHKKC_OFFSET UNITYSDK_OFFSET(0x199AA6D0)
#define ELHDFFLAFGN_JCBNMOOHJLH_OFFSET UNITYSDK_OFFSET(0x199AA100)
#define ELHDFFLAFGN_JCFLAJGGMIG_OFFSET UNITYSDK_OFFSET(0x199A9680)
#define ELHDFFLAFGN_KANANOBDGKH_OFFSET UNITYSDK_OFFSET(0x199A9CC0)
#define ELHDFFLAFGN_LHEGIBFBDHG_OFFSET UNITYSDK_OFFSET(0x199A97D0)
#define ELHDFFLAFGN_MOOENEIANFA_OFFSET UNITYSDK_OFFSET(0x199AA620)
#define ELHDFFLAFGN_NFIFONCBMBN_OFFSET UNITYSDK_OFFSET(0x199AA380)
#define ELHDFFLAFGN_OGCKMMKLBPI_OFFSET UNITYSDK_OFFSET(0x199A9940)
#define ELHDFFLAFGN_PBGIAFPAKCI_OFFSET UNITYSDK_OFFSET(0x199A9EE0)
#define ELHDFFLAFGN_PJGJNCKLIGL_OFFSET UNITYSDK_OFFSET(0x199AA330)

inline static constexpr unsigned int ELHDFFLAFGN_TypeDefinitionIndex = 61993;

	class ELHDFFLAFGN : public ::System::Object
	{
	public:
		::RPG::Client::MonoMapPoseSwitcher* JDBBLDPCOMP; // 0x10
		::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x18
		::UnityEngine::Vector3 NMHMGGEAHFA; // 0x20
		::UnityEngine::Vector3 AOBCMALLLJH; // 0x2C
		::UnityEngine::Vector3 EFDAGHOJAKN; // 0x38
		::UnityEngine::Vector3 MGNLFBEKGPH; // 0x44
		::System::UInt32 _VolumeGroupID_k__BackingField; // 0x50
		::System::UInt32 _RuntimeID_k__BackingField; // 0x54
		::System::UInt32 GMAOIINKPNC; // 0x58
		::System::UInt32 _VolumeInstanceID_k__BackingField; // 0x5C
		::System::UInt32 PNIPHACKBNB; // 0x60
		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::UInt32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + ELHDFFLAFGN_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean JCFLAJGGMIG(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ELHDFFLAFGN_JCFLAJGGMIG_OFFSET))(this, a1);
		}

		::System::Boolean KANANOBDGKH(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ELHDFFLAFGN_KANANOBDGKH_OFFSET))(this, a1);
		}

		::System::UInt32 INLLMMHBNKC(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ELHDFFLAFGN_INLLMMHBNKC_OFFSET))(this, a1);
		}

		::System::Single ICNAGNCGLAH()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ELHDFFLAFGN_ICNAGNCGLAH_OFFSET))(this);
		}

		::System::Single PBGIAFPAKCI(::UnityEngine::Vector3 a1, ::System::UInt32 a2)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::System::UInt32))((::PBYTE)hIl2Cpp + ELHDFFLAFGN_PBGIAFPAKCI_OFFSET))(this, a1, a2);
		}

		::System::Void BJBBEBMAJJN(::RPG::GameCore::GameEntity* a1, ::RPG::Client::MonoMapPoseSwitcher* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::Client::MonoMapPoseSwitcher*))((::PBYTE)hIl2Cpp + ELHDFFLAFGN_BJBBEBMAJJN_OFFSET))(this, a1, a2);
		}

		::System::Void PJGJNCKLIGL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELHDFFLAFGN_PJGJNCKLIGL_OFFSET))(this);
		}

		::System::Void NFIFONCBMBN(::UnityEngine::Quaternion a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + ELHDFFLAFGN_NFIFONCBMBN_OFFSET))(this, a1);
		}

		::System::Single JCBNMOOHJLH(::UnityEngine::Vector3 a1)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ELHDFFLAFGN_JCBNMOOHJLH_OFFSET))(this, a1);
		}

		::System::Boolean GCFBHJOFHAO(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ELHDFFLAFGN_GCFBHJOFHAO_OFFSET))(this, a1);
		}

		::System::Boolean LHEGIBFBDHG(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ELHDFFLAFGN_LHEGIBFBDHG_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 OGCKMMKLBPI(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ELHDFFLAFGN_OGCKMMKLBPI_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 MOOENEIANFA()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ELHDFFLAFGN_MOOENEIANFA_OFFSET))(this);
		}

		::RPG::Client::PoseSwitcherType JBIOGKPHKKC()
		{
			return ((::RPG::Client::PoseSwitcherType(*)(::PVOID))((::PBYTE)hIl2Cpp + ELHDFFLAFGN_JBIOGKPHKKC_OFFSET))(this);
		}

		::System::Single IHLCKDJPLCF()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ELHDFFLAFGN_IHLCKDJPLCF_OFFSET))(this);
		}

		::System::UInt32 get_RuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELHDFFLAFGN_GET_RUNTIMEID_OFFSET))(this);
		}

		::System::UInt32 get_VolumeGroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELHDFFLAFGN_GET_VOLUMEGROUPID_OFFSET))(this);
		}

		::System::UInt32 get_VolumeInstanceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELHDFFLAFGN_GET_VOLUMEINSTANCEID_OFFSET))(this);
		}

	};
