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

#define GBBIDCKOIOG_AFMHNCLHNDP_OFFSET UNITYSDK_OFFSET(0x1687DF00)
#define GBBIDCKOIOG_BBGGEBDCJJK_OFFSET UNITYSDK_OFFSET(0x1687E240)
#define GBBIDCKOIOG_BFDGGBJLEBA_OFFSET UNITYSDK_OFFSET(0x1687D840)
#define GBBIDCKOIOG_BONEBLMEHBD_OFFSET UNITYSDK_OFFSET(0x1687D9C0)
#define GBBIDCKOIOG_CNIKHJOAIKC_OFFSET UNITYSDK_OFFSET(0x1687D670)
#define GBBIDCKOIOG_CTOR_OFFSET UNITYSDK_OFFSET(0x1687E400)
#define GBBIDCKOIOG_EBIPEJHGIDM_OFFSET UNITYSDK_OFFSET(0x1687D070)
#define GBBIDCKOIOG_EEMCPAGICHE_OFFSET UNITYSDK_OFFSET(0x1687D4D0)
#define GBBIDCKOIOG_FIAMAGBFFEN_OFFSET UNITYSDK_OFFSET(0x1687D8D0)
#define GBBIDCKOIOG_FLJMKABENAD_OFFSET UNITYSDK_OFFSET(0x1687E0B0)
#define GBBIDCKOIOG_JMGLPBEBPDM_OFFSET UNITYSDK_OFFSET(0x1687C650)
#define GBBIDCKOIOG_JOIAFAJPFND_OFFSET UNITYSDK_OFFSET(0x1687C250)
#define GBBIDCKOIOG_JOOGNNINJKL_OFFSET UNITYSDK_OFFSET(0x1687CA50)
#define GBBIDCKOIOG_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0x1687D5E0)
#define GBBIDCKOIOG_KLLDCGDAGFK_OFFSET UNITYSDK_OFFSET(0x1687DE20)
#define GBBIDCKOIOG_MPPEBPAINNI_OFFSET UNITYSDK_OFFSET(0x1687DC70)
#define GBBIDCKOIOG_NGNACJONELO_OFFSET UNITYSDK_OFFSET(0x1687C990)
#define GBBIDCKOIOG_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x1687C500)
#define GBBIDCKOIOG_ONRETURN_OFFSET UNITYSDK_OFFSET(0x1687C560)
#define GBBIDCKOIOG_PKECEGBJLEC_OFFSET UNITYSDK_OFFSET(0x1687C820)
#define GBBIDCKOIOG_PLHMPPPAODJ_OFFSET UNITYSDK_OFFSET(0x1687C410)
#define GBBIDCKOIOG_PMOEIJJGNHE_OFFSET UNITYSDK_OFFSET(0x1687E190)
#define GBBIDCKOIOG__ONBIND_OFFSET UNITYSDK_OFFSET(0x1687BD20)

inline static constexpr unsigned int GBBIDCKOIOG_TypeDefinitionIndex = 74043;

	class GBBIDCKOIOG : public ::CLAADCBPCHM
	{
	public:
		::UnityEngine::Transform* KOJJJDOGJPN; // 0xC0
		::UnityEngine::UI::Image* AMNPLNKPOJF; // 0xC8
		::UnityEngine::Transform* JOLDPJMOAMM; // 0xD0
		::UnityEngine::ParticleSystem* DHENGDCFOHA; // 0xD8
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::System::String*>* CEIICBMFAKH; // 0xE0
		::PLPEFCEBDCH* KEPANBEOIFI; // 0xE8
		::RPG::Client::PrefabLoadMeta* FFBLPAEAIJM; // 0xF0
		::BEBKIEOBLPK* KBAEEBPDLMK; // 0xF8
		::RPG::Client::UIStateCtrl* GIMAEGBDOBL; // 0x100
		::UnityEngine::UI::Image* IHDDCCAIDIB; // 0x108
		::UnityEngine::UI::Image* HHPNBMDIIGO; // 0x110
		::UnityEngine::UI::Image* AJKPFICIIIP; // 0x118
		::UnityEngine::Animation* LIFEJLAJJKO; // 0x120
		::UnityEngine::Transform* AMPCCBNAGLH; // 0x128
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
