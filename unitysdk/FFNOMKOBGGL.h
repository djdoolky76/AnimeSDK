#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CLKDGILIGID.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AvatarBaseType.h"
#include "unitysdk/RPG/GameCore/BattleModeState.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Rect.h"
class GFDEOBDBACI;
class HEAIEBHLCMJ;
class POEGKFEADIE;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RtDefenceUnitRow; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Sprite; }

#define FFNOMKOBGGL_BBHENHEBIOK_OFFSET UNITYSDK_OFFSET(0x16668B10)
#define FFNOMKOBGGL_COJLHOBLJJC_OFFSET UNITYSDK_OFFSET(0x166692A0)
#define FFNOMKOBGGL_CTOR_OFFSET UNITYSDK_OFFSET(0x1666B4D0)
#define FFNOMKOBGGL_DAJAOCIFIIJ_OFFSET UNITYSDK_OFFSET(0x1666AA00)
#define FFNOMKOBGGL_DCOJAANDFHK_OFFSET UNITYSDK_OFFSET(0x16667B30)
#define FFNOMKOBGGL_DPDBANIBKNK_OFFSET UNITYSDK_OFFSET(0x1666B320)
#define FFNOMKOBGGL_EHHBCFDELPP_OFFSET UNITYSDK_OFFSET(0x16669120)
#define FFNOMKOBGGL_FCJNNDOPIBC_OFFSET UNITYSDK_OFFSET(0x1666AE80)
#define FFNOMKOBGGL_FLNPJJJHJDM_OFFSET UNITYSDK_OFFSET(0x16666C60)
#define FFNOMKOBGGL_HADLGNOEGDP_OFFSET UNITYSDK_OFFSET(0x166672F0)
#define FFNOMKOBGGL_HNCPAMEKOIF_OFFSET UNITYSDK_OFFSET(0x1666AC50)
#define FFNOMKOBGGL_IPFPDDLMKDK_OFFSET UNITYSDK_OFFSET(0x16667D60)
#define FFNOMKOBGGL_JKCPLEJCBML_OFFSET UNITYSDK_OFFSET(0x16666450)
#define FFNOMKOBGGL_KIAHMOEKJOI_OFFSET UNITYSDK_OFFSET(0x16666600)
#define FFNOMKOBGGL_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x16666330)
#define FFNOMKOBGGL_LPAODKMIHIM_OFFSET UNITYSDK_OFFSET(0x166667B0)
#define FFNOMKOBGGL_MCGLCFMIHNG_OFFSET UNITYSDK_OFFSET(0x166669E0)
#define FFNOMKOBGGL_MEBHOAAGNMF_OFFSET UNITYSDK_OFFSET(0x1666AD90)
#define FFNOMKOBGGL_NIOPHAGCJBC_OFFSET UNITYSDK_OFFSET(0x1666AFC0)
#define FFNOMKOBGGL_OECFPANDLJC_OFFSET UNITYSDK_OFFSET(0x1666A6D0)
#define FFNOMKOBGGL_OKNKAKNGGIL_OFFSET UNITYSDK_OFFSET(0x16669AF0)
#define FFNOMKOBGGL_ONGUI_OFFSET UNITYSDK_OFFSET(0x16666BE0)
#define FFNOMKOBGGL_PDDADMOMFEC_OFFSET UNITYSDK_OFFSET(0x16669AB0)

inline static constexpr unsigned int FFNOMKOBGGL_TypeDefinitionIndex = 75392;

	class FFNOMKOBGGL : public ::CLKDGILIGID
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::UnityEngine::Sprite*>* PIMGPEJHKMN; // 0x48
		::POEGKFEADIE* BHJDJDPLCLP; // 0x50
		::Il2CppArray<::System::UInt32>* GDFGADOBBKO; // 0x58
		::System::Collections::Generic::List_1<::System::Object*>* EPMNHJCEGAI; // 0x60
		::GFDEOBDBACI* NHNHKBJJKPP; // 0x68
		::RPG::GameCore::GameEntity* OEPKHHNJALN; // 0x70
		::System::Collections::Generic::List_1<::System::Object*>* JHCEIJKJDLH; // 0x78
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::RPG::Client::TextID>* FMKLEHNLFBH; // 0x80
		::System::Collections::Generic::List_1<::System::Object*>* OBHEJIKAMCC; // 0x88
		::HEAIEBHLCMJ* DLALHGJDNNO; // 0x90
		::System::UInt32 OCCMPAPNCAC; // 0x98
		::System::UInt32 JCLFHJEDBIK; // 0x9C
		::UnityEngine::Vector2 EBHIHGALIAE; // 0xA0
		::System::Boolean DLIHKHCLFGM; // 0xA8
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFNOMKOBGGL_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::GFDEOBDBACI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GFDEOBDBACI*))((::PBYTE)hIl2Cpp + FFNOMKOBGGL_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void JKCPLEJCBML()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFNOMKOBGGL_JKCPLEJCBML_OFFSET))(this);
		}

		::System::Void LPAODKMIHIM(::RPG::GameCore::BattleModeState a1, ::RPG::GameCore::BattleModeState a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleModeState, ::RPG::GameCore::BattleModeState))((::PBYTE)hIl2Cpp + FFNOMKOBGGL_LPAODKMIHIM_OFFSET))(this, a1, a2);
		}

		::System::Void OnGUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFNOMKOBGGL_ONGUI_OFFSET))(this);
		}

		::System::Void FLNPJJJHJDM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFNOMKOBGGL_FLNPJJJHJDM_OFFSET))(this);
		}

		::System::Void COJLHOBLJJC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFNOMKOBGGL_COJLHOBLJJC_OFFSET))(this);
		}

		::System::Void PDDADMOMFEC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFNOMKOBGGL_PDDADMOMFEC_OFFSET))(this);
		}

		::System::Boolean OKNKAKNGGIL(::UnityEngine::Rect a1, ::RPG::GameCore::RtDefenceUnitRow* a2, ::UnityEngine::Color a3, ::System::Boolean a4, ::System::Boolean a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rect, ::RPG::GameCore::RtDefenceUnitRow*, ::UnityEngine::Color, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + FFNOMKOBGGL_OKNKAKNGGIL_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void OECFPANDLJC(::UnityEngine::Rect a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect, ::System::UInt32))((::PBYTE)hIl2Cpp + FFNOMKOBGGL_OECFPANDLJC_OFFSET))(this, a1, a2);
		}

		::System::Void IPFPDDLMKDK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFNOMKOBGGL_IPFPDDLMKDK_OFFSET))(this);
		}

		::System::Void EHHBCFDELPP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFNOMKOBGGL_EHHBCFDELPP_OFFSET))(this);
		}

		::System::Void MCGLCFMIHNG(::System::String* a1, ::UnityEngine::Color a2, ::System::Single a3, ::UnityEngine::Vector2 a4, ::UnityEngine::Vector2 a5, ::UnityEngine::Vector2 a6, ::UnityEngine::Vector2 a7, ::System::Single a8, ::System::Single a9)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Color, ::System::Single, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FFNOMKOBGGL_MCGLCFMIHNG_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		::System::Void BBHENHEBIOK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFNOMKOBGGL_BBHENHEBIOK_OFFSET))(this);
		}

		::System::Void DCOJAANDFHK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFNOMKOBGGL_DCOJAANDFHK_OFFSET))(this);
		}

		::System::Void HADLGNOEGDP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFNOMKOBGGL_HADLGNOEGDP_OFFSET))(this);
		}

		::System::Void DAJAOCIFIIJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFNOMKOBGGL_DAJAOCIFIIJ_OFFSET))(this);
		}

		::System::String* HNCPAMEKOIF(::RPG::GameCore::AvatarBaseType a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::AvatarBaseType))((::PBYTE)hIl2Cpp + FFNOMKOBGGL_HNCPAMEKOIF_OFFSET))(this, a1);
		}

		::UnityEngine::Color MEBHOAAGNMF(::RPG::GameCore::AttackDamageType a1)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + FFNOMKOBGGL_MEBHOAAGNMF_OFFSET))(this, a1);
		}

		::System::String* FCJNNDOPIBC(::RPG::GameCore::AttackDamageType a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + FFNOMKOBGGL_FCJNNDOPIBC_OFFSET))(this, a1);
		}

		::System::Void NIOPHAGCJBC(::UnityEngine::Rect a1, ::UnityEngine::Sprite* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect, ::UnityEngine::Sprite*))((::PBYTE)hIl2Cpp + FFNOMKOBGGL_NIOPHAGCJBC_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Sprite* DPDBANIBKNK(::RPG::GameCore::AttackDamageType a1)
		{
			return ((::UnityEngine::Sprite*(*)(::PVOID, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + FFNOMKOBGGL_DPDBANIBKNK_OFFSET))(this, a1);
		}

		::System::Void KIAHMOEKJOI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFNOMKOBGGL_KIAHMOEKJOI_OFFSET))(this);
		}

	};
