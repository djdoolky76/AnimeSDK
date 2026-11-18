#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PGFBGFBDBAH;
class PGFBGFBDBAH_LIGMMPDPPDA;
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIUrbanMapRightStreetInfoController_Collect; }
namespace MoleMole { class UIUrbanMapRightStreetInfoController_Quest; }

#define PGFBGFBDBAH_EJDFNIFFLLN_DJCMPLNJCOI_OFFSET UNITYSDK_OFFSET(0x178C7A70)
#define PGFBGFBDBAH_EJDFNIFFLLN_EMHANGDANDB_OFFSET UNITYSDK_OFFSET(0x178C7C30)
#define PGFBGFBDBAH_EJDFNIFFLLN_ILIIEBNFCIG_OFFSET UNITYSDK_OFFSET(0x178C7300)
#define PGFBGFBDBAH_EJDFNIFFLLN_IMOECPLAOCA_OFFSET UNITYSDK_OFFSET(0x178C8130)
#define PGFBGFBDBAH_EJDFNIFFLLN_OPIGHAFLCEC_OFFSET UNITYSDK_OFFSET(0x178C7090)
#define PGFBGFBDBAH_EJDFNIFFLLN_PMPKFAPGFPO_OFFSET UNITYSDK_OFFSET(0x178C7800)
#define PGFBGFBDBAH_EJDFNIFFLLN__CTOR_OFFSET UNITYSDK_OFFSET(0x178C7080)

inline static constexpr unsigned int PGFBGFBDBAH_EJDFNIFFLLN_TypeDefinitionIndex = 46098;

class PGFBGFBDBAH_EJDFNIFFLLN : public ::System::Object
{
public:
	::PGFBGFBDBAH* KLHPEBKNIFB; // 0x10
	::PGFBGFBDBAH_LIGMMPDPPDA* PMGGOIECDHC; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGFBGFBDBAH_EJDFNIFFLLN__CTOR_OFFSET))(this);
	}

	::System::Void OPIGHAFLCEC(::MoleMole::UIUrbanMapRightStreetInfoController_Quest* NCIMBHDKIJM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIUrbanMapRightStreetInfoController_Quest*))((::PBYTE)hIl2Cpp + PGFBGFBDBAH_EJDFNIFFLLN_OPIGHAFLCEC_OFFSET))(this, NCIMBHDKIJM);
	}

	::System::Void ILIIEBNFCIG(::MoleMole::UIUrbanMapRightStreetInfoController_Collect* NCIMBHDKIJM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIUrbanMapRightStreetInfoController_Collect*))((::PBYTE)hIl2Cpp + PGFBGFBDBAH_EJDFNIFFLLN_ILIIEBNFCIG_OFFSET))(this, NCIMBHDKIJM);
	}

	::System::Void PMPKFAPGFPO(::MoleMole::UIUrbanMapRightStreetInfoController_Collect* NCIMBHDKIJM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIUrbanMapRightStreetInfoController_Collect*))((::PBYTE)hIl2Cpp + PGFBGFBDBAH_EJDFNIFFLLN_PMPKFAPGFPO_OFFSET))(this, NCIMBHDKIJM);
	}

	::MoleMole::UIControllerContextBase* DJCMPLNJCOI()
	{
		return ((::MoleMole::UIControllerContextBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGFBGFBDBAH_EJDFNIFFLLN_DJCMPLNJCOI_OFFSET))(this);
	}

	::System::Void EMHANGDANDB(::MoleMole::UIUrbanMapRightStreetInfoController_Quest* NCIMBHDKIJM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIUrbanMapRightStreetInfoController_Quest*))((::PBYTE)hIl2Cpp + PGFBGFBDBAH_EJDFNIFFLLN_EMHANGDANDB_OFFSET))(this, NCIMBHDKIJM);
	}

	::MoleMole::UIControllerContextBase* IMOECPLAOCA()
	{
		return ((::MoleMole::UIControllerContextBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGFBGFBDBAH_EJDFNIFFLLN_IMOECPLAOCA_OFFSET))(this);
	}
};
