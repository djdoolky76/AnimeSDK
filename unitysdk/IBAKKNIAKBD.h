#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePhaseType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class CFNBLNHMHGO;
class HHCKNGMIAKL;
class KLKMCNOECAL;
class NNDAJDLAHNC;
class PKHDLFBNJDE;
class PPLOLCMFFPB;
namespace RPG::Client { class AdventureMapTestInitParams; }
namespace RPG::Client { class EnvironmentSystem; }
namespace RPG::Client { class FirstViewCamera; }
namespace RPG::GameCore { class GameWorld; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace UnityEngine { class Camera; }

#define IBAKKNIAKBD_AFPAMNPFIHO_OFFSET UNITYSDK_OFFSET(0x15E27E30)
#define IBAKKNIAKBD_CCTOR_OFFSET UNITYSDK_OFFSET(0x15E28730)
#define IBAKKNIAKBD_CTOR_OFFSET UNITYSDK_OFFSET(0x15E276C0)
#define IBAKKNIAKBD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15E27B60)
#define IBAKKNIAKBD_DLBFLGKAPFN_OFFSET UNITYSDK_OFFSET(0x15E27E70)
#define IBAKKNIAKBD_ENTER_OFFSET UNITYSDK_OFFSET(0x15E276F0)
#define IBAKKNIAKBD_FANHCABNFFA_OFFSET UNITYSDK_OFFSET(0x15E283C0)
#define IBAKKNIAKBD_GETGAMEPHASETYPE_OFFSET UNITYSDK_OFFSET(0x15E27D60)
#define IBAKKNIAKBD_IAMLNJGFBNE_OFFSET UNITYSDK_OFFSET(0x15E27DF0)
#define IBAKKNIAKBD_JNNPCDAPIOD_OFFSET UNITYSDK_OFFSET(0x15E27DB0)
#define IBAKKNIAKBD_KLONBGBGFIK_OFFSET UNITYSDK_OFFSET(0x15E27F40)
#define IBAKKNIAKBD_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x15E279C0)
#define IBAKKNIAKBD_LEAVE_OFFSET UNITYSDK_OFFSET(0x15E27B10)
#define IBAKKNIAKBD_PAAELBDDKHG_OFFSET UNITYSDK_OFFSET(0x15E28060)
#define IBAKKNIAKBD_PEEBOGAONEE_OFFSET UNITYSDK_OFFSET(0x15E28540)
#define IBAKKNIAKBD_PFOBLHKDOON_OFFSET UNITYSDK_OFFSET(0x15E27FD0)
#define IBAKKNIAKBD_TICK_OFFSET UNITYSDK_OFFSET(0x15E27960)

	class IBAKKNIAKBD : public ::System::Object
	{
	public:
		::KLKMCNOECAL* OHHPONLPIHE; // 0x10
		::RPG::Client::EnvironmentSystem* NLKKPKJEAOO; // 0x18
		::PKHDLFBNJDE* NIJOOBIAPGP; // 0x20
		::RPG::Client::FirstViewCamera* OPPFOJMDEJD; // 0x28
		::HHCKNGMIAKL* DKIIGEKCPFO; // 0x30
		::PPLOLCMFFPB* FNGCKDKAJMP; // 0x38
		::UnityEngine::Camera* IEMGKEFBPCG; // 0x40
		::RPG::Client::AdventureMapTestInitParams* JEMMHNHIJDA; // 0x48
		::RPG::GameCore::GameWorld* IMMBMILPPFB; // 0x50
		::System::Boolean JKBHAEBFPLO; // 0x58
		static ::System::String** StaticGet_CPMIACJKGHC()
		{
			return (::System::String**)UnitySDK::FromName("", "IBAKKNIAKBD")->GetStaticField(0x471B0);
		}

		::System::Void _ctor(::RPG::Client::AdventureMapTestInitParams* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AdventureMapTestInitParams*))((::PBYTE)hIl2Cpp + IBAKKNIAKBD_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IBAKKNIAKBD_CCTOR_OFFSET))();
		}

		::System::Boolean Enter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IBAKKNIAKBD_ENTER_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IBAKKNIAKBD_TICK_OFFSET))(this, a1);
		}

		::System::Void LateUpdate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IBAKKNIAKBD_LATEUPDATE_OFFSET))(this, a1);
		}

		::System::Boolean Leave(::CFNBLNHMHGO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CFNBLNHMHGO*))((::PBYTE)hIl2Cpp + IBAKKNIAKBD_LEAVE_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBAKKNIAKBD_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::GamePhaseType GetGamePhaseType()
		{
			return ((::RPG::Client::GamePhaseType(*)(::PVOID))((::PBYTE)hIl2Cpp + IBAKKNIAKBD_GETGAMEPHASETYPE_OFFSET))(this);
		}

		::RPG::Client::EnvironmentSystem* JNNPCDAPIOD()
		{
			return ((::RPG::Client::EnvironmentSystem*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBAKKNIAKBD_JNNPCDAPIOD_OFFSET))(this);
		}

		::PPLOLCMFFPB* IAMLNJGFBNE()
		{
			return ((::PPLOLCMFFPB*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBAKKNIAKBD_IAMLNJGFBNE_OFFSET))(this);
		}

		::HHCKNGMIAKL* AFPAMNPFIHO()
		{
			return ((::HHCKNGMIAKL*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBAKKNIAKBD_AFPAMNPFIHO_OFFSET))(this);
		}

		::System::Void DLBFLGKAPFN(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + IBAKKNIAKBD_DLBFLGKAPFN_OFFSET))(this, a1);
		}

		::System::Void KLONBGBGFIK(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + IBAKKNIAKBD_KLONBGBGFIK_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerator_1<::NNDAJDLAHNC*>* PFOBLHKDOON()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::NNDAJDLAHNC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBAKKNIAKBD_PFOBLHKDOON_OFFSET))(this);
		}

		::System::Void PAAELBDDKHG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBAKKNIAKBD_PAAELBDDKHG_OFFSET))(this);
		}

		::System::Void FANHCABNFFA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBAKKNIAKBD_FANHCABNFFA_OFFSET))(this);
		}

		::System::Void PEEBOGAONEE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBAKKNIAKBD_PEEBOGAONEE_OFFSET))(this);
		}

	};
