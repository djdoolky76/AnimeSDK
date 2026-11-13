#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CLAADCBPCHM.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/SkillSPProgressType.h"
class BEBKIEOBLPK;
class KECKKGPEKPJ;
class PLPEFCEBDCH;
namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::Client { class UIStateCtrl; }
namespace RPG::GameCore { class DamageTypeRow; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define GBBIDCKOIOG_AFMHNCLHNDP_OFFSET UNITYSDK_OFFSET(0x1B87A830)
#define GBBIDCKOIOG_BBGGEBDCJJK_OFFSET UNITYSDK_OFFSET(0x1B87AB70)
#define GBBIDCKOIOG_BFDGGBJLEBA_OFFSET UNITYSDK_OFFSET(0x1B87A170)
#define GBBIDCKOIOG_BONEBLMEHBD_OFFSET UNITYSDK_OFFSET(0x1B87A2F0)
#define GBBIDCKOIOG_CNIKHJOAIKC_OFFSET UNITYSDK_OFFSET(0x1B879FA0)
#define GBBIDCKOIOG_CTOR_OFFSET UNITYSDK_OFFSET(0x1B87AD30)
#define GBBIDCKOIOG_EBIPEJHGIDM_OFFSET UNITYSDK_OFFSET(0x1B8799A0)
#define GBBIDCKOIOG_EEMCPAGICHE_OFFSET UNITYSDK_OFFSET(0x1B879E00)
#define GBBIDCKOIOG_FIAMAGBFFEN_OFFSET UNITYSDK_OFFSET(0x1B87A200)
#define GBBIDCKOIOG_FLJMKABENAD_OFFSET UNITYSDK_OFFSET(0x1B87A9E0)
#define GBBIDCKOIOG_JMGLPBEBPDM_OFFSET UNITYSDK_OFFSET(0x1B878F70)
#define GBBIDCKOIOG_JOIAFAJPFND_OFFSET UNITYSDK_OFFSET(0x1B878B70)
#define GBBIDCKOIOG_JOOGNNINJKL_OFFSET UNITYSDK_OFFSET(0x1B879380)
#define GBBIDCKOIOG_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0x1B879F10)
#define GBBIDCKOIOG_KLLDCGDAGFK_OFFSET UNITYSDK_OFFSET(0x1B87A750)
#define GBBIDCKOIOG_MPPEBPAINNI_OFFSET UNITYSDK_OFFSET(0x1B87A5A0)
#define GBBIDCKOIOG_NGNACJONELO_OFFSET UNITYSDK_OFFSET(0x1B8792C0)
#define GBBIDCKOIOG_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x1B878E20)
#define GBBIDCKOIOG_ONRETURN_OFFSET UNITYSDK_OFFSET(0x1B878E80)
#define GBBIDCKOIOG_PKECEGBJLEC_OFFSET UNITYSDK_OFFSET(0x1B879140)
#define GBBIDCKOIOG_PLHMPPPAODJ_OFFSET UNITYSDK_OFFSET(0x1B878D30)
#define GBBIDCKOIOG_PMOEIJJGNHE_OFFSET UNITYSDK_OFFSET(0x1B87AAC0)
#define GBBIDCKOIOG__ONBIND_OFFSET UNITYSDK_OFFSET(0x1B878640)

inline static constexpr unsigned int GBBIDCKOIOG_TypeDefinitionIndex = 74042;

	class GBBIDCKOIOG : public ::CLAADCBPCHM
	{
	public:
		::UnityEngine::Animation* LIFEJLAJJKO; // 0xC0
		::RPG::Client::UIStateCtrl* GIMAEGBDOBL; // 0xC8
		::UnityEngine::Transform* KOJJJDOGJPN; // 0xD0
		::UnityEngine::Transform* AMPCCBNAGLH; // 0xD8
		::PLPEFCEBDCH* KEPANBEOIFI; // 0xE0
		::UnityEngine::UI::Image* IHDDCCAIDIB; // 0xE8
		::UnityEngine::UI::Image* AJKPFICIIIP; // 0xF0
		::RPG::Client::PrefabLoadMeta* FFBLPAEAIJM; // 0xF8
		::UnityEngine::Transform* JOLDPJMOAMM; // 0x100
		::UnityEngine::UI::Image* AMNPLNKPOJF; // 0x108
		::UnityEngine::UI::Image* HHPNBMDIIGO; // 0x110
		::UnityEngine::ParticleSystem* DHENGDCFOHA; // 0x118
		::BEBKIEOBLPK* KBAEEBPDLMK; // 0x120
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::System::String*>* CEIICBMFAKH; // 0x128
		// static const ::System::String* GGCDKJBKFBA; // 0x0
		// static const ::System::String* CDCIEANGMOG; // 0x0
		// static const ::System::String* LMHJHHEELLO; // 0x0
		// static const ::System::String* IPEBADOJPBJ; // 0x0
		// static const ::System::String* FDNHFFKBFKP; // 0x0
		// static const ::System::String* AKEEJDGLCLL; // 0x0
		// static const ::System::String* ALAGAKENOAI; // 0x0
		// static const ::System::String* NNMNBGDBJAN; // 0x0
		// static const ::System::String* MOMHAJJMGIJ; // 0x0
		// static const ::System::String* BKCEMFNIODM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBBIDCKOIOG_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBBIDCKOIOG__ONBIND_OFFSET))(this);
		}

		::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + GBBIDCKOIOG_ONACQUIRE_OFFSET))(this, a1);
		}

		::System::Void OnReturn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBBIDCKOIOG_ONRETURN_OFFSET))(this);
		}

		::System::Void JOIAFAJPFND()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBBIDCKOIOG_JOIAFAJPFND_OFFSET))(this);
		}

		::System::Void PLHMPPPAODJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBBIDCKOIOG_PLHMPPPAODJ_OFFSET))(this);
		}

		::BEBKIEOBLPK* JMGLPBEBPDM(::RPG::GameCore::SkillSPProgressType a1, ::UnityEngine::Transform* a2, ::RPG::GameCore::GameEntity* a3)
		{
			return ((::BEBKIEOBLPK*(*)(::PVOID, ::RPG::GameCore::SkillSPProgressType, ::UnityEngine::Transform*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + GBBIDCKOIOG_JMGLPBEBPDM_OFFSET))(this, a1, a2, a3);
		}

		::System::String* PKECEGBJLEC(::RPG::GameCore::DamageTypeRow* a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::DamageTypeRow*))((::PBYTE)hIl2Cpp + GBBIDCKOIOG_PKECEGBJLEC_OFFSET))(this, a1);
		}

		::System::Void NGNACJONELO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBBIDCKOIOG_NGNACJONELO_OFFSET))(this);
		}

		::System::Void JOOGNNINJKL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBBIDCKOIOG_JOOGNNINJKL_OFFSET))(this);
		}

		::System::Void EBIPEJHGIDM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBBIDCKOIOG_EBIPEJHGIDM_OFFSET))(this);
		}

		::System::Void EEMCPAGICHE(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GBBIDCKOIOG_EEMCPAGICHE_OFFSET))(this, a1);
		}

		::System::Void KANMCJHEFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBBIDCKOIOG_KANMCJHEFJJ_OFFSET))(this);
		}

		::System::Void BFDGGBJLEBA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBBIDCKOIOG_BFDGGBJLEBA_OFFSET))(this);
		}

		::System::Void BONEBLMEHBD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBBIDCKOIOG_BONEBLMEHBD_OFFSET))(this);
		}

		::System::Void CNIKHJOAIKC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBBIDCKOIOG_CNIKHJOAIKC_OFFSET))(this);
		}

		::System::Boolean FIAMAGBFFEN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GBBIDCKOIOG_FIAMAGBFFEN_OFFSET))(this);
		}

		::System::Void MPPEBPAINNI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GBBIDCKOIOG_MPPEBPAINNI_OFFSET))(this, a1);
		}

		::System::Boolean KLLDCGDAGFK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GBBIDCKOIOG_KLLDCGDAGFK_OFFSET))(this);
		}

		::System::Void AFMHNCLHNDP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBBIDCKOIOG_AFMHNCLHNDP_OFFSET))(this);
		}

		::System::Void FLJMKABENAD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBBIDCKOIOG_FLJMKABENAD_OFFSET))(this);
		}

		::System::Void PMOEIJJGNHE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBBIDCKOIOG_PMOEIJJGNHE_OFFSET))(this);
		}

		::System::Void BBGGEBDCJJK(::KECKKGPEKPJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KECKKGPEKPJ*))((::PBYTE)hIl2Cpp + GBBIDCKOIOG_BBGGEBDCJJK_OFFSET))(this, a1);
		}

	};
