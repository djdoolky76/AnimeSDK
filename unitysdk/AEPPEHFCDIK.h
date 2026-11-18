#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIGeneralConsoleBaseBtnWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }

#define AEPPEHFCDIK_AGPKEFOFBGC_OFFSET UNITYSDK_OFFSET(0x17CBC9F0)
#define AEPPEHFCDIK_BKNBLPAFOLL_OFFSET UNITYSDK_OFFSET(0x17CBCBF0)
#define AEPPEHFCDIK_KGDFFFKDAIJ_OFFSET UNITYSDK_OFFSET(0x17CBD210)
#define AEPPEHFCDIK__CTOR_OFFSET UNITYSDK_OFFSET(0x17CBC960)

inline static constexpr unsigned int AEPPEHFCDIK_TypeDefinitionIndex = 84115;

class AEPPEHFCDIK : public ::System::Object
{
public:
	::MoleMole::UIBaseController* FKJAHOHKHAK; // 0x10
	::UnityEngine::RectTransform* CHCKGOCGMJJ; // 0x18
	::System::Collections::Generic::List_1<::MoleMole::UIGeneralConsoleBaseBtnWidgetController*>* KHJJEGPFCIK; // 0x20
	::System::Int32 FKGNDKNHAEH; // 0x28

	::System::Void _ctor(::MoleMole::UIBaseController* AEJBCMBCDJE, ::UnityEngine::RectTransform* EMDOIDLAFDB, ::System::Int32 FKGNDKNHAEH)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*, ::UnityEngine::RectTransform*, ::System::Int32))((::PBYTE)hIl2Cpp + AEPPEHFCDIK__CTOR_OFFSET))(this, AEJBCMBCDJE, EMDOIDLAFDB, FKGNDKNHAEH);
	}

	::System::Void AGPKEFOFBGC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEPPEHFCDIK_AGPKEFOFBGC_OFFSET))(this);
	}

	::System::Int32 BKNBLPAFOLL(::MoleMole::UIGeneralConsoleBaseBtnWidgetController* LKMKKKNOMEE, ::MoleMole::UIGeneralConsoleBaseBtnWidgetController* MKFBHBIJMCE)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::UIGeneralConsoleBaseBtnWidgetController*, ::MoleMole::UIGeneralConsoleBaseBtnWidgetController*))((::PBYTE)hIl2Cpp + AEPPEHFCDIK_BKNBLPAFOLL_OFFSET))(this, LKMKKKNOMEE, MKFBHBIJMCE);
	}

	::System::Void KGDFFFKDAIJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEPPEHFCDIK_KGDFFFKDAIJ_OFFSET))(this);
	}
};
