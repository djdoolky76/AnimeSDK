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

#define PPOJLJJLJDF_AFDNMEHJEND_OFFSET UNITYSDK_OFFSET(0xCCCE3E0)
#define PPOJLJJLJDF_AHMANEHOKMO_OFFSET UNITYSDK_OFFSET(0xCCCED10)
#define PPOJLJJLJDF_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xCCCEE00)
#define PPOJLJJLJDF_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xCCCEF40)
#define PPOJLJJLJDF_CMNCIKIHACB_OFFSET UNITYSDK_OFFSET(0xCCCE5F0)
#define PPOJLJJLJDF_CTOR_OFFSET UNITYSDK_OFFSET(0xCCCF060)
#define PPOJLJJLJDF_DOEDECKEMEF_OFFSET UNITYSDK_OFFSET(0xCCCE2C0)
#define PPOJLJJLJDF_FEMKPKFKCMG_OFFSET UNITYSDK_OFFSET(0xCCCE6B0)
#define PPOJLJJLJDF_ILMPMNJDDPA_OFFSET UNITYSDK_OFFSET(0xCCCDEA0)
#define PPOJLJJLJDF_JFBDFHPOEEK_OFFSET UNITYSDK_OFFSET(0xCCCEBF0)
#define PPOJLJJLJDF_JIABCJLODJI_OFFSET UNITYSDK_OFFSET(0xCCCDAE0)
#define PPOJLJJLJDF_JPPFCPGPOFG_OFFSET UNITYSDK_OFFSET(0xCCCEB00)
#define PPOJLJJLJDF_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0xCCCD940)
#define PPOJLJJLJDF_KCPMJOILBAA_OFFSET UNITYSDK_OFFSET(0xCCCE7E0)
#define PPOJLJJLJDF_KMIEEJEHMIC_OFFSET UNITYSDK_OFFSET(0xCCCE960)
#define PPOJLJJLJDF_LGOPDGKKFCE_OFFSET UNITYSDK_OFFSET(0xCCCEA80)
#define PPOJLJJLJDF_LJBCDJNNBJH_OFFSET UNITYSDK_OFFSET(0xCCCDD80)
#define PPOJLJJLJDF_NDHIDNBEECG_OFFSET UNITYSDK_OFFSET(0xCCCEC50)
#define PPOJLJJLJDF_NIEKCFEKJEG_OFFSET UNITYSDK_OFFSET(0xCCCE4C0)
#define PPOJLJJLJDF_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0xCCCDC40)
#define PPOJLJJLJDF_PEGNJCBFPFB_OFFSET UNITYSDK_OFFSET(0xCCCE040)
#define PPOJLJJLJDF__ONBIND_OFFSET UNITYSDK_OFFSET(0xCCCD1E0)
#define PPOJLJJLJDF__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xCCCDBA0)
#define PPOJLJJLJDF__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0xCCCD840)
#define PPOJLJJLJDF__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xCCCD8F0)

inline static constexpr unsigned int PPOJLJJLJDF_TypeDefinitionIndex = 73256;

	class PPOJLJJLJDF : public ::CAOEEDDAPIK
	{
	public:
		::RPG::Client::UIParticleClippable* HBNPLBCLHMC; // 0xE0
		::RPG::Client::UIDynamicEffect* CPGINCJECEM; // 0xE8
		::RPG::Client::LocalizedText* EOLHFECKLCO; // 0xF0
		::CAOEEDDAPIK_NNBFMHKHMKO* APPIHABBCGK; // 0xF8
		::KPJHHMDDAPO* LHBCBJMJJFB; // 0x100
		::EBCNJEFOMCG* PNBFAOANEKC; // 0x108
		::HONOFODMNPO* EKDLLLIPKEE; // 0x110
		::RPG::Client::UIParticleClippable* BMBKDJHBIGP; // 0x118
		::RPG::Client::LocalizedText* BCFKJFNBGLA; // 0x120
		::ANABDAAAEEA* CMKFDMKBPDD; // 0x128
		::UnityEngine::Transform* NJFPFGJBLMK; // 0x130
		::BNJCIKPAHIH* HJMKFAGJIJK; // 0x138
		::System::Int32 KFBDIEABBJM; // 0x140
		::GJPBCNIIEOB_Mode BHJDJDPLCLP; // 0x144
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

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + PPOJLJJLJDF__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPOJLJJLJDF__SETUPVIEW_OFFSET))(this);
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
