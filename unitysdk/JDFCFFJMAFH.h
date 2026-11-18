#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PBJOCICFNGK.h"
#include "unitysdk/LIBOIKJGAIH.h"
#include "unitysdk/UnityEngine/Vector3.h"

class IOOIHHOJOPI;
namespace MoleMole { class TurnBattleEntityUnit; }
namespace UnityEngine { class Transform; }
template <typename T> class BFMLEHMAGAK_1;
template <typename T> class KLIOMMIOFDC_1;

#define JDFCFFJMAFH_ADKCHGEBACA_OFFSET UNITYSDK_OFFSET(0xF89BDD0)
#define JDFCFFJMAFH_AEMDEJMKHGP_OFFSET UNITYSDK_OFFSET(0xF89C3B0)
#define JDFCFFJMAFH_AGJLAHEJOHP_OFFSET UNITYSDK_OFFSET(0xF89C490)
#define JDFCFFJMAFH_AMMMEICJENB_OFFSET UNITYSDK_OFFSET(0xF89C660)
#define JDFCFFJMAFH_BBCMNGGFBDC_OFFSET UNITYSDK_OFFSET(0xF89CAF0)
#define JDFCFFJMAFH_BOCHMLHKOOL_OFFSET UNITYSDK_OFFSET(0xF89BFB0)
#define JDFCFFJMAFH_CGBNFNMGJBG_OFFSET UNITYSDK_OFFSET(0xF89C580)
#define JDFCFFJMAFH_EAECHFLCKFH_OFFSET UNITYSDK_OFFSET(0xF89BC00)
#define JDFCFFJMAFH_EGFOMCMINPL_OFFSET UNITYSDK_OFFSET(0xF89BCF0)
#define JDFCFFJMAFH_EJMLADDEHAE_OFFSET UNITYSDK_OFFSET(0xF89B5B0)
#define JDFCFFJMAFH_POMEOGCAPMG_OFFSET UNITYSDK_OFFSET(0xF89CBE0)
#define JDFCFFJMAFH__CTOR_OFFSET UNITYSDK_OFFSET(0xF89BBB0)

inline static constexpr unsigned int JDFCFFJMAFH_TypeDefinitionIndex = 88119;

class JDFCFFJMAFH : public ::PBJOCICFNGK
{
public:
	::KLIOMMIOFDC_1<::System::Boolean>* FCENFAOAIIC; // 0x50
	::BFMLEHMAGAK_1<::System::Boolean>* PGFCCINDFBH; // 0x58
	::KLIOMMIOFDC_1<::System::Single>* DMCABLBPJNH; // 0x60
	::KLIOMMIOFDC_1<::System::Boolean>* DFBMNNMDGKH; // 0x68
	::KLIOMMIOFDC_1<::MoleMole::TurnBattleEntityUnit*>* OOGANKBBGKO; // 0x70
	::BFMLEHMAGAK_1<::UnityEngine::Transform*>* BPELIDCCODN; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDFCFFJMAFH__CTOR_OFFSET))(this);
	}

	::System::Void EJMLADDEHAE(::LIBOIKJGAIH& EIEOJFEPMAB, ::IOOIHHOJOPI* IOKOLJDCKPN)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + JDFCFFJMAFH_EJMLADDEHAE_OFFSET))(this, EIEOJFEPMAB, IOKOLJDCKPN);
	}

	::UnityEngine::Vector3 EAECHFLCKFH()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + JDFCFFJMAFH_EAECHFLCKFH_OFFSET))(this);
	}

	::System::Boolean EGFOMCMINPL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JDFCFFJMAFH_EGFOMCMINPL_OFFSET))(this);
	}

	::System::Boolean ADKCHGEBACA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JDFCFFJMAFH_ADKCHGEBACA_OFFSET))(this);
	}

	::UnityEngine::Transform* BOCHMLHKOOL()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDFCFFJMAFH_BOCHMLHKOOL_OFFSET))(this);
	}

	::System::Boolean AEMDEJMKHGP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JDFCFFJMAFH_AEMDEJMKHGP_OFFSET))(this);
	}

	::UnityEngine::Vector3 AGJLAHEJOHP()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + JDFCFFJMAFH_AGJLAHEJOHP_OFFSET))(this);
	}

	::System::Boolean CGBNFNMGJBG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JDFCFFJMAFH_CGBNFNMGJBG_OFFSET))(this);
	}

	::System::Void AMMMEICJENB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDFCFFJMAFH_AMMMEICJENB_OFFSET))(this);
	}

	::UnityEngine::Vector3 BBCMNGGFBDC()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + JDFCFFJMAFH_BBCMNGGFBDC_OFFSET))(this);
	}

	::System::Boolean POMEOGCAPMG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JDFCFFJMAFH_POMEOGCAPMG_OFFSET))(this);
	}
};
