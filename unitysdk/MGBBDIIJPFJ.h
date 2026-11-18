#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FAMHFBEPBED.h"
#include "unitysdk/FMFAMPOOKKC.h"
#include "unitysdk/MJHDNMKGLBJ.h"
#include "unitysdk/MoleMole/Battle/PinballAbilityConfigData.h"
#include "unitysdk/MoleMole/Battle/PinballBallAbilityData.h"
#include "unitysdk/MoleMole/Battle/PinballColliderData.h"
#include "unitysdk/MoleMole/Battle/PinballContactData.h"
#include "unitysdk/MoleMole/Battle/PinballPaddleData.h"
#include "unitysdk/MoleMole/Battle/PinballPhysicsData.h"

class CGOIBNCKCCJ;
class OFHKKFOCBCB;
namespace System { class String; }

#define MGBBDIIJPFJ_BCOPEILMCCJ_OFFSET UNITYSDK_OFFSET(0x17D225E0)
#define MGBBDIIJPFJ_EDEFKEOKLII_OFFSET UNITYSDK_OFFSET(0x17D225D0)
#define MGBBDIIJPFJ_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x17D22170)
#define MGBBDIIJPFJ_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x17D223B0)
#define MGBBDIIJPFJ_LAFJCLNGFAJ_OFFSET UNITYSDK_OFFSET(0x17D22360)
#define MGBBDIIJPFJ_LHJKKODDKPL_OFFSET UNITYSDK_OFFSET(0x17D224F0)
#define MGBBDIIJPFJ_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x17D22630)
#define MGBBDIIJPFJ_MJNJGCDNFPP_OFFSET UNITYSDK_OFFSET(0x17D22310)
#define MGBBDIIJPFJ_NNFBODHEJGB_OFFSET UNITYSDK_OFFSET(0x17D22540)
#define MGBBDIIJPFJ_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x17D22040)
#define MGBBDIIJPFJ__CCTOR_OFFSET UNITYSDK_OFFSET(0x17D221C0)
#define MGBBDIIJPFJ__CTOR_OFFSET UNITYSDK_OFFSET(0x17D22240)

inline static constexpr unsigned int MGBBDIIJPFJ_TypeDefinitionIndex = 91583;

class MGBBDIIJPFJ : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Single ANJCJJMFJJE; // 0x0
	// static const ::System::Single EPGDBCECLDH; // 0x0
	// static const ::System::Single NGDPHOIAPBG; // 0x0
	// static const ::System::Single PPIFEFAHDJO; // 0x0
	// static const ::System::Single MLPPDCAHIGE; // 0x0
	// static const ::System::Single AMIHOPLEJBE; // 0x0
	// static const ::System::Int32 IPAPPCOIEIF = 0x5E; // 0x0
	::MoleMole::Battle::PinballAbilityConfigData INDLIGIKMJI; // 0x48
	::OFHKKFOCBCB* JHMNLPLOFNA; // 0x80
	::System::String* BAHGNGGKHFP; // 0x88
	::MoleMole::Battle::PinballBallAbilityData NMALMGEFHGF; // 0x90
	::MoleMole::Battle::PinballColliderData GALHMINJEKJ; // 0xD0
	::CGOIBNCKCCJ* PJCMEALOMCA; // 0xD8
	::MoleMole::Battle::PinballContactData JPMDEGCNFKF; // 0xE0
	::MoleMole::Battle::PinballPhysicsData OIGIGPANBCB; // 0x140
	::FAMHFBEPBED AAEDPMHMDIK; // 0x15C
	::MoleMole::Battle::PinballPaddleData BAFJNOFPACG; // 0x160

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MGBBDIIJPFJ__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGBBDIIJPFJ__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGBBDIIJPFJ_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MGBBDIIJPFJ_GETCLASSID_OFFSET))(this);
	}

	::System::Boolean MJNJGCDNFPP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MGBBDIIJPFJ_MJNJGCDNFPP_OFFSET))(this);
	}

	static ::MGBBDIIJPFJ* JFDOOELFAOA()
	{
		return ((::MGBBDIIJPFJ*(*)())((::PBYTE)hIl2Cpp + MGBBDIIJPFJ_JFDOOELFAOA_OFFSET))();
	}

	::System::Boolean LHJKKODDKPL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MGBBDIIJPFJ_LHJKKODDKPL_OFFSET))(this);
	}

	::System::Boolean NNFBODHEJGB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MGBBDIIJPFJ_NNFBODHEJGB_OFFSET))(this);
	}

	::System::Boolean LAFJCLNGFAJ(::FMFAMPOOKKC FCPCLIJNDLA)
	{
		return ((::System::Boolean(*)(::PVOID, ::FMFAMPOOKKC))((::PBYTE)hIl2Cpp + MGBBDIIJPFJ_LAFJCLNGFAJ_OFFSET))(this, FCPCLIJNDLA);
	}

	::System::Boolean EDEFKEOKLII()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MGBBDIIJPFJ_EDEFKEOKLII_OFFSET))(this);
	}

	::System::Boolean BCOPEILMCCJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MGBBDIIJPFJ_BCOPEILMCCJ_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MGBBDIIJPFJ_MEFBHFEOKGH_OFFSET))(this);
	}
};
