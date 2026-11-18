#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/MoleMole/MonoGamepadCustomList.h"
#include "unitysdk/MoleMole/MonoGamepadSpaceList_CJGABBPOMKG.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/MonoGamepadBaseList_NDKKCEHOIIL.h"

namespace MoleMole { class MonoGamepadSpaceTarget; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_MONOGAMEPADSPACELIST_ADNCFLEJGBF_OFFSET UNITYSDK_OFFSET(0x135BB420)
#define MOLEMOLE_MONOGAMEPADSPACELIST_AEPJDBKJHLN_OFFSET UNITYSDK_OFFSET(0x135B9600)
#define MOLEMOLE_MONOGAMEPADSPACELIST_CBIMCKDGIGM_OFFSET UNITYSDK_OFFSET(0x135BAFB0)
#define MOLEMOLE_MONOGAMEPADSPACELIST_CPKDIHLCEFA_OFFSET UNITYSDK_OFFSET(0x135B8AB0)
#define MOLEMOLE_MONOGAMEPADSPACELIST_EDNJONAJALC_OFFSET UNITYSDK_OFFSET(0x135BB250)
#define MOLEMOLE_MONOGAMEPADSPACELIST_EJGKAHDEAHP_OFFSET UNITYSDK_OFFSET(0x135BB2E0)
#define MOLEMOLE_MONOGAMEPADSPACELIST_FBOOCANNBAL_OFFSET UNITYSDK_OFFSET(0x135BB100)
#define MOLEMOLE_MONOGAMEPADSPACELIST_FLBAFGFPAMI_OFFSET UNITYSDK_OFFSET(0x135B8630)
#define MOLEMOLE_MONOGAMEPADSPACELIST_GPLLEMHGFLJ_OFFSET UNITYSDK_OFFSET(0x135BB460)
#define MOLEMOLE_MONOGAMEPADSPACELIST_IBAEPOAFPPJ_OFFSET UNITYSDK_OFFSET(0x135B93A0)
#define MOLEMOLE_MONOGAMEPADSPACELIST_JIKJMCMCIMN_OFFSET UNITYSDK_OFFSET(0x135B9280)
#define MOLEMOLE_MONOGAMEPADSPACELIST_KLEGPDJKCLA_OFFSET UNITYSDK_OFFSET(0x135BA9C0)
#define MOLEMOLE_MONOGAMEPADSPACELIST_MGEMCLLINEL_OFFSET UNITYSDK_OFFSET(0x135BAE70)
#define MOLEMOLE_MONOGAMEPADSPACELIST_OJGNDFLABOG_OFFSET UNITYSDK_OFFSET(0x135B8BD0)
#define MOLEMOLE_MONOGAMEPADSPACELIST__CTOR_OFFSET UNITYSDK_OFFSET(0x135BA8D0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoGamepadSpaceList_TypeDefinitionIndex = 74385;

	class MonoGamepadSpaceList : public ::MoleMole::MonoGamepadCustomList
	{
	public:
		::System::Int32 CheckOffect; // 0x1E8
		::System::Single ForwardWeightValue; // 0x1EC
		::System::Single PreferWeightValue; // 0x1F0
		::System::Boolean SkipIgnoreItem; // 0x1F4
		::System::Boolean PreferLastSelect; // 0x1F5
		::System::Byte _padding0[0x2];
		::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::MoleMole::MonoGamepadSpaceTarget*>* GIEIFHJFEDE; // 0x1F8
		::System::Boolean GLPGGIHAFEB; // 0x200
		::System::Boolean EPOMKOHCKID; // 0x201
		::System::Byte _padding1[0x2];
		::UnityEngine::Vector2 PNHHHMDLIDO; // 0x204
		::UnityEngine::Vector2 OOJNODGJIPK; // 0x20C
		::UnityEngine::Vector2 NBBPLGHAFON; // 0x214
		::UnityEngine::Vector2 KHIOJFEDHMG; // 0x21C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSPACELIST__CTOR_OFFSET))(this);
		}

		::System::Void FLBAFGFPAMI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSPACELIST_FLBAFGFPAMI_OFFSET))(this);
		}

		::System::Boolean CPKDIHLCEFA(::MoleMole::InputActionEvent PKBLAMDICKB)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSPACELIST_CPKDIHLCEFA_OFFSET))(this, PKBLAMDICKB);
		}

		::System::Int32 OJGNDFLABOG(::System::Int32 ABHBKFJKINO, ::UnityEngine::Vector2 ADNMDAMAHGK, ::MoleMole::MonoGamepadBaseList_NDKKCEHOIIL JHOFOOCLBAD, ::System::Boolean LGAIOBLNNBG)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector2, ::MoleMole::MonoGamepadBaseList_NDKKCEHOIIL, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSPACELIST_OJGNDFLABOG_OFFSET))(this, ABHBKFJKINO, ADNMDAMAHGK, JHOFOOCLBAD, LGAIOBLNNBG);
		}

		::System::Void IBAEPOAFPPJ(::MoleMole::InputLogicEventType DHNEEJCNAID, ::UnityEngine::GameObject* JCKMDAODMFI, ::UnityEngine::GameObject* HCGIBGNFNAF)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::InputLogicEventType, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSPACELIST_IBAEPOAFPPJ_OFFSET))(this, DHNEEJCNAID, JCKMDAODMFI, HCGIBGNFNAF);
		}

		::System::Int32 AEPJDBKJHLN(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* OKHMHHDCAFM, ::System::Int32 OJOEBEBNFCJ, ::UnityEngine::Vector2 EECMDPPHLAM, ::MoleMole::MonoGamepadBaseList_NDKKCEHOIIL JHOFOOCLBAD, ::System::Boolean LGAIOBLNNBG)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*, ::System::Int32, ::UnityEngine::Vector2, ::MoleMole::MonoGamepadBaseList_NDKKCEHOIIL, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSPACELIST_AEPJDBKJHLN_OFFSET))(this, OKHMHHDCAFM, OJOEBEBNFCJ, EECMDPPHLAM, JHOFOOCLBAD, LGAIOBLNNBG);
		}

		::System::Void EDNJONAJALC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSPACELIST_EDNJONAJALC_OFFSET))(this);
		}

		::System::Single FBOOCANNBAL(::UnityEngine::RectTransform* KDEHMPGOCEP, ::UnityEngine::RectTransform* PADJNMGMGHO, ::System::Boolean GJIEADBHBIJ, ::System::Boolean IFGHGOHOBNB)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSPACELIST_FBOOCANNBAL_OFFSET))(this, KDEHMPGOCEP, PADJNMGMGHO, GJIEADBHBIJ, IFGHGOHOBNB);
		}

		::MoleMole::InputLogicEventType JIKJMCMCIMN(::UnityEngine::Vector2 DAAEHEHLLLD)
		{
			return ((::MoleMole::InputLogicEventType(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSPACELIST_JIKJMCMCIMN_OFFSET))(this, DAAEHEHLLLD);
		}

		::System::Int32 ADNCFLEJGBF(::System::Int32 MIALFKCCCPI, ::UnityEngine::Vector2 KMGKAIDEIBA, ::MoleMole::MonoGamepadBaseList_NDKKCEHOIIL FDHMCIFPNCK, ::System::Boolean MPBJAGIKPJM)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector2, ::MoleMole::MonoGamepadBaseList_NDKKCEHOIIL, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSPACELIST_ADNCFLEJGBF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM);
		}

		::System::Single MGEMCLLINEL(::UnityEngine::RectTransform* EJCBEJMGFAJ, ::UnityEngine::RectTransform* EBFCACIEKBC, ::System::Boolean JOFGGLNJJFM)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSPACELIST_MGEMCLLINEL_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC, JOFGGLNJJFM);
		}

		::System::Single CBIMCKDGIGM(::UnityEngine::RectTransform* KDEHMPGOCEP, ::UnityEngine::RectTransform* PADJNMGMGHO, ::System::Boolean MKMOOBNFPPE, ::System::Boolean IFGHGOHOBNB)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSPACELIST_CBIMCKDGIGM_OFFSET))(this, KDEHMPGOCEP, PADJNMGMGHO, MKMOOBNFPPE, IFGHGOHOBNB);
		}

		::UnityEngine::Vector2 KLEGPDJKCLA(::UnityEngine::RectTransform* MGOFOAFCFIJ, ::MoleMole::MonoGamepadSpaceList_CJGABBPOMKG OBNIAHNMHPF)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::RectTransform*, ::MoleMole::MonoGamepadSpaceList_CJGABBPOMKG))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSPACELIST_KLEGPDJKCLA_OFFSET))(this, MGOFOAFCFIJ, OBNIAHNMHPF);
		}

		::System::Boolean GPLLEMHGFLJ(::MoleMole::InputActionEvent MIALFKCCCPI)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSPACELIST_GPLLEMHGFLJ_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Single EJGKAHDEAHP(::UnityEngine::RectTransform* KDEHMPGOCEP, ::UnityEngine::RectTransform* PADJNMGMGHO, ::System::Boolean IDGIIKHOPJK)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSPACELIST_EJGKAHDEAHP_OFFSET))(this, KDEHMPGOCEP, PADJNMGMGHO, IDGIIKHOPJK);
		}
	};
}
