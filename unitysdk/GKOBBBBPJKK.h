#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FFHBHCGJMHL.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class HHPKNCPMPOJ;
class OHOGLCBLOHP;
namespace RPG::Client::Prop { class OpticalIllusionPuzzleBoard; }
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }

#define GKOBBBBPJKK_ADEFMDFMCPN_OFFSET UNITYSDK_OFFSET(0x15A9ACF0)
#define GKOBBBBPJKK_AGGKCBGGPHN_OFFSET UNITYSDK_OFFSET(0x15A9B150)
#define GKOBBBBPJKK_CCIHHOFGAPF_OFFSET UNITYSDK_OFFSET(0x15A9BA00)
#define GKOBBBBPJKK_CCTOR_OFFSET UNITYSDK_OFFSET(0x15A9BF50)
#define GKOBBBBPJKK_CONHCMOGADH_OFFSET UNITYSDK_OFFSET(0x15A9BF10)
#define GKOBBBBPJKK_CTOR_OFFSET UNITYSDK_OFFSET(0x15A9A7F0)
#define GKOBBBBPJKK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15A9A800)
#define GKOBBBBPJKK_DMBNFDKPLCL_OFFSET UNITYSDK_OFFSET(0x15A9AE00)
#define GKOBBBBPJKK_EBDIMKLGANH_OFFSET UNITYSDK_OFFSET(0x15A9A8A0)
#define GKOBBBBPJKK_GET_ANIMATORMOVECALLBACKORDER_OFFSET UNITYSDK_OFFSET(0x15A9BF20)
#define GKOBBBBPJKK_GET_ENABLEANIMATORMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x15A9BF30)
#define GKOBBBBPJKK_GGFLBGEBJON_OFFSET UNITYSDK_OFFSET(0x15A9BA50)
#define GKOBBBBPJKK_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x15A9A920)
#define GKOBBBBPJKK_MAABIMKNCOI_OFFSET UNITYSDK_OFFSET(0x15A9ABA0)
#define GKOBBBBPJKK_ONANIMATORMOVE_OFFSET UNITYSDK_OFFSET(0x15A9BC40)
#define GKOBBBBPJKK_PGMEGIAGOLL_OFFSET UNITYSDK_OFFSET(0x15A9AD50)
#define GKOBBBBPJKK_PKPILICMLIJ_OFFSET UNITYSDK_OFFSET(0x15A9B300)
#define GKOBBBBPJKK_SET_ENABLEANIMATORMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x15A9BF40)

inline static constexpr unsigned int GKOBBBBPJKK_TypeDefinitionIndex = 78696;

	class GKOBBBBPJKK : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x10
		::FFHBHCGJMHL EHOCJEBKJJB; // 0x18
		::RPG::GameCore::AdventureCharacterController* CPIIOIPAAKK; // 0x28
		::OHOGLCBLOHP* BJLJAHMLKIO; // 0x30
		::System::Collections::Generic::List_1<::HHPKNCPMPOJ*>* OINCGJJMAEF; // 0x38
		::RPG::Client::Prop::OpticalIllusionPuzzleBoard* MIPPNCGOJNM; // 0x40
		::System::Int32 NFJPJEHHPEG; // 0x48
		::UnityEngine::Vector3 KKKEEGKCINC; // 0x4C
		::System::Boolean LFJHKGPGMKN; // 0x58
		::System::Boolean _EnableAnimatorMoveCallback_k__BackingField; // 0x59
		static ::System::Single* StaticGet_LKAEFBPDAOK()
		{
			return (::System::Single*)UnitySDK::FromName("", "GKOBBBBPJKK")->GetStaticField(0x150A0);
		}

		::System::Void _ctor(::RPG::Client::Prop::OpticalIllusionPuzzleBoard* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::OpticalIllusionPuzzleBoard*))((::PBYTE)hIl2Cpp + GKOBBBBPJKK_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GKOBBBBPJKK_CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKOBBBBPJKK_DISPOSE_OFFSET))(this);
		}

		::System::Void EBDIMKLGANH(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + GKOBBBBPJKK_EBDIMKLGANH_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GKOBBBBPJKK_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Boolean PKPILICMLIJ(::System::Collections::Generic::List_1<::HHPKNCPMPOJ*>* a1, ::OHOGLCBLOHP* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::HHPKNCPMPOJ*>*, ::OHOGLCBLOHP*))((::PBYTE)hIl2Cpp + GKOBBBBPJKK_PKPILICMLIJ_OFFSET))(this, a1, a2);
		}

		::System::Void CCIHHOFGAPF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKOBBBBPJKK_CCIHHOFGAPF_OFFSET))(this);
		}

		::System::Boolean MAABIMKNCOI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GKOBBBBPJKK_MAABIMKNCOI_OFFSET))(this);
		}

		::System::Boolean ADEFMDFMCPN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GKOBBBBPJKK_ADEFMDFMCPN_OFFSET))(this);
		}

		::System::Void AGGKCBGGPHN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKOBBBBPJKK_AGGKCBGGPHN_OFFSET))(this);
		}

		::System::Void PGMEGIAGOLL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKOBBBBPJKK_PGMEGIAGOLL_OFFSET))(this);
		}

		::System::Void DMBNFDKPLCL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKOBBBBPJKK_DMBNFDKPLCL_OFFSET))(this);
		}

		::System::Void GGFLBGEBJON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKOBBBBPJKK_GGFLBGEBJON_OFFSET))(this);
		}

		::System::Void OnAnimatorMove(::UnityEngine::Animator* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + GKOBBBBPJKK_ONANIMATORMOVE_OFFSET))(this, a1);
		}

		::System::Boolean CONHCMOGADH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GKOBBBBPJKK_CONHCMOGADH_OFFSET))(this);
		}

		::System::Int32 get_AnimatorMoveCallbackOrder()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKOBBBBPJKK_GET_ANIMATORMOVECALLBACKORDER_OFFSET))(this);
		}

		::System::Boolean get_EnableAnimatorMoveCallback()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GKOBBBBPJKK_GET_ENABLEANIMATORMOVECALLBACK_OFFSET))(this);
		}

		::System::Void set_EnableAnimatorMoveCallback(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GKOBBBBPJKK_SET_ENABLEANIMATORMOVECALLBACK_OFFSET))(this, a1);
		}

	};
