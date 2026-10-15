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

#define PPOJLJJLJDF_AFDNMEHJEND_OFFSET UNITYSDK_OFFSET(0xC390A40)
#define PPOJLJJLJDF_AHMANEHOKMO_OFFSET UNITYSDK_OFFSET(0xC391380)
#define PPOJLJJLJDF_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xC391470)
#define PPOJLJJLJDF_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xC3915B0)
#define PPOJLJJLJDF_CMNCIKIHACB_OFFSET UNITYSDK_OFFSET(0xC390C60)
#define PPOJLJJLJDF_CTOR_OFFSET UNITYSDK_OFFSET(0xC3916D0)
#define PPOJLJJLJDF_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0xC38FEA0)
#define PPOJLJJLJDF_DOEDECKEMEF_OFFSET UNITYSDK_OFFSET(0xC390920)
#define PPOJLJJLJDF_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0xC38FF50)
#define PPOJLJJLJDF_FEMKPKFKCMG_OFFSET UNITYSDK_OFFSET(0xC390D20)
#define PPOJLJJLJDF_ILMPMNJDDPA_OFFSET UNITYSDK_OFFSET(0xC390500)
#define PPOJLJJLJDF_JFBDFHPOEEK_OFFSET UNITYSDK_OFFSET(0xC391260)
#define PPOJLJJLJDF_JIABCJLODJI_OFFSET UNITYSDK_OFFSET(0xC390140)
#define PPOJLJJLJDF_JPPFCPGPOFG_OFFSET UNITYSDK_OFFSET(0xC391170)
#define PPOJLJJLJDF_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0xC38FFA0)
#define PPOJLJJLJDF_KCPMJOILBAA_OFFSET UNITYSDK_OFFSET(0xC390E50)
#define PPOJLJJLJDF_KMIEEJEHMIC_OFFSET UNITYSDK_OFFSET(0xC390FD0)
#define PPOJLJJLJDF_LGOPDGKKFCE_OFFSET UNITYSDK_OFFSET(0xC3910F0)
#define PPOJLJJLJDF_LJBCDJNNBJH_OFFSET UNITYSDK_OFFSET(0xC3903E0)
#define PPOJLJJLJDF_NDHIDNBEECG_OFFSET UNITYSDK_OFFSET(0xC3912C0)
#define PPOJLJJLJDF_NIEKCFEKJEG_OFFSET UNITYSDK_OFFSET(0xC390B20)
#define PPOJLJJLJDF_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0xC3902A0)
#define PPOJLJJLJDF_PEGNJCBFPFB_OFFSET UNITYSDK_OFFSET(0xC3906A0)
#define PPOJLJJLJDF__ONBIND_OFFSET UNITYSDK_OFFSET(0xC38FB70)
#define PPOJLJJLJDF__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xC390200)

inline static constexpr unsigned int PPOJLJJLJDF_TypeDefinitionIndex = 71278;

	class PPOJLJJLJDF : public ::CAOEEDDAPIK
	{
	public:
		::RPG::Client::UIParticleClippable* HBNPLBCLHMC; // 0xE0
		::HONOFODMNPO* EKDLLLIPKEE; // 0xE8
		::RPG::Client::UIDynamicEffect* CPGINCJECEM; // 0xF0
		::CAOEEDDAPIK_NNBFMHKHMKO* APPIHABBCGK; // 0xF8
		::ANABDAAAEEA* CMKFDMKBPDD; // 0x100
		::RPG::Client::LocalizedText* EOLHFECKLCO; // 0x108
		::UnityEngine::Transform* NJFPFGJBLMK; // 0x110
		::EBCNJEFOMCG* PNBFAOANEKC; // 0x118
		::KPJHHMDDAPO* LHBCBJMJJFB; // 0x120
		::RPG::Client::LocalizedText* BCFKJFNBGLA; // 0x128
		::RPG::Client::UIParticleClippable* BMBKDJHBIGP; // 0x130
		::BNJCIKPAHIH* HJMKFAGJIJK; // 0x138
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
