#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IECNLPPHCHI;
namespace MoleMole { class TextureSheetAnimCurveParam; }
namespace System { class Action; }

#define IECNLPPHCHI_PMDKIPGJMDD_AOJLHFJHOFC_OFFSET UNITYSDK_OFFSET(0x1609D640)
#define IECNLPPHCHI_PMDKIPGJMDD_HBKKBBNIEOI_OFFSET UNITYSDK_OFFSET(0x1609D6D0)
#define IECNLPPHCHI_PMDKIPGJMDD__CTOR_OFFSET UNITYSDK_OFFSET(0x1609D630)

inline static constexpr unsigned int IECNLPPHCHI_PMDKIPGJMDD_TypeDefinitionIndex = 64120;

class IECNLPPHCHI_PMDKIPGJMDD : public ::System::Object
{
public:
	::IECNLPPHCHI* KLHPEBKNIFB; // 0x10
	::System::Action* OCIKNBPALGG; // 0x18
	::MoleMole::TextureSheetAnimCurveParam* ALLOPLHJOMK; // 0x20
	::System::Int32 DBHFIJGFPOK; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IECNLPPHCHI_PMDKIPGJMDD__CTOR_OFFSET))(this);
	}

	::System::Void AOJLHFJHOFC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IECNLPPHCHI_PMDKIPGJMDD_AOJLHFJHOFC_OFFSET))(this);
	}

	::System::Void HBKKBBNIEOI(::System::Single HACJFKBLODH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IECNLPPHCHI_PMDKIPGJMDD_HBKKBBNIEOI_OFFSET))(this, HACJFKBLODH);
	}
};
