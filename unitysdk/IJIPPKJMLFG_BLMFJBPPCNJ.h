#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIWindowController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IJIPPKJMLFG_BLMFJBPPCNJ_FEDGMHBBEEO_OFFSET UNITYSDK_OFFSET(0x1657AFB0)
#define IJIPPKJMLFG_BLMFJBPPCNJ_GNNKBJPGDFK_OFFSET UNITYSDK_OFFSET(0x1657AD20)
#define IJIPPKJMLFG_BLMFJBPPCNJ_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1657B220)
#define IJIPPKJMLFG_BLMFJBPPCNJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1657ACA0)

inline static constexpr unsigned int IJIPPKJMLFG_BLMFJBPPCNJ_TypeDefinitionIndex = 71606;

class IJIPPKJMLFG_BLMFJBPPCNJ : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Object*>* JPCJMFPAFCG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJIPPKJMLFG_BLMFJBPPCNJ__CTOR_OFFSET))(this);
	}

	::System::Boolean GNNKBJPGDFK(::MoleMole::UIWindowController* PGEBIJOJGED, ::MoleMole::UIWindowController*& FKDLJCGEBNI)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIWindowController*, ::MoleMole::UIWindowController*&))((::PBYTE)hIl2Cpp + IJIPPKJMLFG_BLMFJBPPCNJ_GNNKBJPGDFK_OFFSET))(this, PGEBIJOJGED, FKDLJCGEBNI);
	}

	::System::Void FEDGMHBBEEO(::MoleMole::UIWindowController* PGEBIJOJGED, ::MoleMole::UIWindowController* OIKHDBFFKKF)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + IJIPPKJMLFG_BLMFJBPPCNJ_FEDGMHBBEEO_OFFSET))(this, PGEBIJOJGED, OIKHDBFFKKF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJIPPKJMLFG_BLMFJBPPCNJ_PHOADBJGFBE_OFFSET))(this);
	}
};
