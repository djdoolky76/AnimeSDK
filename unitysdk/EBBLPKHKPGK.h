#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DJFILCFPGAE.h"

class GIBMJLOJLKD;
class MFKICFOILDD;
namespace MoleMole { class UIActivePropsPageController; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UITabButton; }

#define EBBLPKHKPGK_AILKDMOPCAP_OFFSET UNITYSDK_OFFSET(0x12BDD6F0)
#define EBBLPKHKPGK_DKNKNENGHFC_OFFSET UNITYSDK_OFFSET(0x12BDD660)
#define EBBLPKHKPGK_DLJEAGFGEBN_OFFSET UNITYSDK_OFFSET(0x12BDCAC0)
#define EBBLPKHKPGK_EDKMDNOCJCI_OFFSET UNITYSDK_OFFSET(0x12BDCB70)
#define EBBLPKHKPGK__CTOR_OFFSET UNITYSDK_OFFSET(0x12BDC9B0)

inline static constexpr unsigned int EBBLPKHKPGK_TypeDefinitionIndex = 54793;

class EBBLPKHKPGK : public ::DJFILCFPGAE
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::UI::Extension::UITabButton*>* NHDJFOEMDAJ; // 0x30
	::MFKICFOILDD* KMMKMGDHCOI; // 0x38

	::System::Void _ctor(::GIBMJLOJLKD* AEJAMJDBHAM, ::MoleMole::UIActivePropsPageController* JNLBPMKIFNK, ::UnityEngine::Transform* IAPKABMDJNF)
	{
		return ((::System::Void(*)(::PVOID, ::GIBMJLOJLKD*, ::MoleMole::UIActivePropsPageController*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + EBBLPKHKPGK__CTOR_OFFSET))(this, AEJAMJDBHAM, JNLBPMKIFNK, IAPKABMDJNF);
	}

	::System::Void DLJEAGFGEBN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBBLPKHKPGK_DLJEAGFGEBN_OFFSET))(this);
	}

	::System::Void DKNKNENGHFC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBBLPKHKPGK_DKNKNENGHFC_OFFSET))(this);
	}

	::System::Void EDKMDNOCJCI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBBLPKHKPGK_EDKMDNOCJCI_OFFSET))(this);
	}

	::System::Void AILKDMOPCAP(::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EBBLPKHKPGK_AILKDMOPCAP_OFFSET))(this, ABHBKFJKINO);
	}
};
