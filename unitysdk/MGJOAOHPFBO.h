#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EAPGFKLGCDH.h"
#include "unitysdk/RPG/Client/ETravelShipState.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Quaternion.h"
class AirShipRandomFloating;
class BDMIBKGJLNN;
class GPGDJDKKHNE;
class IIMKPMNCFFI;
class MGJOAOHPFBO;
class NOBBAHKMNDK;
namespace RPG::Client { class MonoTravelShipChannel; }
namespace RPG::Client { class MonoTravelShipController; }
namespace RPG::Client { class TravelShipPuzzleBoard; }
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class CharacterInputData; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class CapsuleCollider; }

#define MGJOAOHPFBO_AADMIFEJNHJ_OFFSET UNITYSDK_OFFSET(0xB9257A0)
#define MGJOAOHPFBO_BBLEMPMKLJD_OFFSET UNITYSDK_OFFSET(0xB925800)
#define MGJOAOHPFBO_BINNHFKCJHN_OFFSET UNITYSDK_OFFSET(0xB925810)
#define MGJOAOHPFBO_BKHEPGOHPEJ_OFFSET UNITYSDK_OFFSET(0xB9258C0)
#define MGJOAOHPFBO_BOCBDDMJCKL_OFFSET UNITYSDK_OFFSET(0xB9246F0)
#define MGJOAOHPFBO_CCKJJOCLPHI_OFFSET UNITYSDK_OFFSET(0xB925780)
#define MGJOAOHPFBO_CTOR_OFFSET UNITYSDK_OFFSET(0xB9228A0)
#define MGJOAOHPFBO_DFMJMGGJJCP_OFFSET UNITYSDK_OFFSET(0xB925820)
#define MGJOAOHPFBO_DIHDLNFMJMM_OFFSET UNITYSDK_OFFSET(0xB923340)
#define MGJOAOHPFBO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB9235F0)
#define MGJOAOHPFBO_DMMFJPOJPEH_OFFSET UNITYSDK_OFFSET(0xB925150)
#define MGJOAOHPFBO_FBIJLMCMKEF_OFFSET UNITYSDK_OFFSET(0xB9247E0)
#define MGJOAOHPFBO_FGOPEAJGIEH_OFFSET UNITYSDK_OFFSET(0xB924EF0)
#define MGJOAOHPFBO_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xB922880)
#define MGJOAOHPFBO_GET_NAVIGATEFLAG_OFFSET UNITYSDK_OFFSET(0xB925870)
#define MGJOAOHPFBO_GET_NAVIGATESHOWTOAST_OFFSET UNITYSDK_OFFSET(0xB925850)
#define MGJOAOHPFBO_GET_NAVIGATESTOPONARRIVEFLAG_OFFSET UNITYSDK_OFFSET(0xB925830)
#define MGJOAOHPFBO_GET_NAVIGATIONPOINT_OFFSET UNITYSDK_OFFSET(0xB925890)
#define MGJOAOHPFBO_GPDAOCJAIGE_OFFSET UNITYSDK_OFFSET(0xB924300)
#define MGJOAOHPFBO_HAFDLLJJJHG_OFFSET UNITYSDK_OFFSET(0xB923D90)
#define MGJOAOHPFBO_HIDAKNHCKBN_OFFSET UNITYSDK_OFFSET(0xB925590)
#define MGJOAOHPFBO_HODHKGPLMFD_OFFSET UNITYSDK_OFFSET(0xB925530)
#define MGJOAOHPFBO_IGFMKENIABC_OFFSET UNITYSDK_OFFSET(0xB924C60)
#define MGJOAOHPFBO_IJBAMMMBIOA_OFFSET UNITYSDK_OFFSET(0xB924A60)
#define MGJOAOHPFBO_JABJIGGGODP_OFFSET UNITYSDK_OFFSET(0xB924500)
#define MGJOAOHPFBO_JGGDLGOCGDM_OFFSET UNITYSDK_OFFSET(0xB923EA0)
#define MGJOAOHPFBO_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xB924200)
#define MGJOAOHPFBO_JMNILJLAHLJ_OFFSET UNITYSDK_OFFSET(0xB924DD0)
#define MGJOAOHPFBO_KCEALAGCGCI_OFFSET UNITYSDK_OFFSET(0xB924B80)
#define MGJOAOHPFBO_KGLBJADLAKO_OFFSET UNITYSDK_OFFSET(0xB9233C0)
#define MGJOAOHPFBO_LBCEMDMLNBG_OFFSET UNITYSDK_OFFSET(0xB923440)
#define MGJOAOHPFBO_LCIIIBKDPBK_OFFSET UNITYSDK_OFFSET(0xB9258B0)
#define MGJOAOHPFBO_LFAAEANCCFM_OFFSET UNITYSDK_OFFSET(0xB925290)
#define MGJOAOHPFBO_LHGLOHAIKEA_OFFSET UNITYSDK_OFFSET(0xB9243D0)
#define MGJOAOHPFBO_LIHJCMNPNAG_OFFSET UNITYSDK_OFFSET(0xB923F20)
#define MGJOAOHPFBO_MKLCPNPCKLE_OFFSET UNITYSDK_OFFSET(0xB9244B0)
#define MGJOAOHPFBO_NKFEJMDMCGM_OFFSET UNITYSDK_OFFSET(0xB925790)
#define MGJOAOHPFBO_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0xB923C20)
#define MGJOAOHPFBO_OBPCLGDIMEM_OFFSET UNITYSDK_OFFSET(0xB925010)
#define MGJOAOHPFBO_OLCEHHDFAOE_OFFSET UNITYSDK_OFFSET(0xB925350)
#define MGJOAOHPFBO_ONMKFFCMGEO_OFFSET UNITYSDK_OFFSET(0xB925440)
#define MGJOAOHPFBO_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xB922890)
#define MGJOAOHPFBO_SET_NAVIGATEFLAG_OFFSET UNITYSDK_OFFSET(0xB925880)
#define MGJOAOHPFBO_SET_NAVIGATESHOWTOAST_OFFSET UNITYSDK_OFFSET(0xB925860)
#define MGJOAOHPFBO_SET_NAVIGATESTOPONARRIVEFLAG_OFFSET UNITYSDK_OFFSET(0xB925840)
#define MGJOAOHPFBO_SET_NAVIGATIONPOINT_OFFSET UNITYSDK_OFFSET(0xB9258A0)

inline static constexpr unsigned int MGJOAOHPFBO_TypeDefinitionIndex = 68790;

	class MGJOAOHPFBO : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::Client::ETravelShipState, ::GPGDJDKKHNE*>* LKKJNJIEFBC; // 0x10
		::RPG::GameCore::GameEntity* JCCHOIPFHHD; // 0x18
		::BDMIBKGJLNN* IJPIHJKEPKE; // 0x20
		::EAPGFKLGCDH IJDLJKBNDEJ; // 0x28
		::RPG::GameCore::AdventureCharacterController* CPIIOIPAAKK; // 0x38
		::AirShipRandomFloating* DBFCBFNMKAE; // 0x40
		::RPG::Client::MonoTravelShipController* CEODOONOFBM; // 0x48
		::IIMKPMNCFFI* IEPCIODGJJD; // 0x50
		::RPG::Client::TravelShipPuzzleBoard* CCAHGFIABKE; // 0x58
		::GPGDJDKKHNE* EHOAMKDICDN; // 0x60
		::System::Nullable_1<::UnityEngine::Vector3> _NavigationPoint_k__BackingField; // 0x68
		::System::Byte _padding0[0x8];
		::System::Boolean NEJFFBMGICC; // 0x78
		::System::Boolean _NavigateShowToast_k__BackingField; // 0x79
		::System::Boolean _NavigateFlag_k__BackingField; // 0x7A
		::System::Boolean CLCIDDBMBEC; // 0x7B
		::System::Boolean _NavigateStopOnArriveFlag_k__BackingField; // 0x7C
		static ::MGJOAOHPFBO** StaticGet__Instance_k__BackingField()
		{
			return (::MGJOAOHPFBO**)UnitySDK::FromName("", "MGJOAOHPFBO")->GetStaticField(0x267D0);
		}

		// static const ::System::String* EHFNDKHJCBO; // 0x0
		// static const ::System::String* LFBEOKAIMFI; // 0x0
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::RPG::Client::TravelShipPuzzleBoard* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::Client::TravelShipPuzzleBoard*))((::PBYTE)hIl2Cpp + MGJOAOHPFBO_CTOR_OFFSET))(this, a1, a2);
		}

		static ::MGJOAOHPFBO* get_Instance()
		{
			return ((::MGJOAOHPFBO*(*)())((::PBYTE)hIl2Cpp + MGJOAOHPFBO_GET_INSTANCE_OFFSET))();
		}

		static ::System::Void set_Instance(::MGJOAOHPFBO* a1)
		{
			return ((::System::Void(*)(::MGJOAOHPFBO*))((::PBYTE)hIl2Cpp + MGJOAOHPFBO_SET_INSTANCE_OFFSET))(a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGJOAOHPFBO_DISPOSE_OFFSET))(this);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGJOAOHPFBO_NPAFMEBNFOB_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MGJOAOHPFBO_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Boolean GPDAOCJAIGE(::RPG::Client::ETravelShipState a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ETravelShipState))((::PBYTE)hIl2Cpp + MGJOAOHPFBO_GPDAOCJAIGE_OFFSET))(this, a1);
		}

		::System::Void LIHJCMNPNAG(::RPG::Client::ETravelShipState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ETravelShipState))((::PBYTE)hIl2Cpp + MGJOAOHPFBO_LIHJCMNPNAG_OFFSET))(this, a1);
		}

		::System::Boolean LHGLOHAIKEA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MGJOAOHPFBO_LHGLOHAIKEA_OFFSET))(this);
		}

		::System::Boolean MKLCPNPCKLE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MGJOAOHPFBO_MKLCPNPCKLE_OFFSET))(this);
		}

		::System::Boolean JABJIGGGODP(::RPG::Client::MonoTravelShipChannel* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MonoTravelShipChannel*))((::PBYTE)hIl2Cpp + MGJOAOHPFBO_JABJIGGGODP_OFFSET))(this, a1);
		}

		::System::Boolean BOCBDDMJCKL(::RPG::Client::MonoTravelShipChannel* a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MonoTravelShipChannel*, ::System::Single))((::PBYTE)hIl2Cpp + MGJOAOHPFBO_BOCBDDMJCKL_OFFSET))(this, a1, a2);
		}

		::System::Boolean FBIJLMCMKEF(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + MGJOAOHPFBO_FBIJLMCMKEF_OFFSET))(this, a1, a2);
		}

		::System::Void IJBAMMMBIOA(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + MGJOAOHPFBO_IJBAMMMBIOA_OFFSET))(this, a1, a2);
		}

		::System::Boolean KCEALAGCGCI(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + MGJOAOHPFBO_KCEALAGCGCI_OFFSET))(this, a1);
		}

		::System::Boolean IGFMKENIABC(::UnityEngine::Vector3 a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MGJOAOHPFBO_IGFMKENIABC_OFFSET))(this, a1, a2, a3);
		}

		::System::Void JMNILJLAHLJ(::System::Boolean a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MGJOAOHPFBO_JMNILJLAHLJ_OFFSET))(this, a1, a2, a3);
		}

		::System::Void HAFDLLJJJHG(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MGJOAOHPFBO_HAFDLLJJJHG_OFFSET))(this, a1);
		}

		::System::Void FGOPEAJGIEH(::System::Boolean a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + MGJOAOHPFBO_FGOPEAJGIEH_OFFSET))(this, a1, a2);
		}

		::System::Void OBPCLGDIMEM(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MGJOAOHPFBO_OBPCLGDIMEM_OFFSET))(this, a1);
		}

		::System::Void DMMFJPOJPEH(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MGJOAOHPFBO_DMMFJPOJPEH_OFFSET))(this, a1);
		}

		::System::Void LFAAEANCCFM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGJOAOHPFBO_LFAAEANCCFM_OFFSET))(this);
		}

		::System::Void JGGDLGOCGDM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGJOAOHPFBO_JGGDLGOCGDM_OFFSET))(this);
		}

		::System::Void KGLBJADLAKO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGJOAOHPFBO_KGLBJADLAKO_OFFSET))(this);
		}

		::System::Void LBCEMDMLNBG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGJOAOHPFBO_LBCEMDMLNBG_OFFSET))(this);
		}

		::System::Void OLCEHHDFAOE(::RPG::GameCore::CharacterInputData* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterInputData*, ::System::Single))((::PBYTE)hIl2Cpp + MGJOAOHPFBO_OLCEHHDFAOE_OFFSET))(this, a1, a2);
		}

		::System::Void ONMKFFCMGEO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGJOAOHPFBO_ONMKFFCMGEO_OFFSET))(this);
		}

		::System::Void HODHKGPLMFD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MGJOAOHPFBO_HODHKGPLMFD_OFFSET))(this, a1);
		}

		::System::Void HIDAKNHCKBN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MGJOAOHPFBO_HIDAKNHCKBN_OFFSET))(this, a1);
		}

		::RPG::Client::TravelShipPuzzleBoard* CCKJJOCLPHI()
		{
			return ((::RPG::Client::TravelShipPuzzleBoard*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGJOAOHPFBO_CCKJJOCLPHI_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* NKFEJMDMCGM()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGJOAOHPFBO_NKFEJMDMCGM_OFFSET))(this);
		}

		::UnityEngine::CapsuleCollider* AADMIFEJNHJ()
		{
			return ((::UnityEngine::CapsuleCollider*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGJOAOHPFBO_AADMIFEJNHJ_OFFSET))(this);
		}

		::IIMKPMNCFFI* BBLEMPMKLJD()
		{
			return ((::IIMKPMNCFFI*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGJOAOHPFBO_BBLEMPMKLJD_OFFSET))(this);
		}

		::RPG::Client::MonoTravelShipController* BINNHFKCJHN()
		{
			return ((::RPG::Client::MonoTravelShipController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGJOAOHPFBO_BINNHFKCJHN_OFFSET))(this);
		}

		::BDMIBKGJLNN* DFMJMGGJJCP()
		{
			return ((::BDMIBKGJLNN*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGJOAOHPFBO_DFMJMGGJJCP_OFFSET))(this);
		}

		::System::Boolean get_NavigateStopOnArriveFlag()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MGJOAOHPFBO_GET_NAVIGATESTOPONARRIVEFLAG_OFFSET))(this);
		}

		::System::Void set_NavigateStopOnArriveFlag(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MGJOAOHPFBO_SET_NAVIGATESTOPONARRIVEFLAG_OFFSET))(this, a1);
		}

		::System::Boolean get_NavigateShowToast()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MGJOAOHPFBO_GET_NAVIGATESHOWTOAST_OFFSET))(this);
		}

		::System::Void set_NavigateShowToast(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MGJOAOHPFBO_SET_NAVIGATESHOWTOAST_OFFSET))(this, a1);
		}

		::System::Boolean get_NavigateFlag()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MGJOAOHPFBO_GET_NAVIGATEFLAG_OFFSET))(this);
		}

		::System::Void set_NavigateFlag(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MGJOAOHPFBO_SET_NAVIGATEFLAG_OFFSET))(this, a1);
		}

		::System::Nullable_1<::UnityEngine::Vector3> get_NavigationPoint()
		{
			return ((::System::Nullable_1<::UnityEngine::Vector3>(*)(::PVOID))((::PBYTE)hIl2Cpp + MGJOAOHPFBO_GET_NAVIGATIONPOINT_OFFSET))(this);
		}

		::System::Void set_NavigationPoint(::System::Nullable_1<::UnityEngine::Vector3> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::UnityEngine::Vector3>))((::PBYTE)hIl2Cpp + MGJOAOHPFBO_SET_NAVIGATIONPOINT_OFFSET))(this, a1);
		}

		::System::Boolean LCIIIBKDPBK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MGJOAOHPFBO_LCIIIBKDPBK_OFFSET))(this);
		}

		::System::Void BKHEPGOHPEJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MGJOAOHPFBO_BKHEPGOHPEJ_OFFSET))(this, a1);
		}

		::NOBBAHKMNDK* DIHDLNFMJMM()
		{
			return ((::NOBBAHKMNDK*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGJOAOHPFBO_DIHDLNFMJMM_OFFSET))(this);
		}

	};
