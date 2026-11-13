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

#define GKOBBBBPJKK_ADEFMDFMCPN_OFFSET UNITYSDK_OFFSET(0x1A8E1FE0)
#define GKOBBBBPJKK_AGGKCBGGPHN_OFFSET UNITYSDK_OFFSET(0x1A8E2440)
#define GKOBBBBPJKK_CCIHHOFGAPF_OFFSET UNITYSDK_OFFSET(0x1A8E2CF0)
#define GKOBBBBPJKK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1A8E3240)
#define GKOBBBBPJKK_CONHCMOGADH_OFFSET UNITYSDK_OFFSET(0x1A8E3200)
#define GKOBBBBPJKK_CTOR_OFFSET UNITYSDK_OFFSET(0x1A8E1AE0)
#define GKOBBBBPJKK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A8E1AF0)
#define GKOBBBBPJKK_DMBNFDKPLCL_OFFSET UNITYSDK_OFFSET(0x1A8E20F0)
#define GKOBBBBPJKK_EBDIMKLGANH_OFFSET UNITYSDK_OFFSET(0x1A8E1B90)
#define GKOBBBBPJKK_GET_ANIMATORMOVECALLBACKORDER_OFFSET UNITYSDK_OFFSET(0x1A8E3210)
#define GKOBBBBPJKK_GET_ENABLEANIMATORMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x1A8E3220)
#define GKOBBBBPJKK_GGFLBGEBJON_OFFSET UNITYSDK_OFFSET(0x1A8E2D40)
#define GKOBBBBPJKK_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1A8E1C10)
#define GKOBBBBPJKK_MAABIMKNCOI_OFFSET UNITYSDK_OFFSET(0x1A8E1E90)
#define GKOBBBBPJKK_ONANIMATORMOVE_OFFSET UNITYSDK_OFFSET(0x1A8E2F30)
#define GKOBBBBPJKK_PGMEGIAGOLL_OFFSET UNITYSDK_OFFSET(0x1A8E2040)
#define GKOBBBBPJKK_PKPILICMLIJ_OFFSET UNITYSDK_OFFSET(0x1A8E25F0)
#define GKOBBBBPJKK_SET_ENABLEANIMATORMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x1A8E3230)

inline static constexpr unsigned int GKOBBBBPJKK_TypeDefinitionIndex = 81431;

	class GKOBBBBPJKK : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x10
		::FFHBHCGJMHL EHOCJEBKJJB; // 0x18
		::OHOGLCBLOHP* BJLJAHMLKIO; // 0x28
		::RPG::GameCore::AdventureCharacterController* CPIIOIPAAKK; // 0x30
		::System::Collections::Generic::List_1<::HHPKNCPMPOJ*>* OINCGJJMAEF; // 0x38
		::RPG::Client::Prop::OpticalIllusionPuzzleBoard* MIPPNCGOJNM; // 0x40
		::UnityEngine::Vector3 KKKEEGKCINC; // 0x48
		::System::Boolean LFJHKGPGMKN; // 0x54
		::System::Boolean _EnableAnimatorMoveCallback_k__BackingField; // 0x55
		::System::Byte _padding0[0x2];
		::System::Int32 NFJPJEHHPEG; // 0x58
		static ::System::Single* StaticGet_LKAEFBPDAOK()
		{
			return (::System::Single*)UnitySDK::FromName("", "GKOBBBBPJKK")->GetStaticField(0x158A0);
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
