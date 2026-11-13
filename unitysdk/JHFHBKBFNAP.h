#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GCBMADADMDJ.h"
#include "unitysdk/RPG/GameCore/AILeadWayState.h"
#include "unitysdk/RPG/GameCore/AdvNavigationFailReason.h"
class BACCOPOCMPC;
class FOOIINCDBFA;
class KFELGAIGHAP;
class OLMLKNCEDKN;
namespace RPG::GameCore { class AdvSetAILeadWay; }
namespace RPG::GameCore { class CharacterModelComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TransformComponent; }

#define JHFHBKBFNAP_AAOCAOJDBOG_OFFSET UNITYSDK_OFFSET(0x173D8060)
#define JHFHBKBFNAP_CCTOR_OFFSET UNITYSDK_OFFSET(0x173D9350)
#define JHFHBKBFNAP_CGJDDLLDLMO_OFFSET UNITYSDK_OFFSET(0x173D7DE0)
#define JHFHBKBFNAP_CTOR_OFFSET UNITYSDK_OFFSET(0x173D68C0)
#define JHFHBKBFNAP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x173D69F0)
#define JHFHBKBFNAP_EAMEMNIFPOO_OFFSET UNITYSDK_OFFSET(0x173D9230)
#define JHFHBKBFNAP_EJPGEFGACBA_OFFSET UNITYSDK_OFFSET(0x173D8D90)
#define JHFHBKBFNAP_HNALGDBPDMB_OFFSET UNITYSDK_OFFSET(0x173D7430)
#define JHFHBKBFNAP_IIECMNAACJI_OFFSET UNITYSDK_OFFSET(0x173D8AE0)
#define JHFHBKBFNAP_IIOBOBCMFFI_OFFSET UNITYSDK_OFFSET(0x173D8A40)
#define JHFHBKBFNAP_INAGMNKGMDE_OFFSET UNITYSDK_OFFSET(0x173D8FC0)
#define JHFHBKBFNAP_JDECHPDGACN_OFFSET UNITYSDK_OFFSET(0x173D6B90)
#define JHFHBKBFNAP_KKEDFCNJHKB_OFFSET UNITYSDK_OFFSET(0x173D7CC0)
#define JHFHBKBFNAP_LLCDDOBNLBJ_OFFSET UNITYSDK_OFFSET(0x173D8860)
#define JHFHBKBFNAP_NCDLAIAFBGP_OFFSET UNITYSDK_OFFSET(0x173D7510)
#define JHFHBKBFNAP_OCKMKACEOKP_OFFSET UNITYSDK_OFFSET(0x173D75D0)
#define JHFHBKBFNAP_ONAFTERMODELARTLOAD_OFFSET UNITYSDK_OFFSET(0x173D91B0)
#define JHFHBKBFNAP_ONBEFOREMODELARTUNLOAD_OFFSET UNITYSDK_OFFSET(0x173D9160)
#define JHFHBKBFNAP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x173D6BF0)
#define JHFHBKBFNAP_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x173D8E80)
#define JHFHBKBFNAP_TICK_OFFSET UNITYSDK_OFFSET(0x173D7690)

inline static constexpr unsigned int JHFHBKBFNAP_TypeDefinitionIndex = 53594;

	class JHFHBKBFNAP : public ::GCBMADADMDJ
	{
	public:
		::BACCOPOCMPC* IPFNHFDJKKL; // 0x30
		::FOOIINCDBFA* GEPFAIOOOGB; // 0x38
		::RPG::GameCore::TransformComponent* CGFABMFILCD; // 0x40
		::KFELGAIGHAP* KANMJJLKMMI; // 0x48
		::OLMLKNCEDKN* DKAFJFPFIFF; // 0x50
		::RPG::GameCore::AdvSetAILeadWay* OFKGLJOAMLD; // 0x58
		::RPG::GameCore::CharacterModelComponent* NMGPLIMPCBC; // 0x60
		::System::Boolean FNEJMBKLEIP; // 0x68
		::System::Boolean PLOJEHCOJPD; // 0x69
		::System::Byte _padding0[0x2];
		::System::Single COALOIELFND; // 0x6C
		::System::Single NGAEMPHCOAI; // 0x70
		::RPG::GameCore::AILeadWayState JKGJBAPLKAF; // 0x74
		::System::Single IFPNFAEJNBI; // 0x78
		static ::System::Single* StaticGet_MEMKAJABEON()
		{
			return (::System::Single*)UnitySDK::FromName("", "JHFHBKBFNAP")->GetStaticField(0x770);
		}

		static ::System::Single* StaticGet_JFAIPJJIBKF()
		{
			return (::System::Single*)UnitySDK::FromName("", "JHFHBKBFNAP")->GetStaticField(0x774);
		}

		static ::System::Single* StaticGet_LAJAKIACCLH()
		{
			return (::System::Single*)UnitySDK::FromName("", "JHFHBKBFNAP")->GetStaticField(0x778);
		}

		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvSetAILeadWay* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvSetAILeadWay*))((::PBYTE)hIl2Cpp + JHFHBKBFNAP_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JHFHBKBFNAP_CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHFHBKBFNAP_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHFHBKBFNAP_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JHFHBKBFNAP_TICK_OFFSET))(this, a1);
		}

		::System::Single AAOCAOJDBOG()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + JHFHBKBFNAP_AAOCAOJDBOG_OFFSET))(this);
		}

		::System::Boolean CGJDDLLDLMO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JHFHBKBFNAP_CGJDDLLDLMO_OFFSET))(this);
		}

		::System::Void LLCDDOBNLBJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHFHBKBFNAP_LLCDDOBNLBJ_OFFSET))(this);
		}

		::System::Void IIECMNAACJI(::RPG::GameCore::AdvNavigationFailReason a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdvNavigationFailReason))((::PBYTE)hIl2Cpp + JHFHBKBFNAP_IIECMNAACJI_OFFSET))(this, a1);
		}

		::System::Void EJPGEFGACBA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHFHBKBFNAP_EJPGEFGACBA_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHFHBKBFNAP_ONTASKRESET_OFFSET))(this);
		}

		::System::Void INAGMNKGMDE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHFHBKBFNAP_INAGMNKGMDE_OFFSET))(this);
		}

		::System::Void OnBeforeModelArtUnload(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + JHFHBKBFNAP_ONBEFOREMODELARTUNLOAD_OFFSET))(this, a1);
		}

		::System::Void OnAfterModelArtLoad(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + JHFHBKBFNAP_ONAFTERMODELARTLOAD_OFFSET))(this, a1);
		}

		::System::Void HNALGDBPDMB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JHFHBKBFNAP_HNALGDBPDMB_OFFSET))(this, a1);
		}

		::System::Void NCDLAIAFBGP(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JHFHBKBFNAP_NCDLAIAFBGP_OFFSET))(this, a1);
		}

		::System::Void OCKMKACEOKP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHFHBKBFNAP_OCKMKACEOKP_OFFSET))(this);
		}

		::System::Void JDECHPDGACN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHFHBKBFNAP_JDECHPDGACN_OFFSET))(this);
		}

		::System::Void IIOBOBCMFFI(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JHFHBKBFNAP_IIOBOBCMFFI_OFFSET))(this, a1);
		}

		::System::Void EAMEMNIFPOO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHFHBKBFNAP_EAMEMNIFPOO_OFFSET))(this);
		}

		::System::Void KKEDFCNJHKB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHFHBKBFNAP_KKEDFCNJHKB_OFFSET))(this);
		}

	};
