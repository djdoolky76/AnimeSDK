#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HBEBFHNELBM;
namespace MoleMole { class UICinemaMovieWidgetController; }

#define COIKBJKDCBM_AJCBGJGDANO_OFFSET UNITYSDK_OFFSET(0x15A1F830)
#define COIKBJKDCBM_FEFDJJEDMFC_OFFSET UNITYSDK_OFFSET(0x15A1F730)
#define COIKBJKDCBM_LCDFBKCBBGL_OFFSET UNITYSDK_OFFSET(0x15A1FB30)
#define COIKBJKDCBM_ODPPBBAIGLF_OFFSET UNITYSDK_OFFSET(0x15A1FB80)
#define COIKBJKDCBM__CTOR_OFFSET UNITYSDK_OFFSET(0x15A1FB70)

inline static constexpr unsigned int COIKBJKDCBM_TypeDefinitionIndex = 68068;

class COIKBJKDCBM : public ::System::Object
{
public:
	::MoleMole::UICinemaMovieWidgetController* NCIMBHDKIJM; // 0x10
	::HBEBFHNELBM* JLOGOONPDAF; // 0x18
	::System::Int32 NEOKDAONJEJ; // 0x20
	::System::Int32 DEAJOMHIELB; // 0x24
	::System::Boolean LIEJIGMGGOL; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COIKBJKDCBM__CTOR_OFFSET))(this);
	}

	::System::Void FEFDJJEDMFC(::MoleMole::UICinemaMovieWidgetController* NCIMBHDKIJM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UICinemaMovieWidgetController*))((::PBYTE)hIl2Cpp + COIKBJKDCBM_FEFDJJEDMFC_OFFSET))(this, NCIMBHDKIJM);
	}

	::System::Boolean LCDFBKCBBGL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + COIKBJKDCBM_LCDFBKCBBGL_OFFSET))(this);
	}

	::System::Void AJCBGJGDANO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COIKBJKDCBM_AJCBGJGDANO_OFFSET))(this);
	}

	::System::Void ODPPBBAIGLF(::System::Boolean LIEJIGMGGOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + COIKBJKDCBM_ODPPBBAIGLF_OFFSET))(this, LIEJIGMGGOL);
	}
};
