#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define FGADNDHGFCB_AALLFHIPJNH_OFFSET UNITYSDK_OFFSET(0xBB40780)
#define FGADNDHGFCB_DFPBCDLHLMK_OFFSET UNITYSDK_OFFSET(0xBB40A50)
#define FGADNDHGFCB_ILMNNJICGGK_OFFSET UNITYSDK_OFFSET(0xBB416B0)
#define FGADNDHGFCB_KBKBKHIKOEK_OFFSET UNITYSDK_OFFSET(0xBB41510)
#define FGADNDHGFCB_KGHGIFDLGJN_OFFSET UNITYSDK_OFFSET(0xBB40CA0)
#define FGADNDHGFCB_LIKDKJCJEFJ_OFFSET UNITYSDK_OFFSET(0xBB41760)
#define FGADNDHGFCB_OBJJDJNDEAO_OFFSET UNITYSDK_OFFSET(0xBB40960)

inline static constexpr unsigned int FGADNDHGFCB_TypeDefinitionIndex = 48749;

class FGADNDHGFCB : public ::System::Object
{
public:
	static ::System::Void AALLFHIPJNH(::System::Single APBNGHKCCJF, ::System::Single JEOHKNNMJPO, ::System::Single AMFLJNELLKH, ::System::Action_1<::System::Boolean>* LGIANJKAEIE, ::System::Action* GDJCIGAKMOD)
	{
		return ((::System::Void(*)(::System::Single, ::System::Single, ::System::Single, ::System::Action_1<::System::Boolean>*, ::System::Action*))((::PBYTE)hIl2Cpp + FGADNDHGFCB_AALLFHIPJNH_OFFSET))(APBNGHKCCJF, JEOHKNNMJPO, AMFLJNELLKH, LGIANJKAEIE, GDJCIGAKMOD);
	}

	static ::System::Double OBJJDJNDEAO(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Double(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + FGADNDHGFCB_OBJJDJNDEAO_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Void DFPBCDLHLMK(::MoleMole::Battle::Entity* KECKGDFIALJ, ::UnityEngine::Vector3 OHOGDOMNHNK, ::System::Single PGFOFMIGAPE)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + FGADNDHGFCB_DFPBCDLHLMK_OFFSET))(KECKGDFIALJ, OHOGDOMNHNK, PGFOFMIGAPE);
	}

	static ::System::Boolean KGHGIFDLGJN(::System::Boolean JMLHCGIOAEE)
	{
		return ((::System::Boolean(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FGADNDHGFCB_KGHGIFDLGJN_OFFSET))(JMLHCGIOAEE);
	}

	static ::System::Void KBKBKHIKOEK(::System::Single APBNGHKCCJF, ::System::Single JEOHKNNMJPO, ::System::Single AMFLJNELLKH, ::System::Action* GDJCIGAKMOD)
	{
		return ((::System::Void(*)(::System::Single, ::System::Single, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + FGADNDHGFCB_KBKBKHIKOEK_OFFSET))(APBNGHKCCJF, JEOHKNNMJPO, AMFLJNELLKH, GDJCIGAKMOD);
	}

	static ::System::Single ILMNNJICGGK(::MoleMole::Battle::Entity* MIDFEEMCAHB, ::MoleMole::Battle::Entity* EJBAJJPGEEJ)
	{
		return ((::System::Single(*)(::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + FGADNDHGFCB_ILMNNJICGGK_OFFSET))(MIDFEEMCAHB, EJBAJJPGEEJ);
	}

	static ::MoleMole::Battle::Entity* LIKDKJCJEFJ(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::MoleMole::Battle::Entity*(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + FGADNDHGFCB_LIKDKJCJEFJ_OFFSET))(KECKGDFIALJ);
	}
};
