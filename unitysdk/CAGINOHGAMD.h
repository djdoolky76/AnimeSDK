#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CLAADCBPCHM.h"
class FGCPOAGKGCE;
namespace RPG::Client { class SPProgress; }
namespace RPG::GameCore { class AbilityUltraInnerProgressChange; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class SmoothMask; }

#define CAGINOHGAMD_AFMHNCLHNDP_OFFSET UNITYSDK_OFFSET(0xC476880)
#define CAGINOHGAMD_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xC4773E0)
#define CAGINOHGAMD_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xC4775E0)
#define CAGINOHGAMD_BFDGGBJLEBA_OFFSET UNITYSDK_OFFSET(0xC4764D0)
#define CAGINOHGAMD_BIOBBNGDGDF_OFFSET UNITYSDK_OFFSET(0xC475030)
#define CAGINOHGAMD_BONEBLMEHBD_OFFSET UNITYSDK_OFFSET(0xC476540)
#define CAGINOHGAMD_CTOR_OFFSET UNITYSDK_OFFSET(0xC4777E0)
#define CAGINOHGAMD_DEDADPOFLOI_OFFSET UNITYSDK_OFFSET(0xC4752E0)
#define CAGINOHGAMD_DJJPOBNAMNH_OFFSET UNITYSDK_OFFSET(0xC476D00)
#define CAGINOHGAMD_EBPDLMBPLBL_OFFSET UNITYSDK_OFFSET(0xC477070)
#define CAGINOHGAMD_EIAFGCLFMNL_OFFSET UNITYSDK_OFFSET(0xC4772A0)
#define CAGINOHGAMD_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0xC474F30)
#define CAGINOHGAMD_FLJMKABENAD_OFFSET UNITYSDK_OFFSET(0xC4768F0)
#define CAGINOHGAMD_GKCNPOGCJIF_OFFSET UNITYSDK_OFFSET(0xC477100)
#define CAGINOHGAMD_JOOGNNINJKL_OFFSET UNITYSDK_OFFSET(0xC475A70)
#define CAGINOHGAMD_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0xC476480)
#define CAGINOHGAMD_KBCNINCDBLP_OFFSET UNITYSDK_OFFSET(0xC477210)
#define CAGINOHGAMD_KNKEMHHBFJO_OFFSET UNITYSDK_OFFSET(0xC4772F0)
#define CAGINOHGAMD_MPPEBPAINNI_OFFSET UNITYSDK_OFFSET(0xC4767F0)
#define CAGINOHGAMD_NGNACJONELO_OFFSET UNITYSDK_OFFSET(0xC475470)
#define CAGINOHGAMD_ONRETURN_OFFSET UNITYSDK_OFFSET(0xC474E20)
#define CAGINOHGAMD_PFELPLOMKCM_OFFSET UNITYSDK_OFFSET(0xC4751F0)
#define CAGINOHGAMD_PHBLFEFNICJ_OFFSET UNITYSDK_OFFSET(0xC476980)
#define CAGINOHGAMD__ONBIND_OFFSET UNITYSDK_OFFSET(0xC474B50)

inline static constexpr unsigned int CAGINOHGAMD_TypeDefinitionIndex = 71925;

	class CAGINOHGAMD : public ::CLAADCBPCHM
	{
	public:
		::UnityEngine::ParticleSystem* DHENGDCFOHA; // 0xB8
		::RPG::Client::SPProgress* NAAODEIIMCI; // 0xC0
		::FGCPOAGKGCE* LCAFDOLIHIH; // 0xC8
		::UnityEngine::UI::Image* HFJBNHOHJHM; // 0xD0
		::UnityEngine::UI::Image* AJKPFICIIIP; // 0xD8
		::UnityEngine::UI::Image* IFPFGDMAJCF; // 0xE0
		::UnityEngine::Animation* LIFEJLAJJKO; // 0xE8
		::UnityEngine::Transform* MEBAOIBNLHL; // 0xF0
		::UnityEngine::UI::Image* MAOLDDGOHKO; // 0xF8
		::UnityEngine::Transform* CEGHCGEHNGI; // 0x100
		::UnityEngine::UI::SmoothMask* DOEGJDFFCNI; // 0x108
		::UnityEngine::UI::Image* IHDDCCAIDIB; // 0x110
		::UnityEngine::UI::Image* PMJFBCCOBJF; // 0x118
		::System::Boolean KHCEJBHMIDF; // 0x120
		// static const ::System::String* DJCBDJMACFH; // 0x0
		// static const ::System::String* NBJIGEOCMJC; // 0x0
		// static const ::System::String* LMHJHHEELLO; // 0x0
		// static const ::System::String* NNMNBGDBJAN; // 0x0
		// static const ::System::String* JPPPJGGAMJP; // 0x0
		// static const ::System::Object FKJAGNNBGAN; // 0x0
		// static const ::System::String* FBNOEMDNIBN; // 0x0
		// static const ::System::String* IBAOBHODAKN; // 0x0
		// static const ::System::String* LLLKIDGGMKJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAGINOHGAMD_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAGINOHGAMD__ONBIND_OFFSET))(this);
		}

		::System::Void OnReturn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAGINOHGAMD_ONRETURN_OFFSET))(this);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAGINOHGAMD_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void DEDADPOFLOI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CAGINOHGAMD_DEDADPOFLOI_OFFSET))(this, a1);
		}

		::System::Void NGNACJONELO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAGINOHGAMD_NGNACJONELO_OFFSET))(this);
		}

		::System::Void JOOGNNINJKL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAGINOHGAMD_JOOGNNINJKL_OFFSET))(this);
		}

		::System::Void KANMCJHEFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAGINOHGAMD_KANMCJHEFJJ_OFFSET))(this);
		}

		::System::Void BFDGGBJLEBA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAGINOHGAMD_BFDGGBJLEBA_OFFSET))(this);
		}

		::System::Void BONEBLMEHBD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAGINOHGAMD_BONEBLMEHBD_OFFSET))(this);
		}

		::System::Void MPPEBPAINNI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CAGINOHGAMD_MPPEBPAINNI_OFFSET))(this, a1);
		}

		::System::Void AFMHNCLHNDP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAGINOHGAMD_AFMHNCLHNDP_OFFSET))(this);
		}

		::System::Void FLJMKABENAD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAGINOHGAMD_FLJMKABENAD_OFFSET))(this);
		}

		::System::Void PHBLFEFNICJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAGINOHGAMD_PHBLFEFNICJ_OFFSET))(this);
		}

		::System::Void DJJPOBNAMNH(::RPG::GameCore::AbilityUltraInnerProgressChange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityUltraInnerProgressChange*))((::PBYTE)hIl2Cpp + CAGINOHGAMD_DJJPOBNAMNH_OFFSET))(this, a1);
		}

		::System::Void EBPDLMBPLBL(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CAGINOHGAMD_EBPDLMBPLBL_OFFSET))(this, a1);
		}

		::System::Void KBCNINCDBLP(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CAGINOHGAMD_KBCNINCDBLP_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* EIAFGCLFMNL()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAGINOHGAMD_EIAFGCLFMNL_OFFSET))(this);
		}

		::System::Void PFELPLOMKCM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CAGINOHGAMD_PFELPLOMKCM_OFFSET))(this, a1);
		}

		::System::Boolean GKCNPOGCJIF(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CAGINOHGAMD_GKCNPOGCJIF_OFFSET))(this, a1);
		}

		::System::Void BIOBBNGDGDF(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CAGINOHGAMD_BIOBBNGDGDF_OFFSET))(this, a1, a2);
		}

		::System::Void KNKEMHHBFJO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CAGINOHGAMD_KNKEMHHBFJO_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAGINOHGAMD_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAGINOHGAMD_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
