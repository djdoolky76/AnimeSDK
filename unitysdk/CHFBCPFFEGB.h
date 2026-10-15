#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
class EGGHMNCEMMM;
namespace RPG::Client { template <typename T> class NodeListViewPanel_1; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }

#define CHFBCPFFEGB_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xCC95DC0)
#define CHFBCPFFEGB_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xCC95F40)
#define CHFBCPFFEGB_BBPGKAAAHCH_OFFSET UNITYSDK_OFFSET(0xCC95B20)
#define CHFBCPFFEGB_BOIKDJLDKKC_OFFSET UNITYSDK_OFFSET(0xCC95940)
#define CHFBCPFFEGB_CBDJKPPNMDC_OFFSET UNITYSDK_OFFSET(0xCC957C0)
#define CHFBCPFFEGB_CTOR_OFFSET UNITYSDK_OFFSET(0xCC960A0)
#define CHFBCPFFEGB_DMAOAKCPNAA_OFFSET UNITYSDK_OFFSET(0xCC958A0)
#define CHFBCPFFEGB_EBPDLMBPLBL_OFFSET UNITYSDK_OFFSET(0xCC95850)
#define CHFBCPFFEGB_ECOHEIAHIAO_OFFSET UNITYSDK_OFFSET(0xCC95280)
#define CHFBCPFFEGB_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0xCC95390)
#define CHFBCPFFEGB_GET_INDEX_OFFSET UNITYSDK_OFFSET(0xCC95020)
#define CHFBCPFFEGB_GET_TRANS_OFFSET UNITYSDK_OFFSET(0xCC95040)
#define CHFBCPFFEGB_HJCLBHDEPKG_OFFSET UNITYSDK_OFFSET(0xCC95760)
#define CHFBCPFFEGB_KBCNINCDBLP_OFFSET UNITYSDK_OFFSET(0xCC958F0)
#define CHFBCPFFEGB_KHCBFBGMKBJ_OFFSET UNITYSDK_OFFSET(0xCC95CE0)
#define CHFBCPFFEGB_KOGOJEIKDFI_OFFSET UNITYSDK_OFFSET(0xCC95C00)
#define CHFBCPFFEGB_NIJJPBOIGBI_OFFSET UNITYSDK_OFFSET(0xCC95080)
#define CHFBCPFFEGB_PACBDGILPHI_OFFSET UNITYSDK_OFFSET(0xCC953E0)
#define CHFBCPFFEGB_SET_INDEX_OFFSET UNITYSDK_OFFSET(0xCC95030)
#define CHFBCPFFEGB__ONBIND_OFFSET UNITYSDK_OFFSET(0xCC94F20)
#define CHFBCPFFEGB___REFRESHVIEW_B__19_0_OFFSET UNITYSDK_OFFSET(0xCC960F0)
#define CHFBCPFFEGB___REFRESHVIEW_B__19_2_OFFSET UNITYSDK_OFFSET(0xCC96170)

inline static constexpr unsigned int CHFBCPFFEGB_TypeDefinitionIndex = 72319;

	class CHFBCPFFEGB : public ::FMPCODLIOLG
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>* PPNIJMHCKHN; // 0x60
		::RPG::GameCore::TurnBasedAbilityComponent* PCDEEAAIFPK; // 0x68
		::RPG::Client::NodeListViewPanel_1<::EGGHMNCEMMM*>* DLONGGHDOLM; // 0x70
		::RPG::GameCore::GameEntity* MDLFIFLPDNI; // 0x78
		::UnityEngine::UI::Button* KJIOINOOIHP; // 0x80
		::UnityEngine::Transform* BIFPANKFMND; // 0x88
		::RPG::GameCore::LevelUIComponent* GEAHNEAGEBG; // 0x90
		::System::Int32 _Index_k__BackingField; // 0x98
		// static const ::System::String* DJCBDJMACFH; // 0x0
		// static const ::System::Object EKJOICLMLOJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFBCPFFEGB_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFBCPFFEGB__ONBIND_OFFSET))(this);
		}

		::System::Int32 get_Index()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFBCPFFEGB_GET_INDEX_OFFSET))(this);
		}

		::System::Void set_Index(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CHFBCPFFEGB_SET_INDEX_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* get_Trans()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFBCPFFEGB_GET_TRANS_OFFSET))(this);
		}

		::System::Void NIJJPBOIGBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFBCPFFEGB_NIJJPBOIGBI_OFFSET))(this);
		}

		::System::Void ECOHEIAHIAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFBCPFFEGB_ECOHEIAHIAO_OFFSET))(this);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFBCPFFEGB_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void HJCLBHDEPKG(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CHFBCPFFEGB_HJCLBHDEPKG_OFFSET))(this, a1);
		}

		::System::Void CBDJKPPNMDC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CHFBCPFFEGB_CBDJKPPNMDC_OFFSET))(this, a1);
		}

		::System::Void EBPDLMBPLBL(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CHFBCPFFEGB_EBPDLMBPLBL_OFFSET))(this, a1);
		}

		::System::Void DMAOAKCPNAA(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CHFBCPFFEGB_DMAOAKCPNAA_OFFSET))(this, a1);
		}

		::System::Void KBCNINCDBLP(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CHFBCPFFEGB_KBCNINCDBLP_OFFSET))(this, a1);
		}

		::System::Void PACBDGILPHI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFBCPFFEGB_PACBDGILPHI_OFFSET))(this);
		}

		static ::System::Boolean BOIKDJLDKKC(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CHFBCPFFEGB_BOIKDJLDKKC_OFFSET))(a1);
		}

		::System::Void BBPGKAAAHCH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CHFBCPFFEGB_BBPGKAAAHCH_OFFSET))(this, a1);
		}

		::System::Void KOGOJEIKDFI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CHFBCPFFEGB_KOGOJEIKDFI_OFFSET))(this, a1);
		}

		::System::Void KHCBFBGMKBJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CHFBCPFFEGB_KHCBFBGMKBJ_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFBCPFFEGB_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFBCPFFEGB_AUTOREMOVECALLBACK_OFFSET))(this);
		}

		::System::Void __RefreshView_b__19_0(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CHFBCPFFEGB___REFRESHVIEW_B__19_0_OFFSET))(this, a1);
		}

		::System::Void __RefreshView_b__19_2(::EGGHMNCEMMM* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::EGGHMNCEMMM*, ::System::Int32))((::PBYTE)hIl2Cpp + CHFBCPFFEGB___REFRESHVIEW_B__19_2_OFFSET))(this, a1, a2);
		}

	};
