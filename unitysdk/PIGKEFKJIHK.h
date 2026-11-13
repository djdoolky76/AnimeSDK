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

#define PIGKEFKJIHK_AKKPEONJFFK_OFFSET UNITYSDK_OFFSET(0x1A9C6200)
#define PIGKEFKJIHK_BDIMMJOLPBI_OFFSET UNITYSDK_OFFSET(0x1A9C4B10)
#define PIGKEFKJIHK_BLMMLCJILNP_OFFSET UNITYSDK_OFFSET(0x1A9C5D10)
#define PIGKEFKJIHK_BNOLPPNMAOA_OFFSET UNITYSDK_OFFSET(0x1A9C6660)
#define PIGKEFKJIHK_CTOR_OFFSET UNITYSDK_OFFSET(0x1A9C6790)
#define PIGKEFKJIHK_FLJBKCPGJEH_OFFSET UNITYSDK_OFFSET(0x1A9C53E0)
#define PIGKEFKJIHK_GHDNPKNPCDA_OFFSET UNITYSDK_OFFSET(0x1A9C5560)
#define PIGKEFKJIHK_GOOOMFBAMFN_OFFSET UNITYSDK_OFFSET(0x1A9C52B0)
#define PIGKEFKJIHK_HABFIFCKMKG_OFFSET UNITYSDK_OFFSET(0x1A9C4A20)
#define PIGKEFKJIHK_HBIDGLCEAGM_OFFSET UNITYSDK_OFFSET(0x1A9C4AB0)
#define PIGKEFKJIHK_KHIPLPFINEE_OFFSET UNITYSDK_OFFSET(0x1A9C5180)
#define PIGKEFKJIHK_LCFALGOIONI_OFFSET UNITYSDK_OFFSET(0x1A9C5EF0)
#define PIGKEFKJIHK_LFINMLHCELH_OFFSET UNITYSDK_OFFSET(0x1A9C5C90)
#define PIGKEFKJIHK_LKELDGIABPA_OFFSET UNITYSDK_OFFSET(0x1A9C6470)
#define PIGKEFKJIHK_LPIKJCILDDA_OFFSET UNITYSDK_OFFSET(0x1A9C63F0)
#define PIGKEFKJIHK_OFGLEAFJGAN_OFFSET UNITYSDK_OFFSET(0x1A9C5BB0)
#define PIGKEFKJIHK_OOOKCBIBHBA_OFFSET UNITYSDK_OFFSET(0x1A9C58B0)
#define PIGKEFKJIHK_OPOCHDENOHL_OFFSET UNITYSDK_OFFSET(0x1A9C6050)
#define PIGKEFKJIHK_PNPANCOEFKE_OFFSET UNITYSDK_OFFSET(0x1A9C5230)
#define PIGKEFKJIHK__ONBIND_OFFSET UNITYSDK_OFFSET(0x1A9C4C00)
#define PIGKEFKJIHK__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x1A9C4B80)
#define PIGKEFKJIHK__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x1A9C5100)

inline static constexpr unsigned int PIGKEFKJIHK_TypeDefinitionIndex = 73598;

	class PIGKEFKJIHK : public ::FMPCODLIOLG
	{
	public:
		::System::Collections::Generic::List_1<::KGMPJMIAPCI*>* MLJDAEMEBFJ; // 0x60
		::UnityEngine::Animation* LAMMLBMCGGH; // 0x68
		::RPG::GameCore::CharacterDataComponent* EHIINAKEIGE; // 0x70
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x78
		::UnityEngine::UI::Text* BDCFDNEDNNB; // 0x80
		::UnityEngine::Transform* NBAPJOBMGNF; // 0x88
		::RPG::Client::UIStateCtrl* MCCONOHPEMD; // 0x90
		::RPG::Client::PrefabLoadMeta* AGIHDGFPEFI; // 0x98
		::UnityEngine::Transform* HHGGLKIHILC; // 0xA0
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

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + PIGKEFKJIHK__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIGKEFKJIHK__ONBIND_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIGKEFKJIHK__SETUPVIEW_OFFSET))(this);
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
