#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HIIBLFOIBDL;
class IFOHGNLIAKH;
namespace MoleMole { class UIUrbanMapPageContext; }
namespace MoleMole { class UIUrbanMapPageController; }

#define IIFDFDJDGOK_BJANDJKKNCD_OFFSET UNITYSDK_OFFSET(0x15EBF9B0)
#define IIFDFDJDGOK_BKMOKFBPGJN_OFFSET UNITYSDK_OFFSET(0x15EBFA40)
#define IIFDFDJDGOK_EAENLEECCCO_OFFSET UNITYSDK_OFFSET(0x15EBFB30)
#define IIFDFDJDGOK_GJKKANEPLPM_OFFSET UNITYSDK_OFFSET(0x15EBF960)
#define IIFDFDJDGOK_JFBNJEOPEDK_OFFSET UNITYSDK_OFFSET(0x15EBFAE0)
#define IIFDFDJDGOK_OLMDCCNBFFE_OFFSET UNITYSDK_OFFSET(0x15EBF8F0)
#define IIFDFDJDGOK__CTOR_OFFSET UNITYSDK_OFFSET(0x15EBF7F0)

inline static constexpr unsigned int IIFDFDJDGOK_TypeDefinitionIndex = 58099;

class IIFDFDJDGOK : public ::System::Object
{
public:
	::HIIBLFOIBDL* DBNBKCGCDOE; // 0x10

	::System::Void _ctor(::MoleMole::UIUrbanMapPageController* LGBHOFGBGHC)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIUrbanMapPageController*))((::PBYTE)hIl2Cpp + IIFDFDJDGOK__CTOR_OFFSET))(this, LGBHOFGBGHC);
	}

	::System::Void OLMDCCNBFFE(::IFOHGNLIAKH* CPAHLHMBPME, ::System::Int32 IIKMCHENBFD)
	{
		return ((::System::Void(*)(::PVOID, ::IFOHGNLIAKH*, ::System::Int32))((::PBYTE)hIl2Cpp + IIFDFDJDGOK_OLMDCCNBFFE_OFFSET))(this, CPAHLHMBPME, IIKMCHENBFD);
	}

	::System::Void GJKKANEPLPM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIFDFDJDGOK_GJKKANEPLPM_OFFSET))(this);
	}

	::System::Void BJANDJKKNCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIFDFDJDGOK_BJANDJKKNCD_OFFSET))(this);
	}

	::System::Boolean BKMOKFBPGJN(::IFOHGNLIAKH* CPAHLHMBPME, ::System::Int32 IIKMCHENBFD)
	{
		return ((::System::Boolean(*)(::PVOID, ::IFOHGNLIAKH*, ::System::Int32))((::PBYTE)hIl2Cpp + IIFDFDJDGOK_BKMOKFBPGJN_OFFSET))(this, CPAHLHMBPME, IIKMCHENBFD);
	}

	::System::Boolean JFBNJEOPEDK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IIFDFDJDGOK_JFBNJEOPEDK_OFFSET))(this);
	}

	static ::System::Boolean EAENLEECCCO(::MoleMole::UIUrbanMapPageContext* HBMGHPEPBNC)
	{
		return ((::System::Boolean(*)(::MoleMole::UIUrbanMapPageContext*))((::PBYTE)hIl2Cpp + IIFDFDJDGOK_EAENLEECCCO_OFFSET))(HBMGHPEPBNC);
	}
};
