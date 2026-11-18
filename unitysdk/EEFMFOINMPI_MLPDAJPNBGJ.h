#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/GKLCNICJJOB.h"

class EEFMFOINMPI;
class MonoUITableScrollV2;
class MonoUITableScrollV2_InitScrollViewData;
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIMainCitySidebarItemContext; }
namespace System::Collections { class IEnumerable; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define EEFMFOINMPI_MLPDAJPNBGJ_BIALHNAOJFE_OFFSET UNITYSDK_OFFSET(0x13E73E60)
#define EEFMFOINMPI_MLPDAJPNBGJ_CEELEDDMNJA_OFFSET UNITYSDK_OFFSET(0x13E73C00)
#define EEFMFOINMPI_MLPDAJPNBGJ_CEPNKMLJBDC_OFFSET UNITYSDK_OFFSET(0x13E73BA0)
#define EEFMFOINMPI_MLPDAJPNBGJ_CFENLKANILF_OFFSET UNITYSDK_OFFSET(0x14A85EB0)
#define EEFMFOINMPI_MLPDAJPNBGJ_DKBNILCFHKF_OFFSET UNITYSDK_OFFSET(0x14A86180)
#define EEFMFOINMPI_MLPDAJPNBGJ_LEBGECMIACD_OFFSET UNITYSDK_OFFSET(0x14A85F30)
#define EEFMFOINMPI_MLPDAJPNBGJ__CTOR_OFFSET UNITYSDK_OFFSET(0x13E73B90)

inline static constexpr unsigned int EEFMFOINMPI_MLPDAJPNBGJ_TypeDefinitionIndex = 88949;

class EEFMFOINMPI_MLPDAJPNBGJ : public ::System::Object
{
public:
	::EEFMFOINMPI* KLHPEBKNIFB; // 0x10
	::MonoUITableScrollV2* FKJMNHMBELE; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEFMFOINMPI_MLPDAJPNBGJ__CTOR_OFFSET))(this);
	}

	::System::Collections::IEnumerable* CEPNKMLJBDC()
	{
		return ((::System::Collections::IEnumerable*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEFMFOINMPI_MLPDAJPNBGJ_CEPNKMLJBDC_OFFSET))(this);
	}

	::GKLCNICJJOB CEELEDDMNJA(::System::Int32 ABHBKFJKINO)
	{
		return ((::GKLCNICJJOB(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EEFMFOINMPI_MLPDAJPNBGJ_CEELEDDMNJA_OFFSET))(this, ABHBKFJKINO);
	}

	::MoleMole::ScrollViewItemWidgetController* BIALHNAOJFE(::System::Int32 ABHBKFJKINO)
	{
		return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EEFMFOINMPI_MLPDAJPNBGJ_BIALHNAOJFE_OFFSET))(this, ABHBKFJKINO);
	}

	::MonoUITableScrollV2_InitScrollViewData* CFENLKANILF()
	{
		return ((::MonoUITableScrollV2_InitScrollViewData*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEFMFOINMPI_MLPDAJPNBGJ_CFENLKANILF_OFFSET))(this);
	}

	::System::Void LEBGECMIACD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEFMFOINMPI_MLPDAJPNBGJ_LEBGECMIACD_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::MoleMole::UIMainCitySidebarItemContext*>* DKBNILCFHKF()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::MoleMole::UIMainCitySidebarItemContext*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEFMFOINMPI_MLPDAJPNBGJ_DKBNILCFHKF_OFFSET))(this);
	}
};
