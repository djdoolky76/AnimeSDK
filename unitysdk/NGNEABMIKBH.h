#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/NGNEABMIKBH_RaidTargetStatus.h"
#include "unitysdk/IGKFNIEJGLM.h"
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class BattleRaidTargetChangeParams; }
namespace RPG::GameCore { class LevelDataComponent; }
namespace RPG::GameCore { class RaidTargetConfigRow; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define NGNEABMIKBH_ABPPHEDINPP_OFFSET UNITYSDK_OFFSET(0xC48C830)
#define NGNEABMIKBH_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xC48CCE0)
#define NGNEABMIKBH_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xC48CDD0)
#define NGNEABMIKBH_CFEJNILLELE_OFFSET UNITYSDK_OFFSET(0xC48CBF0)
#define NGNEABMIKBH_CTOR_OFFSET UNITYSDK_OFFSET(0xC48CEA0)
#define NGNEABMIKBH_DCEMPCICOPJ_OFFSET UNITYSDK_OFFSET(0xC48CA70)
#define NGNEABMIKBH_GEIOCCDNIJP_OFFSET UNITYSDK_OFFSET(0xC48CBA0)
#define NGNEABMIKBH_GET_INDEX_OFFSET UNITYSDK_OFFSET(0xC48BEA0)
#define NGNEABMIKBH_GET_TRANS_OFFSET UNITYSDK_OFFSET(0xC48BF70)
#define NGNEABMIKBH_GGJAOLBEHGP_OFFSET UNITYSDK_OFFSET(0xC48CA20)
#define NGNEABMIKBH_HNHEANGKPIA_OFFSET UNITYSDK_OFFSET(0xC48C720)
#define NGNEABMIKBH_IHOAOFMEAMI_OFFSET UNITYSDK_OFFSET(0xC48CB30)
#define NGNEABMIKBH_JIABCJLODJI_OFFSET UNITYSDK_OFFSET(0xC48C550)
#define NGNEABMIKBH_NHKJIBJGLDI_OFFSET UNITYSDK_OFFSET(0xC48C5B0)
#define NGNEABMIKBH_OLMBDNIMBGI_OFFSET UNITYSDK_OFFSET(0xC48C200)
#define NGNEABMIKBH__INITVARONCE_OFFSET UNITYSDK_OFFSET(0xC48C030)
#define NGNEABMIKBH__ONBIND_OFFSET UNITYSDK_OFFSET(0xC48BBE0)
#define NGNEABMIKBH__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xC48C6E0)
#define NGNEABMIKBH__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0xC48BFD0)
#define NGNEABMIKBH__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xC48C1B0)

inline static constexpr unsigned int NGNEABMIKBH_TypeDefinitionIndex = 73853;

	class NGNEABMIKBH : public ::FMPCODLIOLG
	{
	public:
		::RPG::GameCore::LevelDataComponent* OOGADIKBBBA; // 0x60
		::UnityEngine::UI::Text* KJOELFMHMII; // 0x68
		::UnityEngine::UI::Text* CJFEKFECNMK; // 0x70
		::UnityEngine::Transform* LKHHMNJKLJH; // 0x78
		::RPG::GameCore::BattleInstance* IFKCCHIFMOC; // 0x80
		::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::String*>* POFPGBJGPPI; // 0x88
		::UnityEngine::UI::Text* ELHNGLBLMNI; // 0x90
		::UnityEngine::Animator* CFNGLMDMENE; // 0x98
		::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::String*>* IKBDNACFFAO; // 0xA0
		::System::Int32 FLECKDIKDJA; // 0xA8
		::NGNEABMIKBH_RaidTargetStatus LODNGAGNLCB; // 0xAC
		::System::Int32 GHGGLAKNLAD; // 0xB0
		::System::UInt32 IHCPGAIAJBL; // 0xB4
		// static const ::System::String* DJCBDJMACFH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGNEABMIKBH_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGNEABMIKBH__ONBIND_OFFSET))(this);
		}

		::System::Int32 get_Index()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NGNEABMIKBH_GET_INDEX_OFFSET))(this);
		}

		::UnityEngine::Transform* get_Trans()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGNEABMIKBH_GET_TRANS_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + NGNEABMIKBH__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void _InitVarOnce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGNEABMIKBH__INITVARONCE_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGNEABMIKBH__SETUPVIEW_OFFSET))(this);
		}

		::System::Void JIABCJLODJI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NGNEABMIKBH_JIABCJLODJI_OFFSET))(this, a1);
		}

		::System::Void _OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGNEABMIKBH__ONDISPOSE_OFFSET))(this);
		}

		::System::Void NHKJIBJGLDI(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + NGNEABMIKBH_NHKJIBJGLDI_OFFSET))(this, a1, a2);
		}

		::System::Boolean GGJAOLBEHGP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NGNEABMIKBH_GGJAOLBEHGP_OFFSET))(this);
		}

		::System::Void DCEMPCICOPJ(::RPG::GameCore::BattleRaidTargetChangeParams* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleRaidTargetChangeParams*))((::PBYTE)hIl2Cpp + NGNEABMIKBH_DCEMPCICOPJ_OFFSET))(this, a1);
		}

		::System::Void OLMBDNIMBGI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGNEABMIKBH_OLMBDNIMBGI_OFFSET))(this);
		}

		::System::Void IHOAOFMEAMI(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + NGNEABMIKBH_IHOAOFMEAMI_OFFSET))(this, a1, a2);
		}

		::NGNEABMIKBH_RaidTargetStatus HNHEANGKPIA(::RPG::GameCore::RaidTargetConfigRow* a1)
		{
			return ((::NGNEABMIKBH_RaidTargetStatus(*)(::PVOID, ::RPG::GameCore::RaidTargetConfigRow*))((::PBYTE)hIl2Cpp + NGNEABMIKBH_HNHEANGKPIA_OFFSET))(this, a1);
		}

		::System::Void ABPPHEDINPP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGNEABMIKBH_ABPPHEDINPP_OFFSET))(this);
		}

		::System::UInt32 GEIOCCDNIJP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NGNEABMIKBH_GEIOCCDNIJP_OFFSET))(this);
		}

		::System::Void CFEJNILLELE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NGNEABMIKBH_CFEJNILLELE_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGNEABMIKBH_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGNEABMIKBH_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
