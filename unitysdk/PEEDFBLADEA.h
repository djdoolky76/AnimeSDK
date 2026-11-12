#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EAPGFKLGCDH.h"
#include "unitysdk/EDAIFMHAAMO.h"
#include "unitysdk/RPG/Client/TriggerEffectParamsRef.h"
#include "unitysdk/System/Object.h"
class AIBOPLOBAFN;
class DBMDNNBIOAI;
class KNKLCMFLDIB;
namespace RPG::Client { class MonoEffectManager; }
namespace RPG::Client { class TriggerEffectParams; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Transform; }

#define PEEDFBLADEA_AHGEAEEDALE_OFFSET UNITYSDK_OFFSET(0xC93C720)
#define PEEDFBLADEA_AKKHBLGPAIK_OFFSET UNITYSDK_OFFSET(0xC93C790)
#define PEEDFBLADEA_BDHGFLIBLAL_OFFSET UNITYSDK_OFFSET(0xC93ADC0)
#define PEEDFBLADEA_CGIDEGNHAMM_OFFSET UNITYSDK_OFFSET(0xC93BE70)
#define PEEDFBLADEA_CTOR_OFFSET UNITYSDK_OFFSET(0xC93A940)
#define PEEDFBLADEA_EDEOCGBIBDG_OFFSET UNITYSDK_OFFSET(0xC93BBF0)
#define PEEDFBLADEA_EILOJCKDIDM_OFFSET UNITYSDK_OFFSET(0xC93C630)
#define PEEDFBLADEA_EMMHDMKDDGN_OFFSET UNITYSDK_OFFSET(0xC93BBA0)
#define PEEDFBLADEA_FBICOCBNKCK_OFFSET UNITYSDK_OFFSET(0xC93BC40)
#define PEEDFBLADEA_FMIMFKCGDNJ_OFFSET UNITYSDK_OFFSET(0xC93ABA0)
#define PEEDFBLADEA_FNLEGLKFLHI_OFFSET UNITYSDK_OFFSET(0xC93C250)
#define PEEDFBLADEA_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xC93C870)
#define PEEDFBLADEA_HLJPLEFECDE_OFFSET UNITYSDK_OFFSET(0xC93B1A0)
#define PEEDFBLADEA_IJHLHPIHFKA_OFFSET UNITYSDK_OFFSET(0xC93C090)
#define PEEDFBLADEA_IJKCKAPGKDJ_OFFSET UNITYSDK_OFFSET(0xC93B4C0)
#define PEEDFBLADEA_KEPLKHCCPGP_OFFSET UNITYSDK_OFFSET(0xC93C920)
#define PEEDFBLADEA_MGABMGADOGC_OFFSET UNITYSDK_OFFSET(0xC93B890)
#define PEEDFBLADEA_NEFLLDNMFCF_OFFSET UNITYSDK_OFFSET(0xC93C5D0)
#define PEEDFBLADEA_PPBFILMMDOL_OFFSET UNITYSDK_OFFSET(0xC93A9F0)

inline static constexpr unsigned int PEEDFBLADEA_TypeDefinitionIndex = 81552;

	class PEEDFBLADEA : public ::System::Object
	{
	public:
		::RPG::Client::TriggerEffectParamsRef BAKEHMBJDKA; // 0x10
		::KNKLCMFLDIB* JNGDDKMLMII; // 0x20
		::AIBOPLOBAFN* CPHJKNHPDKH; // 0x28
		::AIBOPLOBAFN* LJPBKKELFPJ; // 0x30
		::EDAIFMHAAMO PJMIDIFDEDA; // 0x38
		::EAPGFKLGCDH HABBENPOGCC; // 0x80
		::DBMDNNBIOAI* DGHLMHHAOAI; // 0x90
		::RPG::Client::TriggerEffectParamsRef NDHKEGODJFH; // 0x98
		::EAPGFKLGCDH ICEBMMMCIML; // 0xA8
		::System::Action_2<::System::Int32, ::System::Boolean>* OMNAPHCMNBI; // 0xB8
		::System::Boolean KJGGJNJLHND; // 0xC0
		::System::Byte _padding0[0x3];
		::System::Int32 GFEHMJBPPJL; // 0xC4
		::System::Int32 NKBNNNNNAEB; // 0xC8
		// static const ::System::String* LNMHEILEDFC; // 0x0
		::System::Void _ctor(::KNKLCMFLDIB* a1, ::EDAIFMHAAMO a2)
		{
			return ((::System::Void(*)(::PVOID, ::KNKLCMFLDIB*, ::EDAIFMHAAMO))((::PBYTE)hIl2Cpp + PEEDFBLADEA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void PPBFILMMDOL(::System::Int32 a1, ::System::Action_2<::System::Int32, ::System::Boolean>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_2<::System::Int32, ::System::Boolean>*))((::PBYTE)hIl2Cpp + PEEDFBLADEA_PPBFILMMDOL_OFFSET))(this, a1, a2);
		}

		::System::Void BDHGFLIBLAL(::RPG::Client::MonoEffectManager* a1, ::UnityEngine::Transform* a2, ::System::Single a3, ::System::Int32 a4, ::System::Func_2<::System::Int32, ::System::Boolean>* a5, ::System::Action_1<::System::Int32>* a6, ::System::Action_1<::System::Int32>* a7)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffectManager*, ::UnityEngine::Transform*, ::System::Single, ::System::Int32, ::System::Func_2<::System::Int32, ::System::Boolean>*, ::System::Action_1<::System::Int32>*, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + PEEDFBLADEA_BDHGFLIBLAL_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void IJKCKAPGKDJ(::RPG::Client::MonoEffectManager* a1, ::UnityEngine::Transform* a2, ::System::Single a3, ::System::Int32 a4, ::System::Func_2<::System::Int32, ::System::Boolean>* a5, ::System::Action_1<::System::Int32>* a6, ::System::Action_1<::System::Int32>* a7)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffectManager*, ::UnityEngine::Transform*, ::System::Single, ::System::Int32, ::System::Func_2<::System::Int32, ::System::Boolean>*, ::System::Action_1<::System::Int32>*, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + PEEDFBLADEA_IJKCKAPGKDJ_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void EMMHDMKDDGN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEEDFBLADEA_EMMHDMKDDGN_OFFSET))(this);
		}

		::System::Void EDEOCGBIBDG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEEDFBLADEA_EDEOCGBIBDG_OFFSET))(this);
		}

		::System::Void FBICOCBNKCK(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PEEDFBLADEA_FBICOCBNKCK_OFFSET))(this, a1);
		}

		::System::Void CGIDEGNHAMM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PEEDFBLADEA_CGIDEGNHAMM_OFFSET))(this, a1);
		}

		::System::Void IJHLHPIHFKA(::RPG::Client::MonoEffectManager* a1, ::RPG::GameCore::GameEntity* a2, ::System::Boolean a3, ::System::Int32 a4, ::System::Action_1<::System::Int32>* a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffectManager*, ::RPG::GameCore::GameEntity*, ::System::Boolean, ::System::Int32, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + PEEDFBLADEA_IJHLHPIHFKA_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void NEFLLDNMFCF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEEDFBLADEA_NEFLLDNMFCF_OFFSET))(this);
		}

		::System::Void EILOJCKDIDM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEEDFBLADEA_EILOJCKDIDM_OFFSET))(this);
		}

		::System::Void AHGEAEEDALE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEEDFBLADEA_AHGEAEEDALE_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEEDFBLADEA_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void FMIMFKCGDNJ(::System::String* a1, ::System::Int32 a2, ::System::Action_1<::System::Boolean>* a3, ::AIBOPLOBAFN* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Action_1<::System::Boolean>*, ::AIBOPLOBAFN*))((::PBYTE)hIl2Cpp + PEEDFBLADEA_FMIMFKCGDNJ_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void KEPLKHCCPGP(::System::Int32 a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + PEEDFBLADEA_KEPLKHCCPGP_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void AKKHBLGPAIK(::AIBOPLOBAFN* a1)
		{
			return ((::System::Void(*)(::AIBOPLOBAFN*))((::PBYTE)hIl2Cpp + PEEDFBLADEA_AKKHBLGPAIK_OFFSET))(a1);
		}

		::System::Void HLJPLEFECDE(::RPG::Client::TriggerEffectParamsRef a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TriggerEffectParamsRef))((::PBYTE)hIl2Cpp + PEEDFBLADEA_HLJPLEFECDE_OFFSET))(this, a1);
		}

		::System::Void MGABMGADOGC(::RPG::Client::TriggerEffectParamsRef a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TriggerEffectParamsRef))((::PBYTE)hIl2Cpp + PEEDFBLADEA_MGABMGADOGC_OFFSET))(this, a1);
		}

		::System::Void FNLEGLKFLHI(::RPG::Client::MonoEffectManager* a1, ::RPG::Client::TriggerEffectParams* a2, ::System::Int32 a3, ::System::Action_1<::System::Int32>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffectManager*, ::RPG::Client::TriggerEffectParams*, ::System::Int32, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + PEEDFBLADEA_FNLEGLKFLHI_OFFSET))(this, a1, a2, a3, a4);
		}

	};
