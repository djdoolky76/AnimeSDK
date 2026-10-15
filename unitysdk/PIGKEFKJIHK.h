#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
#include "unitysdk/UnityEngine/Color.h"
class KGMPJMIAPCI;
namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::Client { class UIStateCtrl; }
namespace RPG::GameCore { class CharacterDataComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define PIGKEFKJIHK_AKKPEONJFFK_OFFSET UNITYSDK_OFFSET(0xC259AF0)
#define PIGKEFKJIHK_BDIMMJOLPBI_OFFSET UNITYSDK_OFFSET(0xC258700)
#define PIGKEFKJIHK_BLMMLCJILNP_OFFSET UNITYSDK_OFFSET(0xC2595F0)
#define PIGKEFKJIHK_BNOLPPNMAOA_OFFSET UNITYSDK_OFFSET(0xC259F50)
#define PIGKEFKJIHK_CTOR_OFFSET UNITYSDK_OFFSET(0xC25A080)
#define PIGKEFKJIHK_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0xC258770)
#define PIGKEFKJIHK_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0xC2589C0)
#define PIGKEFKJIHK_FLJBKCPGJEH_OFFSET UNITYSDK_OFFSET(0xC258CB0)
#define PIGKEFKJIHK_GHDNPKNPCDA_OFFSET UNITYSDK_OFFSET(0xC258E30)
#define PIGKEFKJIHK_GOOOMFBAMFN_OFFSET UNITYSDK_OFFSET(0xC258B80)
#define PIGKEFKJIHK_HABFIFCKMKG_OFFSET UNITYSDK_OFFSET(0xC258610)
#define PIGKEFKJIHK_HBIDGLCEAGM_OFFSET UNITYSDK_OFFSET(0xC2586A0)
#define PIGKEFKJIHK_KHIPLPFINEE_OFFSET UNITYSDK_OFFSET(0xC258A40)
#define PIGKEFKJIHK_LCFALGOIONI_OFFSET UNITYSDK_OFFSET(0xC2597E0)
#define PIGKEFKJIHK_LFINMLHCELH_OFFSET UNITYSDK_OFFSET(0xC259570)
#define PIGKEFKJIHK_LKELDGIABPA_OFFSET UNITYSDK_OFFSET(0xC259D60)
#define PIGKEFKJIHK_LPIKJCILDDA_OFFSET UNITYSDK_OFFSET(0xC259CE0)
#define PIGKEFKJIHK_OFGLEAFJGAN_OFFSET UNITYSDK_OFFSET(0xC259490)
#define PIGKEFKJIHK_OOOKCBIBHBA_OFFSET UNITYSDK_OFFSET(0xC259180)
#define PIGKEFKJIHK_OPOCHDENOHL_OFFSET UNITYSDK_OFFSET(0xC259940)
#define PIGKEFKJIHK_PNPANCOEFKE_OFFSET UNITYSDK_OFFSET(0xC258AF0)
#define PIGKEFKJIHK__ONBIND_OFFSET UNITYSDK_OFFSET(0xC258800)

inline static constexpr unsigned int PIGKEFKJIHK_TypeDefinitionIndex = 71610;

	class PIGKEFKJIHK : public ::FMPCODLIOLG
	{
	public:
		::RPG::Client::PrefabLoadMeta* AGIHDGFPEFI; // 0x60
		::UnityEngine::Transform* HHGGLKIHILC; // 0x68
		::UnityEngine::Transform* NBAPJOBMGNF; // 0x70
		::UnityEngine::UI::Text* BDCFDNEDNNB; // 0x78
		::UnityEngine::Animation* LAMMLBMCGGH; // 0x80
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x88
		::RPG::Client::UIStateCtrl* MCCONOHPEMD; // 0x90
		::RPG::GameCore::CharacterDataComponent* EHIINAKEIGE; // 0x98
		::System::Collections::Generic::List_1<::KGMPJMIAPCI*>* MLJDAEMEBFJ; // 0xA0
		::System::Int32 DEBFEIKENAO; // 0xA8
		// static const ::System::String* LJPHIHJHIAJ; // 0x0
		// static const ::System::String* CMFAEPNLGIB; // 0x0
		// static const ::System::String* MGDFDECEKGP; // 0x0
		// static const ::System::String* HNDGOMJOBMH; // 0x0
		// static const ::System::String* KCMFDJLBJPI; // 0x0
		// static const ::System::String* HBNFMOBCPBO; // 0x0
		// static const ::System::Object ABGCINNKHIB; // 0x0
		// static const ::System::String* MBNHKCBJAMF; // 0x0
		// static const ::System::String* KJGNNIGPEED; // 0x0
		// static const ::System::String* APMLGNEAEKF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIGKEFKJIHK_CTOR_OFFSET))(this);
		}

		::System::Void HABFIFCKMKG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIGKEFKJIHK_HABFIFCKMKG_OFFSET))(this);
		}

		::System::Void BDIMMJOLPBI(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + PIGKEFKJIHK_BDIMMJOLPBI_OFFSET))(this, a1);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + PIGKEFKJIHK_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIGKEFKJIHK__ONBIND_OFFSET))(this);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIGKEFKJIHK_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void HBIDGLCEAGM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIGKEFKJIHK_HBIDGLCEAGM_OFFSET))(this);
		}

		::System::Void KHIPLPFINEE(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PIGKEFKJIHK_KHIPLPFINEE_OFFSET))(this, a1);
		}

		::System::Void GOOOMFBAMFN(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + PIGKEFKJIHK_GOOOMFBAMFN_OFFSET))(this, a1, a2);
		}

		::System::Void FLJBKCPGJEH(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + PIGKEFKJIHK_FLJBKCPGJEH_OFFSET))(this, a1, a2);
		}

		::System::Void GHDNPKNPCDA(::Il2CppArray<::System::String*>* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::System::Int32))((::PBYTE)hIl2Cpp + PIGKEFKJIHK_GHDNPKNPCDA_OFFSET))(this, a1, a2);
		}

		::System::Void OPOCHDENOHL(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + PIGKEFKJIHK_OPOCHDENOHL_OFFSET))(this, a1, a2);
		}

		::System::Void LPIKJCILDDA(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + PIGKEFKJIHK_LPIKJCILDDA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void BNOLPPNMAOA(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PIGKEFKJIHK_BNOLPPNMAOA_OFFSET))(this, a1);
		}

		::System::String* BLMMLCJILNP()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIGKEFKJIHK_BLMMLCJILNP_OFFSET))(this);
		}

		::System::Boolean OOOKCBIBHBA(::Il2CppArray<::System::String*>* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::System::Int32))((::PBYTE)hIl2Cpp + PIGKEFKJIHK_OOOKCBIBHBA_OFFSET))(this, a1, a2);
		}

		::System::Void OFGLEAFJGAN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIGKEFKJIHK_OFGLEAFJGAN_OFFSET))(this);
		}

		::UnityEngine::Color LCFALGOIONI()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + PIGKEFKJIHK_LCFALGOIONI_OFFSET))(this);
		}

		::System::String* LFINMLHCELH(::Il2CppArray<::System::String*>* a1, ::System::Int32 a2)
		{
			return ((::System::String*(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::System::Int32))((::PBYTE)hIl2Cpp + PIGKEFKJIHK_LFINMLHCELH_OFFSET))(this, a1, a2);
		}

		::System::Void AKKPEONJFFK(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PIGKEFKJIHK_AKKPEONJFFK_OFFSET))(this, a1);
		}

		::System::Void LKELDGIABPA(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + PIGKEFKJIHK_LKELDGIABPA_OFFSET))(this, a1, a2);
		}

		::System::Void PNPANCOEFKE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIGKEFKJIHK_PNPANCOEFKE_OFFSET))(this);
		}

	};
