#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharaStoryMoveState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class CharacterInputData; }
namespace RPG::GameCore { class GameEntity; }
namespace RPGTools::Timeline { class CharacterStoryMoveData; }
namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }

#define IECNEMPGKJL_AEGMLJMJBDO_OFFSET UNITYSDK_OFFSET(0x177A7C90)
#define IECNEMPGKJL_BFFPIEOBNBE_OFFSET UNITYSDK_OFFSET(0x177A7040)
#define IECNEMPGKJL_BMLAHBDBPPC_OFFSET UNITYSDK_OFFSET(0x177A7C30)
#define IECNEMPGKJL_CTOR_OFFSET UNITYSDK_OFFSET(0x177A81C0)
#define IECNEMPGKJL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x177A5CD0)
#define IECNEMPGKJL_DNNFJCBMFHP_OFFSET UNITYSDK_OFFSET(0x177A5C30)
#define IECNEMPGKJL_EBGGGDOPEDM_OFFSET UNITYSDK_OFFSET(0x177A78A0)
#define IECNEMPGKJL_GET_CURRENTMOVESTATE_OFFSET UNITYSDK_OFFSET(0x177A5930)
#define IECNEMPGKJL_GKAJOHLHPLD_OFFSET UNITYSDK_OFFSET(0x177A5950)
#define IECNEMPGKJL_GKKEGIFCLHF_OFFSET UNITYSDK_OFFSET(0x177A7860)
#define IECNEMPGKJL_HGNJHJPJPGD_1_OFFSET UNITYSDK_OFFSET(0x177A7A30)
#define IECNEMPGKJL_HGNJHJPJPGD_OFFSET UNITYSDK_OFFSET(0x177A79A0)
#define IECNEMPGKJL_HNACEOPGELH_OFFSET UNITYSDK_OFFSET(0x177A5970)
#define IECNEMPGKJL_IPCAPLLMHFP_OFFSET UNITYSDK_OFFSET(0x177A77D0)
#define IECNEMPGKJL_IPEHLAKBFHB_OFFSET UNITYSDK_OFFSET(0x177A5A40)
#define IECNEMPGKJL_JIGIHEMJHLO_OFFSET UNITYSDK_OFFSET(0x177A7620)
#define IECNEMPGKJL_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x177A6980)
#define IECNEMPGKJL_JMNODNLAOKK_OFFSET UNITYSDK_OFFSET(0x177A6440)
#define IECNEMPGKJL_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x177A5D20)
#define IECNEMPGKJL_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x177A5EE0)
#define IECNEMPGKJL_LMNDPBPJPNC_OFFSET UNITYSDK_OFFSET(0x177A5BE0)
#define IECNEMPGKJL_LOOKPMFANOK_OFFSET UNITYSDK_OFFSET(0x177A5B10)
#define IECNEMPGKJL_MKNHDEGGNFF_OFFSET UNITYSDK_OFFSET(0x177A6E60)
#define IECNEMPGKJL_MOCPCLHLAHK_OFFSET UNITYSDK_OFFSET(0x177A70A0)
#define IECNEMPGKJL_NLLCMKEIKCA_OFFSET UNITYSDK_OFFSET(0x177A68D0)
#define IECNEMPGKJL_OMBJCAKELMK_OFFSET UNITYSDK_OFFSET(0x177A5C80)
#define IECNEMPGKJL_PFLPLEHIGIA_OFFSET UNITYSDK_OFFSET(0x177A7820)
#define IECNEMPGKJL_SET_CURRENTMOVESTATE_OFFSET UNITYSDK_OFFSET(0x177A5940)

inline static constexpr unsigned int IECNEMPGKJL_TypeDefinitionIndex = 54776;

	class IECNEMPGKJL : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* ICHEDAEHEBG; // 0x10
		::UnityEngine::Animator* APPGGMLEPLN; // 0x18
		::RPGTools::Timeline::CharacterStoryMoveData* IGHAHBNLIJA; // 0x20
		::RPG::GameCore::AdventureCharacterController* KMAHMFPKIOI; // 0x28
		::UnityEngine::Transform* PDJGEDNLBKJ; // 0x30
		::UnityEngine::Vector3 JFLMPGIPCIA; // 0x38
		::UnityEngine::Vector3 IHLPFCONLAP; // 0x44
		::System::Single KCMOHJEDEMK; // 0x50
		::System::Single GDKGCIHCKFP; // 0x54
		::System::Single BEEHHBEGPBG; // 0x58
		::System::Single HNFOFDDACPP; // 0x5C
		::System::Boolean HBIKMNHDANJ; // 0x60
		::System::Byte _padding0[0x3];
		::System::Int32 NICLFKHCJPI; // 0x64
		::System::Single PJJLEJDPNHI; // 0x68
		::UnityEngine::Vector3 CCIPMOJDNHE; // 0x6C
		::UnityEngine::Vector3 BJNKIKNBFOJ; // 0x78
		::System::Single CNJPFIIHCHK; // 0x84
		::System::Single NCENNMCAPJH; // 0x88
		::RPG::GameCore::CharaStoryMoveState _CurrentMoveState_k__BackingField; // 0x8C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IECNEMPGKJL_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::CharaStoryMoveState get_CurrentMoveState()
		{
			return ((::RPG::GameCore::CharaStoryMoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + IECNEMPGKJL_GET_CURRENTMOVESTATE_OFFSET))(this);
		}

		::System::Void set_CurrentMoveState(::RPG::GameCore::CharaStoryMoveState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharaStoryMoveState))((::PBYTE)hIl2Cpp + IECNEMPGKJL_SET_CURRENTMOVESTATE_OFFSET))(this, a1);
		}

		::System::Single GKAJOHLHPLD()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IECNEMPGKJL_GKAJOHLHPLD_OFFSET))(this);
		}

		::System::Single HNACEOPGELH()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IECNEMPGKJL_HNACEOPGELH_OFFSET))(this);
		}

		::System::Single IPEHLAKBFHB()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IECNEMPGKJL_IPEHLAKBFHB_OFFSET))(this);
		}

		::System::Single LOOKPMFANOK()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IECNEMPGKJL_LOOKPMFANOK_OFFSET))(this);
		}

		::System::Single LMNDPBPJPNC()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IECNEMPGKJL_LMNDPBPJPNC_OFFSET))(this);
		}

		::System::Single DNNFJCBMFHP()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IECNEMPGKJL_DNNFJCBMFHP_OFFSET))(this);
		}

		::System::Single OMBJCAKELMK()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IECNEMPGKJL_OMBJCAKELMK_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IECNEMPGKJL_DISPOSE_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IECNEMPGKJL_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::RPGTools::Timeline::CharacterStoryMoveData* a1, ::RPG::GameCore::GameEntity* a2, ::UnityEngine::Animator* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::CharacterStoryMoveData*, ::RPG::GameCore::GameEntity*, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + IECNEMPGKJL_KPJGDHLENIP_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector3 JMNODNLAOKK(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + IECNEMPGKJL_JMNODNLAOKK_OFFSET))(this, a1, a2);
		}

		::System::Void JLANKNHFKCN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IECNEMPGKJL_JLANKNHFKCN_OFFSET))(this);
		}

		::System::Void MOCPCLHLAHK(::RPG::GameCore::CharacterInputData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterInputData*))((::PBYTE)hIl2Cpp + IECNEMPGKJL_MOCPCLHLAHK_OFFSET))(this, a1);
		}

		::System::Boolean IPCAPLLMHFP(::UnityEngine::AnimatorStateInfo a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::AnimatorStateInfo))((::PBYTE)hIl2Cpp + IECNEMPGKJL_IPCAPLLMHFP_OFFSET))(this, a1);
		}

		::System::Void PFLPLEHIGIA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IECNEMPGKJL_PFLPLEHIGIA_OFFSET))(this);
		}

		::System::Void GKKEGIFCLHF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IECNEMPGKJL_GKKEGIFCLHF_OFFSET))(this);
		}

		::System::Single EBGGGDOPEDM(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + IECNEMPGKJL_EBGGGDOPEDM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void MKNHDEGGNFF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IECNEMPGKJL_MKNHDEGGNFF_OFFSET))(this);
		}

		::System::Single NLLCMKEIKCA(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + IECNEMPGKJL_NLLCMKEIKCA_OFFSET))(this, a1, a2);
		}

		::System::Single HGNJHJPJPGD()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IECNEMPGKJL_HGNJHJPJPGD_OFFSET))(this);
		}

		::System::Single HGNJHJPJPGD_1(::UnityEngine::Vector3 a1)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + IECNEMPGKJL_HGNJHJPJPGD_1_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 JIGIHEMJHLO()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + IECNEMPGKJL_JIGIHEMJHLO_OFFSET))(this);
		}

		::System::Boolean BFFPIEOBNBE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IECNEMPGKJL_BFFPIEOBNBE_OFFSET))(this);
		}

		::System::Void BMLAHBDBPPC(::System::String* a1, ::System::Single a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + IECNEMPGKJL_BMLAHBDBPPC_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean AEGMLJMJBDO(::RPG::GameCore::AdventureCharacterController* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AdventureCharacterController*))((::PBYTE)hIl2Cpp + IECNEMPGKJL_AEGMLJMJBDO_OFFSET))(this, a1);
		}

	};
