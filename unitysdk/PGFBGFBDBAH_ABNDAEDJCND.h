#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PGFBGFBDBAH;
class PGFBGFBDBAH_LIGMMPDPPDA;
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIUrbanMapRightStreetInfoController_Bangkov; }
namespace MoleMole { class UrbanMapRightBangkovController; }

#define PGFBGFBDBAH_ABNDAEDJCND_ALGHLPEDCBJ_OFFSET UNITYSDK_OFFSET(0x178C6B00)
#define PGFBGFBDBAH_ABNDAEDJCND_CIGGHKAMGNP_OFFSET UNITYSDK_OFFSET(0x178C6600)
#define PGFBGFBDBAH_ABNDAEDJCND_FBDHHIIHEEO_OFFSET UNITYSDK_OFFSET(0x178C6D70)
#define PGFBGFBDBAH_ABNDAEDJCND_GDCCIDIAPLF_OFFSET UNITYSDK_OFFSET(0x178C5EA0)
#define PGFBGFBDBAH_ABNDAEDJCND_JMDFFNKHHCN_OFFSET UNITYSDK_OFFSET(0x178C62D0)
#define PGFBGFBDBAH_ABNDAEDJCND_LKHGMPEFPFG_OFFSET UNITYSDK_OFFSET(0x178C60B0)
#define PGFBGFBDBAH_ABNDAEDJCND__CTOR_OFFSET UNITYSDK_OFFSET(0x178C5E90)

inline static constexpr unsigned int PGFBGFBDBAH_ABNDAEDJCND_TypeDefinitionIndex = 46116;

class PGFBGFBDBAH_ABNDAEDJCND : public ::System::Object
{
public:
	::PGFBGFBDBAH* KLHPEBKNIFB; // 0x10
	::PGFBGFBDBAH_LIGMMPDPPDA* PMGGOIECDHC; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGFBGFBDBAH_ABNDAEDJCND__CTOR_OFFSET))(this);
	}

	::System::Void GDCCIDIAPLF(::MoleMole::UrbanMapRightBangkovController* NCIMBHDKIJM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UrbanMapRightBangkovController*))((::PBYTE)hIl2Cpp + PGFBGFBDBAH_ABNDAEDJCND_GDCCIDIAPLF_OFFSET))(this, NCIMBHDKIJM);
	}

	::MoleMole::UIControllerContextBase* LKHGMPEFPFG()
	{
		return ((::MoleMole::UIControllerContextBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGFBGFBDBAH_ABNDAEDJCND_LKHGMPEFPFG_OFFSET))(this);
	}

	::System::Void JMDFFNKHHCN(::MoleMole::UrbanMapRightBangkovController* NCIMBHDKIJM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UrbanMapRightBangkovController*))((::PBYTE)hIl2Cpp + PGFBGFBDBAH_ABNDAEDJCND_JMDFFNKHHCN_OFFSET))(this, NCIMBHDKIJM);
	}

	::System::Void CIGGHKAMGNP(::MoleMole::UIUrbanMapRightStreetInfoController_Bangkov* NCIMBHDKIJM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIUrbanMapRightStreetInfoController_Bangkov*))((::PBYTE)hIl2Cpp + PGFBGFBDBAH_ABNDAEDJCND_CIGGHKAMGNP_OFFSET))(this, NCIMBHDKIJM);
	}

	::System::Void ALGHLPEDCBJ(::MoleMole::UIUrbanMapRightStreetInfoController_Bangkov* NCIMBHDKIJM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIUrbanMapRightStreetInfoController_Bangkov*))((::PBYTE)hIl2Cpp + PGFBGFBDBAH_ABNDAEDJCND_ALGHLPEDCBJ_OFFSET))(this, NCIMBHDKIJM);
	}

	::MoleMole::UIControllerContextBase* FBDHHIIHEEO()
	{
		return ((::MoleMole::UIControllerContextBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGFBGFBDBAH_ABNDAEDJCND_FBDHHIIHEEO_OFFSET))(this);
	}
};
