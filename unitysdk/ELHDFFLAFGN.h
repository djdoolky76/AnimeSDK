#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PoseSwitcherType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Quaternion.h"
namespace RPG::Client { class MonoMapPoseSwitcher; }
namespace RPG::GameCore { class GameEntity; }

#define ELHDFFLAFGN_BJBBEBMAJJN_OFFSET UNITYSDK_OFFSET(0x15514C70)
#define ELHDFFLAFGN_CTOR_OFFSET UNITYSDK_OFFSET(0x15513F60)
#define ELHDFFLAFGN_GCFBHJOFHAO_OFFSET UNITYSDK_OFFSET(0x155145B0)
#define ELHDFFLAFGN_GET_RUNTIMEID_OFFSET UNITYSDK_OFFSET(0x15515090)
#define ELHDFFLAFGN_GET_VOLUMEGROUPID_OFFSET UNITYSDK_OFFSET(0x155150A0)
#define ELHDFFLAFGN_GET_VOLUMEINSTANCEID_OFFSET UNITYSDK_OFFSET(0x155150B0)
#define ELHDFFLAFGN_ICNAGNCGLAH_OFFSET UNITYSDK_OFFSET(0x15514710)
#define ELHDFFLAFGN_IHLCKDJPLCF_OFFSET UNITYSDK_OFFSET(0x15514FA0)
#define ELHDFFLAFGN_INLLMMHBNKC_OFFSET UNITYSDK_OFFSET(0x155146C0)
#define ELHDFFLAFGN_JBIOGKPHKKC_OFFSET UNITYSDK_OFFSET(0x15515070)
#define ELHDFFLAFGN_JCBNMOOHJLH_OFFSET UNITYSDK_OFFSET(0x15514AA0)
#define ELHDFFLAFGN_JCFLAJGGMIG_OFFSET UNITYSDK_OFFSET(0x15514020)
#define ELHDFFLAFGN_KANANOBDGKH_OFFSET UNITYSDK_OFFSET(0x15514660)
#define ELHDFFLAFGN_LHEGIBFBDHG_OFFSET UNITYSDK_OFFSET(0x15514170)
#define ELHDFFLAFGN_MOOENEIANFA_OFFSET UNITYSDK_OFFSET(0x15514FC0)
#define ELHDFFLAFGN_NFIFONCBMBN_OFFSET UNITYSDK_OFFSET(0x15514D20)
#define ELHDFFLAFGN_OGCKMMKLBPI_OFFSET UNITYSDK_OFFSET(0x155142E0)
#define ELHDFFLAFGN_PBGIAFPAKCI_OFFSET UNITYSDK_OFFSET(0x15514880)
#define ELHDFFLAFGN_PJGJNCKLIGL_OFFSET UNITYSDK_OFFSET(0x15514CD0)

inline static constexpr unsigned int ELHDFFLAFGN_TypeDefinitionIndex = 60616;

	class ELHDFFLAFGN : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x10
		::RPG::Client::MonoMapPoseSwitcher* JDBBLDPCOMP; // 0x18
		::UnityEngine::Vector3 EFDAGHOJAKN; // 0x20
		::System::UInt32 PNIPHACKBNB; // 0x2C
		::UnityEngine::Vector3 AOBCMALLLJH; // 0x30
		::System::UInt32 _VolumeGroupID_k__BackingField; // 0x3C
		::System::UInt32 GMAOIINKPNC; // 0x40
		::System::UInt32 _RuntimeID_k__BackingField; // 0x44
		::UnityEngine::Vector3 MGNLFBEKGPH; // 0x48
		::System::UInt32 _VolumeInstanceID_k__BackingField; // 0x54
		::UnityEngine::Vector3 NMHMGGEAHFA; // 0x58
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
