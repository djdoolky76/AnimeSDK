#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PGFBGFBDBAH;
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIUrbanMapRightTastListWidget03WidgetController; }

#define PGFBGFBDBAH_GHDFDINAMHI_BBMDEOFGCPJ_OFFSET UNITYSDK_OFFSET(0x1C2A56B0)
#define PGFBGFBDBAH_GHDFDINAMHI_CFOHEMJENBP_OFFSET UNITYSDK_OFFSET(0x173286E0)
#define PGFBGFBDBAH_GHDFDINAMHI_DFHCAOBEADI_OFFSET UNITYSDK_OFFSET(0x173286D0)
#define PGFBGFBDBAH_GHDFDINAMHI_GJMDGHPFNMM_OFFSET UNITYSDK_OFFSET(0x17328450)
#define PGFBGFBDBAH_GHDFDINAMHI_NBMCMDDJAFL_OFFSET UNITYSDK_OFFSET(0x173284C0)
#define PGFBGFBDBAH_GHDFDINAMHI__CTOR_OFFSET UNITYSDK_OFFSET(0x17328440)

inline static constexpr unsigned int PGFBGFBDBAH_GHDFDINAMHI_TypeDefinitionIndex = 46102;

class PGFBGFBDBAH_GHDFDINAMHI : public ::System::Object
{
public:
	::PGFBGFBDBAH* KLHPEBKNIFB; // 0x10
	::System::Boolean NFGLDDOEDML; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGFBGFBDBAH_GHDFDINAMHI__CTOR_OFFSET))(this);
	}

	::System::Boolean GJMDGHPFNMM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PGFBGFBDBAH_GHDFDINAMHI_GJMDGHPFNMM_OFFSET))(this);
	}

	::System::Void NBMCMDDJAFL(::MoleMole::UIUrbanMapRightTastListWidget03WidgetController* NCIMBHDKIJM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIUrbanMapRightTastListWidget03WidgetController*))((::PBYTE)hIl2Cpp + PGFBGFBDBAH_GHDFDINAMHI_NBMCMDDJAFL_OFFSET))(this, NCIMBHDKIJM);
	}

	::System::Boolean DFHCAOBEADI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PGFBGFBDBAH_GHDFDINAMHI_DFHCAOBEADI_OFFSET))(this);
	}

	::System::Void CFOHEMJENBP(::MoleMole::UIUrbanMapRightTastListWidget03WidgetController* NCIMBHDKIJM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIUrbanMapRightTastListWidget03WidgetController*))((::PBYTE)hIl2Cpp + PGFBGFBDBAH_GHDFDINAMHI_CFOHEMJENBP_OFFSET))(this, NCIMBHDKIJM);
	}

	::MoleMole::UIControllerContextBase* BBMDEOFGCPJ()
	{
		return ((::MoleMole::UIControllerContextBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGFBGFBDBAH_GHDFDINAMHI_BBMDEOFGCPJ_OFFSET))(this);
	}
};
