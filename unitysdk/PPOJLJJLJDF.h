#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CAOEEDDAPIK.h"
#include "unitysdk/GJPBCNIIEOB_Mode.h"
#include "unitysdk/RPG/Client/ActionBarItemAction.h"
#include "unitysdk/IGKFNIEJGLM.h"
class ANABDAAAEEA;
class BNJCIKPAHIH;
class CAOEEDDAPIK_NNBFMHKHMKO;
class EBCNJEFOMCG;
class FIFPADNLPLB;
class GAHPNAEGACM;
class HONOFODMNPO;
class KPJHHMDDAPO;
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class ShowAttackTimeParam; }
namespace RPG::Client { class UIDynamicEffect; }
namespace RPG::Client { class UIParticleClippable; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define PPOJLJJLJDF_AFDNMEHJEND_OFFSET UNITYSDK_OFFSET(0xC3983C0)
#define PPOJLJJLJDF_AHMANEHOKMO_OFFSET UNITYSDK_OFFSET(0xC398D10)
#define PPOJLJJLJDF_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xC398E00)
#define PPOJLJJLJDF_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xC398F40)
#define PPOJLJJLJDF_CMNCIKIHACB_OFFSET UNITYSDK_OFFSET(0xC3985E0)
#define PPOJLJJLJDF_CTOR_OFFSET UNITYSDK_OFFSET(0xC399060)
#define PPOJLJJLJDF_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0xC397830)
#define PPOJLJJLJDF_DOEDECKEMEF_OFFSET UNITYSDK_OFFSET(0xC3982A0)
#define PPOJLJJLJDF_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0xC3978E0)
#define PPOJLJJLJDF_FEMKPKFKCMG_OFFSET UNITYSDK_OFFSET(0xC3986A0)
#define PPOJLJJLJDF_ILMPMNJDDPA_OFFSET UNITYSDK_OFFSET(0xC397E80)
#define PPOJLJJLJDF_JFBDFHPOEEK_OFFSET UNITYSDK_OFFSET(0xC398BF0)
#define PPOJLJJLJDF_JIABCJLODJI_OFFSET UNITYSDK_OFFSET(0xC397AD0)
#define PPOJLJJLJDF_JPPFCPGPOFG_OFFSET UNITYSDK_OFFSET(0xC398B00)
#define PPOJLJJLJDF_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0xC397930)
#define PPOJLJJLJDF_KCPMJOILBAA_OFFSET UNITYSDK_OFFSET(0xC3987E0)
#define PPOJLJJLJDF_KMIEEJEHMIC_OFFSET UNITYSDK_OFFSET(0xC398960)
#define PPOJLJJLJDF_LGOPDGKKFCE_OFFSET UNITYSDK_OFFSET(0xC398A80)
#define PPOJLJJLJDF_LJBCDJNNBJH_OFFSET UNITYSDK_OFFSET(0xC397D60)
#define PPOJLJJLJDF_NDHIDNBEECG_OFFSET UNITYSDK_OFFSET(0xC398C50)
#define PPOJLJJLJDF_NIEKCFEKJEG_OFFSET UNITYSDK_OFFSET(0xC3984A0)
#define PPOJLJJLJDF_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0xC397C30)
#define PPOJLJJLJDF_PEGNJCBFPFB_OFFSET UNITYSDK_OFFSET(0xC398020)
#define PPOJLJJLJDF__ONBIND_OFFSET UNITYSDK_OFFSET(0xC397500)
#define PPOJLJJLJDF__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xC397B90)

inline static constexpr unsigned int PPOJLJJLJDF_TypeDefinitionIndex = 71279;

	class PPOJLJJLJDF : public ::CAOEEDDAPIK
	{
	public:
		::BNJCIKPAHIH* HJMKFAGJIJK; // 0xE0
		::HONOFODMNPO* EKDLLLIPKEE; // 0xE8
		::EBCNJEFOMCG* PNBFAOANEKC; // 0xF0
		::RPG::Client::LocalizedText* BCFKJFNBGLA; // 0xF8
		::RPG::Client::UIParticleClippable* BMBKDJHBIGP; // 0x100
		::RPG::Client::LocalizedText* EOLHFECKLCO; // 0x108
		::KPJHHMDDAPO* LHBCBJMJJFB; // 0x110
		::UnityEngine::Transform* NJFPFGJBLMK; // 0x118
		::ANABDAAAEEA* CMKFDMKBPDD; // 0x120
		::RPG::Client::UIDynamicEffect* CPGINCJECEM; // 0x128
		::CAOEEDDAPIK_NNBFMHKHMKO* APPIHABBCGK; // 0x130
		::RPG::Client::UIParticleClippable* HBNPLBCLHMC; // 0x138
		::GJPBCNIIEOB_Mode BHJDJDPLCLP; // 0x140
		::System::Int32 KFBDIEABBJM; // 0x144
		// static const ::System::Object PBNDAKJAMHE; // 0x0
		// static const ::System::String* DJCBDJMACFH; // 0x0
		// static const ::System::String* PEMAOLOFMNP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPOJLJJLJDF_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPOJLJJLJDF__ONBIND_OFFSET))(this);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + PPOJLJJLJDF_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPOJLJJLJDF_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void JIABCJLODJI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PPOJLJJLJDF_JIABCJLODJI_OFFSET))(this, a1);
		}

		::System::Void _OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPOJLJJLJDF__ONDISPOSE_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + PPOJLJJLJDF_NKPPGDENJAE_OFFSET))(this, a1);
		}

		::System::Void LJBCDJNNBJH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPOJLJJLJDF_LJBCDJNNBJH_OFFSET))(this);
		}

		::System::Void PEGNJCBFPFB(::GAHPNAEGACM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GAHPNAEGACM*))((::PBYTE)hIl2Cpp + PPOJLJJLJDF_PEGNJCBFPFB_OFFSET))(this, a1);
		}

		::System::Void DOEDECKEMEF(::GAHPNAEGACM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GAHPNAEGACM*))((::PBYTE)hIl2Cpp + PPOJLJJLJDF_DOEDECKEMEF_OFFSET))(this, a1);
		}

		::System::Void AFDNMEHJEND(::RPG::Client::ActionBarItemAction a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionBarItemAction, ::System::Boolean))((::PBYTE)hIl2Cpp + PPOJLJJLJDF_AFDNMEHJEND_OFFSET))(this, a1, a2);
		}

		::System::Void NIEKCFEKJEG(::GAHPNAEGACM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GAHPNAEGACM*))((::PBYTE)hIl2Cpp + PPOJLJJLJDF_NIEKCFEKJEG_OFFSET))(this, a1);
		}

		::System::Void KANMCJHEFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPOJLJJLJDF_KANMCJHEFJJ_OFFSET))(this);
		}

		::System::Void ILMPMNJDDPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPOJLJJLJDF_ILMPMNJDDPA_OFFSET))(this);
		}

		::System::Void CMNCIKIHACB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPOJLJJLJDF_CMNCIKIHACB_OFFSET))(this);
		}

		::System::Void KMIEEJEHMIC(::RPG::Client::ShowAttackTimeParam* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ShowAttackTimeParam*))((::PBYTE)hIl2Cpp + PPOJLJJLJDF_KMIEEJEHMIC_OFFSET))(this, a1);
		}

		::System::Void JPPFCPGPOFG(::FIFPADNLPLB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FIFPADNLPLB*))((::PBYTE)hIl2Cpp + PPOJLJJLJDF_JPPFCPGPOFG_OFFSET))(this, a1);
		}

		::System::Void KCPMJOILBAA(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PPOJLJJLJDF_KCPMJOILBAA_OFFSET))(this, a1);
		}

		::System::Void FEMKPKFKCMG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPOJLJJLJDF_FEMKPKFKCMG_OFFSET))(this);
		}

		::System::Void LGOPDGKKFCE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPOJLJJLJDF_LGOPDGKKFCE_OFFSET))(this);
		}

		::System::Void JFBDFHPOEEK(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PPOJLJJLJDF_JFBDFHPOEEK_OFFSET))(this, a1);
		}

		::System::Void NDHIDNBEECG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PPOJLJJLJDF_NDHIDNBEECG_OFFSET))(this, a1);
		}

		::System::Void AHMANEHOKMO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PPOJLJJLJDF_AHMANEHOKMO_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPOJLJJLJDF_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPOJLJJLJDF_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
