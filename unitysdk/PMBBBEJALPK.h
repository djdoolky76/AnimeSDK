#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LNDHLHALKAK;
class MonoUIAdaptConfig;
namespace RPG::Client { class UIController; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define PMBBBEJALPK_AMLPENCJJCN_OFFSET UNITYSDK_OFFSET(0xC314610)
#define PMBBBEJALPK_BGOIHLCIBJP_OFFSET UNITYSDK_OFFSET(0xC313DF0)
#define PMBBBEJALPK_BIFKJEANAKJ_OFFSET UNITYSDK_OFFSET(0xC3142F0)
#define PMBBBEJALPK_CDABNMKINLO_OFFSET UNITYSDK_OFFSET(0xC313FD0)
#define PMBBBEJALPK_CTOR_OFFSET UNITYSDK_OFFSET(0xC313860)
#define PMBBBEJALPK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC3141A0)
#define PMBBBEJALPK_EMMHGNIAHDJ_OFFSET UNITYSDK_OFFSET(0xC313F40)
#define PMBBBEJALPK_EPKLFFBLPKO_OFFSET UNITYSDK_OFFSET(0xC313A90)
#define PMBBBEJALPK_GET_UIADAPTOPERATIONS_OFFSET UNITYSDK_OFFSET(0xC3147D0)
#define PMBBBEJALPK_GGBDKBHIMEJ_OFFSET UNITYSDK_OFFSET(0xC314450)
#define PMBBBEJALPK_IFFEKOJNGGM_OFFSET UNITYSDK_OFFSET(0xC313BD0)
#define PMBBBEJALPK_JAPEILBILGI_OFFSET UNITYSDK_OFFSET(0xC313E50)
#define PMBBBEJALPK_JDEKJLHMPLG_OFFSET UNITYSDK_OFFSET(0xC313A20)
#define PMBBBEJALPK_NLCKBGJEMLL_OFFSET UNITYSDK_OFFSET(0xC314660)
#define PMBBBEJALPK_PGLJHMDLBOK_OFFSET UNITYSDK_OFFSET(0xC3143B0)
#define PMBBBEJALPK_PHPIBKOJKHI_OFFSET UNITYSDK_OFFSET(0xC314060)
#define PMBBBEJALPK_SET_UIADAPTOPERATIONS_OFFSET UNITYSDK_OFFSET(0xC3147E0)

inline static constexpr unsigned int PMBBBEJALPK_TypeDefinitionIndex = 73033;

	class PMBBBEJALPK : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::MonoUIAdaptConfig*>* KABEMLCGPAJ; // 0x10
		::MonoUIAdaptConfig* OFMIPMFEJKJ; // 0x18
		::System::Collections::Generic::HashSet_1<::MonoUIAdaptConfig*>* NDEFCGNAMHA; // 0x20
		::RPG::Client::UIController* AAIFHPNNOAH; // 0x28
		::System::Collections::Generic::List_1<::LNDHLHALKAK*>* _UIAdaptOperations_k__BackingField; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMBBBEJALPK_CTOR_OFFSET))(this);
		}

		::System::Void JDEKJLHMPLG(::RPG::Client::UIController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + PMBBBEJALPK_JDEKJLHMPLG_OFFSET))(this, a1);
		}

		::System::Void BGOIHLCIBJP(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + PMBBBEJALPK_BGOIHLCIBJP_OFFSET))(this, a1);
		}

		::System::Void EMMHGNIAHDJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMBBBEJALPK_EMMHGNIAHDJ_OFFSET))(this);
		}

		::System::Void CDABNMKINLO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMBBBEJALPK_CDABNMKINLO_OFFSET))(this);
		}

		::System::Void PHPIBKOJKHI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMBBBEJALPK_PHPIBKOJKHI_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMBBBEJALPK_DISPOSE_OFFSET))(this);
		}

		::System::Void EPKLFFBLPKO(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + PMBBBEJALPK_EPKLFFBLPKO_OFFSET))(this, a1);
		}

		::System::Void PGLJHMDLBOK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMBBBEJALPK_PGLJHMDLBOK_OFFSET))(this);
		}

		::System::Void GGBDKBHIMEJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PMBBBEJALPK_GGBDKBHIMEJ_OFFSET))(this, a1);
		}

		::System::Void AMLPENCJJCN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMBBBEJALPK_AMLPENCJJCN_OFFSET))(this);
		}

		::System::Void BIFKJEANAKJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMBBBEJALPK_BIFKJEANAKJ_OFFSET))(this);
		}

		::System::Void IFFEKOJNGGM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMBBBEJALPK_IFFEKOJNGGM_OFFSET))(this);
		}

		::System::Void JAPEILBILGI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMBBBEJALPK_JAPEILBILGI_OFFSET))(this);
		}

		::System::Void NLCKBGJEMLL(::MonoUIAdaptConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MonoUIAdaptConfig*))((::PBYTE)hIl2Cpp + PMBBBEJALPK_NLCKBGJEMLL_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::LNDHLHALKAK*>* get_UIAdaptOperations()
		{
			return ((::System::Collections::Generic::List_1<::LNDHLHALKAK*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMBBBEJALPK_GET_UIADAPTOPERATIONS_OFFSET))(this);
		}

		::System::Void set_UIAdaptOperations(::System::Collections::Generic::List_1<::LNDHLHALKAK*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::LNDHLHALKAK*>*))((::PBYTE)hIl2Cpp + PMBBBEJALPK_SET_UIADAPTOPERATIONS_OFFSET))(this, a1);
		}

	};
