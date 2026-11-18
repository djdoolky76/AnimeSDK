#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIWindowController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IJIPPKJMLFG_MCLLCBEOGOI_FEDGMHBBEEO_OFFSET UNITYSDK_OFFSET(0x14A276F0)
#define IJIPPKJMLFG_MCLLCBEOGOI_GMCNAEPJAPL_OFFSET UNITYSDK_OFFSET(0x14A27990)
#define IJIPPKJMLFG_MCLLCBEOGOI_GNNKBJPGDFK_OFFSET UNITYSDK_OFFSET(0x14A275B0)
#define IJIPPKJMLFG_MCLLCBEOGOI__CTOR_OFFSET UNITYSDK_OFFSET(0x14A27500)

inline static constexpr unsigned int IJIPPKJMLFG_MCLLCBEOGOI_TypeDefinitionIndex = 71605;

class IJIPPKJMLFG_MCLLCBEOGOI : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::MoleMole::UIWindowController*>* CMHOBAODNFN; // 0x10
	::MoleMole::UIWindowController* KDCBMPNLAII; // 0x18

	::System::Void _ctor(::MoleMole::UIWindowController* PGEBIJOJGED, ::MoleMole::UIWindowController* OIKHDBFFKKF)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + IJIPPKJMLFG_MCLLCBEOGOI__CTOR_OFFSET))(this, PGEBIJOJGED, OIKHDBFFKKF);
	}

	::System::Boolean GNNKBJPGDFK(::MoleMole::UIWindowController* PGEBIJOJGED, ::MoleMole::UIWindowController*& FKDLJCGEBNI)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIWindowController*, ::MoleMole::UIWindowController*&))((::PBYTE)hIl2Cpp + IJIPPKJMLFG_MCLLCBEOGOI_GNNKBJPGDFK_OFFSET))(this, PGEBIJOJGED, FKDLJCGEBNI);
	}

	::System::Void FEDGMHBBEEO(::MoleMole::UIWindowController* PGEBIJOJGED)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + IJIPPKJMLFG_MCLLCBEOGOI_FEDGMHBBEEO_OFFSET))(this, PGEBIJOJGED);
	}

	::MoleMole::UIWindowController* GMCNAEPJAPL()
	{
		return ((::MoleMole::UIWindowController*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJIPPKJMLFG_MCLLCBEOGOI_GMCNAEPJAPL_OFFSET))(this);
	}
};
