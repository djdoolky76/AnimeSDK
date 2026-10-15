#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace RPG::Client::MechCraft::View { class MechCraftPoseAdjuster; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace RPG::GameCore { class HoyoTag; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define KDPCEBNFPAC_CCBILCDFLJJ_OFFSET UNITYSDK_OFFSET(0xB365AB0)
#define KDPCEBNFPAC_CGNHLCOMPLI_OFFSET UNITYSDK_OFFSET(0xB3671F0)
#define KDPCEBNFPAC_CKFDOMBDAEP_OFFSET UNITYSDK_OFFSET(0xB366650)
#define KDPCEBNFPAC_COEOEIOIHBN_OFFSET UNITYSDK_OFFSET(0xB365A60)
#define KDPCEBNFPAC_CTOR_OFFSET UNITYSDK_OFFSET(0xB367260)
#define KDPCEBNFPAC_DHIFNEKAHDB_OFFSET UNITYSDK_OFFSET(0xB3670A0)
#define KDPCEBNFPAC_DKLPBGAPIBF_OFFSET UNITYSDK_OFFSET(0xB366120)
#define KDPCEBNFPAC_EFGLBBEBECH_OFFSET UNITYSDK_OFFSET(0xB365CE0)
#define KDPCEBNFPAC_EKLNKNMBFNB_OFFSET UNITYSDK_OFFSET(0xB366D10)
#define KDPCEBNFPAC_ELJDJLGDKLF_OFFSET UNITYSDK_OFFSET(0xB366A30)
#define KDPCEBNFPAC_FBFMGOPECFF_OFFSET UNITYSDK_OFFSET(0xB3661B0)
#define KDPCEBNFPAC_GMGKPCPBCGI_OFFSET UNITYSDK_OFFSET(0xB365B20)
#define KDPCEBNFPAC_IIDKNKOHIBP_OFFSET UNITYSDK_OFFSET(0xB365770)
#define KDPCEBNFPAC_ILBIPIDGEJG_OFFSET UNITYSDK_OFFSET(0xB366E50)
#define KDPCEBNFPAC_KPPHIJABKIK_OFFSET UNITYSDK_OFFSET(0xB366BB0)
#define KDPCEBNFPAC_LAPJBEPMKDJ_OFFSET UNITYSDK_OFFSET(0xB366300)
#define KDPCEBNFPAC_LFFNEMBCEGJ_OFFSET UNITYSDK_OFFSET(0xB366200)
#define KDPCEBNFPAC_LGFNEEPAMJH_OFFSET UNITYSDK_OFFSET(0xB365990)
#define KDPCEBNFPAC_MJEGMBNICCJ_OFFSET UNITYSDK_OFFSET(0xB366970)
#define KDPCEBNFPAC_MJODPHMBDOP_OFFSET UNITYSDK_OFFSET(0xB366ED0)
#define KDPCEBNFPAC_OAPAHMGCFCP_OFFSET UNITYSDK_OFFSET(0xB366F50)
#define KDPCEBNFPAC_OFLJBEOJIGF_OFFSET UNITYSDK_OFFSET(0xB365C00)
#define KDPCEBNFPAC_PACFOLEBMDB_OFFSET UNITYSDK_OFFSET(0xB3668B0)

inline static constexpr unsigned int KDPCEBNFPAC_TypeDefinitionIndex = 80168;

	class KDPCEBNFPAC : public ::System::Object
	{
	public:
		::RPG::Client::MechCraft::View::MechCraftPoseAdjuster* PLAEFJBHMPO; // 0x10
		::UnityEngine::GameObject* JBBPKIPGOKI; // 0x18
		::Cinemachine::CinemachineVirtualCamera* COOFAPDHOPF; // 0x20
		::RPG::Client::Promises::Promise* CNBCECNMALJ; // 0x28
		::System::Func_1<::System::Boolean>* BAHDCKELHEL; // 0x30
		::UnityEngine::GameObject* ILANGMIBICD; // 0x38
		::UnityEngine::Transform* PAEGJIEMBNE; // 0x40
		::System::Collections::Generic::List_1<::System::UInt32>* ACBCLHPFFMO; // 0x48
		::System::Boolean PHAHHFDCAPP; // 0x50
		::System::Boolean HCJFOOCPIPA; // 0x51
		// static const ::System::String* KMGLHOOMJJN; // 0x0
		// static const ::System::String* HINNCIOLKGD; // 0x0
		// static const ::System::String* AFPNMGFCALD; // 0x0
		// static const ::System::String* CEHEJCMBHKB; // 0x0
		// static const ::System::String* LIEMFDFPAPH; // 0x0
		// static const ::System::Object PEEFHNHDBMF; // 0x0
		// static const ::System::Object BCGGAHNLBBC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDPCEBNFPAC_CTOR_OFFSET))(this);
		}

		::System::Void IIDKNKOHIBP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDPCEBNFPAC_IIDKNKOHIBP_OFFSET))(this);
		}

		::System::Void LGFNEEPAMJH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDPCEBNFPAC_LGFNEEPAMJH_OFFSET))(this);
		}

		::System::UInt32 COEOEIOIHBN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDPCEBNFPAC_COEOEIOIHBN_OFFSET))(this);
		}

		::UnityEngine::Transform* CCBILCDFLJJ(::System::UInt32 a1)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KDPCEBNFPAC_CCBILCDFLJJ_OFFSET))(this, a1);
		}

		::System::Void GMGKPCPBCGI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDPCEBNFPAC_GMGKPCPBCGI_OFFSET))(this);
		}

		::System::Void OFLJBEOJIGF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDPCEBNFPAC_OFLJBEOJIGF_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* EFGLBBEBECH(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + KDPCEBNFPAC_EFGLBBEBECH_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::Promises::IPromise* DKLPBGAPIBF(::System::Func_1<::System::Boolean>* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Func_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + KDPCEBNFPAC_DKLPBGAPIBF_OFFSET))(this, a1);
		}

		::System::Void FBFMGOPECFF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDPCEBNFPAC_FBFMGOPECFF_OFFSET))(this);
		}

		::System::Void LFFNEMBCEGJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDPCEBNFPAC_LFFNEMBCEGJ_OFFSET))(this);
		}

		::System::Void LAPJBEPMKDJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDPCEBNFPAC_LAPJBEPMKDJ_OFFSET))(this);
		}

		::System::Void CKFDOMBDAEP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDPCEBNFPAC_CKFDOMBDAEP_OFFSET))(this);
		}

		::System::Void PACFOLEBMDB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDPCEBNFPAC_PACFOLEBMDB_OFFSET))(this);
		}

		::System::Void MJEGMBNICCJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDPCEBNFPAC_MJEGMBNICCJ_OFFSET))(this);
		}

		::System::Void ELJDJLGDKLF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDPCEBNFPAC_ELJDJLGDKLF_OFFSET))(this);
		}

		::System::Void EKLNKNMBFNB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDPCEBNFPAC_EKLNKNMBFNB_OFFSET))(this);
		}

		::System::Void ILBIPIDGEJG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDPCEBNFPAC_ILBIPIDGEJG_OFFSET))(this);
		}

		::System::Void MJODPHMBDOP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDPCEBNFPAC_MJODPHMBDOP_OFFSET))(this);
		}

		::System::Void OAPAHMGCFCP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDPCEBNFPAC_OAPAHMGCFCP_OFFSET))(this);
		}

		::System::Void DHIFNEKAHDB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDPCEBNFPAC_DHIFNEKAHDB_OFFSET))(this);
		}

		::RPG::GameCore::HoyoTag* KPPHIJABKIK()
		{
			return ((::RPG::GameCore::HoyoTag*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDPCEBNFPAC_KPPHIJABKIK_OFFSET))(this);
		}

		::System::Boolean CGNHLCOMPLI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KDPCEBNFPAC_CGNHLCOMPLI_OFFSET))(this);
		}

	};
