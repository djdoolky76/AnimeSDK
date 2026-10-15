#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CLAADCBPCHM.h"
#include "unitysdk/RPG/Client/CyreneSPPointState.h"
#include "unitysdk/RPG/Client/CyreneUltraSkillState.h"
class DEKDEPEBHNC;
class KHGEHIJJFDA;
namespace RPG::Client { class MonoUltraSkillCyrenePanelHelper; }
namespace RPG::GameCore { class SkillData; }
namespace System { class Object; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }

#define ABHKEONKJDI_ABHNEJPBCAB_OFFSET UNITYSDK_OFFSET(0xB0F9D20)
#define ABHKEONKJDI_AFMHNCLHNDP_OFFSET UNITYSDK_OFFSET(0xB0F9350)
#define ABHKEONKJDI_ALNPMBGDOGP_OFFSET UNITYSDK_OFFSET(0xB0F97B0)
#define ABHKEONKJDI_ALPLJIKFHNG_OFFSET UNITYSDK_OFFSET(0xB0FA610)
#define ABHKEONKJDI_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xB0FAEB0)
#define ABHKEONKJDI_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xB0FB050)
#define ABHKEONKJDI_BFDGGBJLEBA_OFFSET UNITYSDK_OFFSET(0xB0F9580)
#define ABHKEONKJDI_CCTOR_OFFSET UNITYSDK_OFFSET(0xB0FB270)
#define ABHKEONKJDI_CTOR_OFFSET UNITYSDK_OFFSET(0xB0FB1F0)
#define ABHKEONKJDI_DEJOIDOCBHP_OFFSET UNITYSDK_OFFSET(0xB0FA310)
#define ABHKEONKJDI_EEGHOOOKKJE_OFFSET UNITYSDK_OFFSET(0xB0FAC70)
#define ABHKEONKJDI_EIAFGCLFMNL_OFFSET UNITYSDK_OFFSET(0xB0F9690)
#define ABHKEONKJDI_FHGHKNPDFIN_OFFSET UNITYSDK_OFFSET(0xB0F96E0)
#define ABHKEONKJDI_FKKOADMBGMF_OFFSET UNITYSDK_OFFSET(0xB0F9C90)
#define ABHKEONKJDI_FLJMKABENAD_OFFSET UNITYSDK_OFFSET(0xB0F9640)
#define ABHKEONKJDI_GEELGMADAEI_OFFSET UNITYSDK_OFFSET(0xB0F9ED0)
#define ABHKEONKJDI_GIPLFHPMJOB_OFFSET UNITYSDK_OFFSET(0xB0FABE0)
#define ABHKEONKJDI_HALDNLMGLHA_OFFSET UNITYSDK_OFFSET(0xB0FAD30)
#define ABHKEONKJDI_JOOGNNINJKL_1_OFFSET UNITYSDK_OFFSET(0xB0F9980)
#define ABHKEONKJDI_JOOGNNINJKL_OFFSET UNITYSDK_OFFSET(0xB0F9310)
#define ABHKEONKJDI_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0xB0F9530)
#define ABHKEONKJDI_KGCAJBAMANK_OFFSET UNITYSDK_OFFSET(0xB0FADF0)
#define ABHKEONKJDI_KGPNGPAJPJI_OFFSET UNITYSDK_OFFSET(0xB0FA530)
#define ABHKEONKJDI_MEOJMILKPCP_OFFSET UNITYSDK_OFFSET(0xB0FA230)
#define ABHKEONKJDI_MPPEBPAINNI_OFFSET UNITYSDK_OFFSET(0xB0F95E0)
#define ABHKEONKJDI_NGNACJONELO_OFFSET UNITYSDK_OFFSET(0xB0F93A0)
#define ABHKEONKJDI_OHDGKKCEAAC_OFFSET UNITYSDK_OFFSET(0xB0FA700)
#define ABHKEONKJDI_PBHHAKABHCH_OFFSET UNITYSDK_OFFSET(0xB0F94E0)
#define ABHKEONKJDI_PPJJJGMPBNM_OFFSET UNITYSDK_OFFSET(0xB0F9DB0)
#define ABHKEONKJDI__ONBIND_OFFSET UNITYSDK_OFFSET(0xB0FA750)
#define ABHKEONKJDI__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xB0F9290)

	class ABHKEONKJDI : public ::CLAADCBPCHM
	{
	public:
		::Il2CppArray<::KHGEHIJJFDA*>* LMABABLNLAA; // 0xB8
		::Il2CppArray<::KHGEHIJJFDA*>* OAODPMOKGAN; // 0xC0
		::RPG::Client::MonoUltraSkillCyrenePanelHelper* ENEAJDPPCAL; // 0xC8
		::UnityEngine::Animator* APPGGMLEPLN; // 0xD0
		::UnityEngine::Transform* KBAABABJEOJ; // 0xD8
		::RPG::Client::CyreneUltraSkillState HHEBPAMJJKI; // 0xE0
		static ::System::Int32* StaticGet_OMJACLKJBCI()
		{
			return (::System::Int32*)UnitySDK::FromName("", "ABHKEONKJDI")->GetStaticField(0x10210);
		}

		static ::System::Int32* StaticGet_MCPNPEDDKAA()
		{
			return (::System::Int32*)UnitySDK::FromName("", "ABHKEONKJDI")->GetStaticField(0x10214);
		}

		static ::System::Int32* StaticGet_DNOPAFEDOEI()
		{
			return (::System::Int32*)UnitySDK::FromName("", "ABHKEONKJDI")->GetStaticField(0x10218);
		}

		static ::System::Int32* StaticGet_NFNIJPMMJAF()
		{
			return (::System::Int32*)UnitySDK::FromName("", "ABHKEONKJDI")->GetStaticField(0x1021C);
		}

		static ::System::Int32* StaticGet_PGOIHCHALIJ()
		{
			return (::System::Int32*)UnitySDK::FromName("", "ABHKEONKJDI")->GetStaticField(0x10220);
		}

		static ::System::Int32* StaticGet_HBIABGHKCEN()
		{
			return (::System::Int32*)UnitySDK::FromName("", "ABHKEONKJDI")->GetStaticField(0x10224);
		}

		// static const ::System::String* DJCBDJMACFH; // 0x0
		// static const ::System::Object JGPBDPIFLPG; // 0x0
		// static const ::System::Object HGLNNAELIDE; // 0x0
		// static const ::System::Object GPCFAFNFJFC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABHKEONKJDI_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ABHKEONKJDI_CCTOR_OFFSET))();
		}

		::System::Void _OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABHKEONKJDI__ONDISPOSE_OFFSET))(this);
		}

		::System::Void JOOGNNINJKL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABHKEONKJDI_JOOGNNINJKL_OFFSET))(this);
		}

		::System::Void AFMHNCLHNDP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABHKEONKJDI_AFMHNCLHNDP_OFFSET))(this);
		}

		::System::Void PBHHAKABHCH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABHKEONKJDI_PBHHAKABHCH_OFFSET))(this);
		}

		::System::Void KANMCJHEFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABHKEONKJDI_KANMCJHEFJJ_OFFSET))(this);
		}

		::System::Void BFDGGBJLEBA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABHKEONKJDI_BFDGGBJLEBA_OFFSET))(this);
		}

		::System::Void MPPEBPAINNI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ABHKEONKJDI_MPPEBPAINNI_OFFSET))(this, a1);
		}

		::System::Void FLJMKABENAD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABHKEONKJDI_FLJMKABENAD_OFFSET))(this);
		}

		::UnityEngine::Transform* EIAFGCLFMNL()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABHKEONKJDI_EIAFGCLFMNL_OFFSET))(this);
		}

		::System::Void NGNACJONELO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABHKEONKJDI_NGNACJONELO_OFFSET))(this);
		}

		::System::Void JOOGNNINJKL_1(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ABHKEONKJDI_JOOGNNINJKL_1_OFFSET))(this, a1);
		}

		::System::Void PPJJJGMPBNM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABHKEONKJDI_PPJJJGMPBNM_OFFSET))(this);
		}

		::RPG::Client::CyreneUltraSkillState ABHNEJPBCAB(::System::Int32 a1)
		{
			return ((::RPG::Client::CyreneUltraSkillState(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ABHKEONKJDI_ABHNEJPBCAB_OFFSET))(this, a1);
		}

		::System::Void FKKOADMBGMF(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ABHKEONKJDI_FKKOADMBGMF_OFFSET))(this, a1);
		}

		::KHGEHIJJFDA* GEELGMADAEI(::System::Int32 a1)
		{
			return ((::KHGEHIJJFDA*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ABHKEONKJDI_GEELGMADAEI_OFFSET))(this, a1);
		}

		::RPG::Client::CyreneSPPointState MEOJMILKPCP(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::RPG::Client::CyreneSPPointState(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ABHKEONKJDI_MEOJMILKPCP_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::SkillData* FHGHKNPDFIN()
		{
			return ((::RPG::GameCore::SkillData*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABHKEONKJDI_FHGHKNPDFIN_OFFSET))(this);
		}

		::System::Int32 ALNPMBGDOGP()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABHKEONKJDI_ALNPMBGDOGP_OFFSET))(this);
		}

		::System::Void DEJOIDOCBHP(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ABHKEONKJDI_DEJOIDOCBHP_OFFSET))(this, a1);
		}

		::System::Void KGPNGPAJPJI(::DEKDEPEBHNC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DEKDEPEBHNC*))((::PBYTE)hIl2Cpp + ABHKEONKJDI_KGPNGPAJPJI_OFFSET))(this, a1);
		}

		::System::Void ALPLJIKFHNG(::DEKDEPEBHNC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DEKDEPEBHNC*))((::PBYTE)hIl2Cpp + ABHKEONKJDI_ALPLJIKFHNG_OFFSET))(this, a1);
		}

		::System::Void OHDGKKCEAAC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABHKEONKJDI_OHDGKKCEAAC_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABHKEONKJDI__ONBIND_OFFSET))(this);
		}

		::System::Void GIPLFHPMJOB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ABHKEONKJDI_GIPLFHPMJOB_OFFSET))(this, a1);
		}

		::System::Void EEGHOOOKKJE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ABHKEONKJDI_EEGHOOOKKJE_OFFSET))(this, a1);
		}

		::System::Void HALDNLMGLHA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ABHKEONKJDI_HALDNLMGLHA_OFFSET))(this, a1);
		}

		::System::Void KGCAJBAMANK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ABHKEONKJDI_KGCAJBAMANK_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABHKEONKJDI_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABHKEONKJDI_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
