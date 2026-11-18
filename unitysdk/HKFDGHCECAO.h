#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/AssetPath.h"

namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIGeneralSmallTipsWidgetController; }
namespace System { class String; }
namespace UnityEngine { class RectTransform; }

#define HKFDGHCECAO_FAOHKPBBHEB_OFFSET UNITYSDK_OFFSET(0x17A56930)
#define HKFDGHCECAO_HFBPONNNLBA_OFFSET UNITYSDK_OFFSET(0x17A56980)
#define HKFDGHCECAO_NAJDECMJIAL_OFFSET UNITYSDK_OFFSET(0x17A56BE0)
#define HKFDGHCECAO__CTOR_OFFSET UNITYSDK_OFFSET(0x17A56920)

inline static constexpr unsigned int HKFDGHCECAO_TypeDefinitionIndex = 72851;

class HKFDGHCECAO : public ::System::Object
{
public:
	::MoleMole::UIGeneralSmallTipsWidgetController* JMKJLGHNHLD; // 0x10
	::MoleMole::UIBaseController* JNLBPMKIFNK; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKFDGHCECAO__CTOR_OFFSET))(this);
	}

	::System::Void FAOHKPBBHEB(::MoleMole::UIBaseController* NCIMBHDKIJM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*))((::PBYTE)hIl2Cpp + HKFDGHCECAO_FAOHKPBBHEB_OFFSET))(this, NCIMBHDKIJM);
	}

	::System::Void HFBPONNNLBA(::System::String* FCCLIEJAKLI, ::Foundation::AssetPath FNJPKKAHJAJ, ::UnityEngine::RectTransform* OPIKLNMPMEH)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Foundation::AssetPath, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + HKFDGHCECAO_HFBPONNNLBA_OFFSET))(this, FCCLIEJAKLI, FNJPKKAHJAJ, OPIKLNMPMEH);
	}

	::System::Void NAJDECMJIAL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKFDGHCECAO_NAJDECMJIAL_OFFSET))(this);
	}
};
