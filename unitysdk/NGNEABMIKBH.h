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

#define NGNEABMIKBH_ABPPHEDINPP_OFFSET UNITYSDK_OFFSET(0xBBAA390)
#define NGNEABMIKBH_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xBBAA820)
#define NGNEABMIKBH_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xBBAA910)
#define NGNEABMIKBH_CFEJNILLELE_OFFSET UNITYSDK_OFFSET(0xBBAA730)
#define NGNEABMIKBH_CTOR_OFFSET UNITYSDK_OFFSET(0xBBAA9E0)
#define NGNEABMIKBH_DCEMPCICOPJ_OFFSET UNITYSDK_OFFSET(0xBBAA5B0)
#define NGNEABMIKBH_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0xBBA9B40)
#define NGNEABMIKBH_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0xBBA9D10)
#define NGNEABMIKBH_GEIOCCDNIJP_OFFSET UNITYSDK_OFFSET(0xBBAA6E0)
#define NGNEABMIKBH_GET_INDEX_OFFSET UNITYSDK_OFFSET(0xBBA9A20)
#define NGNEABMIKBH_GET_TRANS_OFFSET UNITYSDK_OFFSET(0xBBA9AE0)
#define NGNEABMIKBH_GGJAOLBEHGP_OFFSET UNITYSDK_OFFSET(0xBBAA560)
#define NGNEABMIKBH_HNHEANGKPIA_OFFSET UNITYSDK_OFFSET(0xBBAA280)
#define NGNEABMIKBH_IHOAOFMEAMI_OFFSET UNITYSDK_OFFSET(0xBBAA670)
#define NGNEABMIKBH_JIABCJLODJI_OFFSET UNITYSDK_OFFSET(0xBBAA0B0)
#define NGNEABMIKBH_NHKJIBJGLDI_OFFSET UNITYSDK_OFFSET(0xBBAA110)
#define NGNEABMIKBH_NIJJPBOIGBI_OFFSET UNITYSDK_OFFSET(0xBBA9BA0)
#define NGNEABMIKBH_OLMBDNIMBGI_OFFSET UNITYSDK_OFFSET(0xBBA9D60)
#define NGNEABMIKBH__ONBIND_OFFSET UNITYSDK_OFFSET(0xBBA98D0)
#define NGNEABMIKBH__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xBBAA240)

inline static constexpr unsigned int NGNEABMIKBH_TypeDefinitionIndex = 71831;

	class NGNEABMIKBH : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::UI::Text* CJFEKFECNMK; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::String*>* IKBDNACFFAO; // 0x68
		::RPG::GameCore::BattleInstance* IFKCCHIFMOC; // 0x70
		::UnityEngine::Animator* CFNGLMDMENE; // 0x78
		::UnityEngine::UI::Text* ELHNGLBLMNI; // 0x80
		::RPG::GameCore::LevelDataComponent* OOGADIKBBBA; // 0x88
		::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::String*>* POFPGBJGPPI; // 0x90
		::UnityEngine::UI::Text* KJOELFMHMII; // 0x98
		::UnityEngine::Transform* LKHHMNJKLJH; // 0xA0
		::NGNEABMIKBH_RaidTargetStatus LODNGAGNLCB; // 0xA8
		::System::UInt32 IHCPGAIAJBL; // 0xAC
		::System::Int32 FLECKDIKDJA; // 0xB0
		::System::Int32 GHGGLAKNLAD; // 0xB4
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

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + NGNEABMIKBH_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void NIJJPBOIGBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGNEABMIKBH_NIJJPBOIGBI_OFFSET))(this);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGNEABMIKBH_EKGCGIDIFJJ_OFFSET))(this);
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
