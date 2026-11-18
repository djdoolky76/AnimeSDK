#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CNGOPCAEJMN.h"
#include "unitysdk/JHPEPDKHCJP.h"

class HCIANHKCFIL;
class IJGMIKPLNPL;
class KBEJDIFPLDP;
class LONKKOMHFMD;
namespace Cinemachine { class CinemachineComposer; }
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace Foundation { template <typename T> class AggregateObject_1; }
namespace MoleMole::Cameras { class CameraDataAccessor; }
namespace MoleMole::Config { class ConfigCameraComposer; }
namespace System { class Action; }

#define AFNFJOBKDJO_BEJMBJCNEHI_OFFSET UNITYSDK_OFFSET(0x1439AD60)
#define AFNFJOBKDJO_BGOODFHPHHN_OFFSET UNITYSDK_OFFSET(0x1439AE70)
#define AFNFJOBKDJO_BJJFIODFCHM_OFFSET UNITYSDK_OFFSET(0x1439AAB0)
#define AFNFJOBKDJO_EDEFLFIKNFK_OFFSET UNITYSDK_OFFSET(0x1439A490)
#define AFNFJOBKDJO_FNNECGKFALM_OFFSET UNITYSDK_OFFSET(0x1439ACD0)
#define AFNFJOBKDJO_LBCDGHMEJMM_OFFSET UNITYSDK_OFFSET(0x1439AD70)
#define AFNFJOBKDJO_NEJABFNFKIN_OFFSET UNITYSDK_OFFSET(0x1439AF10)
#define AFNFJOBKDJO_NIGDIMFIAEJ_OFFSET UNITYSDK_OFFSET(0x1439AE80)
#define AFNFJOBKDJO_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x1439AE00)
#define AFNFJOBKDJO_OKLLFEIJKHN_OFFSET UNITYSDK_OFFSET(0x1439A270)
#define AFNFJOBKDJO_ONINITIALIZED_OFFSET UNITYSDK_OFFSET(0x14399D10)
#define AFNFJOBKDJO__CTOR_OFFSET UNITYSDK_OFFSET(0x1439ACC0)

inline static constexpr unsigned int AFNFJOBKDJO_TypeDefinitionIndex = 39819;

class AFNFJOBKDJO : public ::JHPEPDKHCJP
{
public:
	::Cinemachine::CinemachineComposer* AJFNFOKOGLI; // 0x10
	::Cinemachine::CinemachineVirtualCamera* EHMDBGDPHPI; // 0x18
	::System::Action* EGBBBMAIKNP; // 0x20
	::MoleMole::Config::ConfigCameraComposer* JCGJPHEKADC; // 0x28
	::IJGMIKPLNPL* LNEOIBCOAMO; // 0x30
	::MoleMole::Cameras::CameraDataAccessor* JDEIDICJNOK; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFNFJOBKDJO__CTOR_OFFSET))(this);
	}

	::System::Void OnInitialized(::Foundation::AggregateObject_1<::CNGOPCAEJMN>* JPMDNBICBON)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AggregateObject_1<::CNGOPCAEJMN>*))((::PBYTE)hIl2Cpp + AFNFJOBKDJO_ONINITIALIZED_OFFSET))(this, JPMDNBICBON);
	}

	::System::Void OKLLFEIJKHN(::LONKKOMHFMD* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::LONKKOMHFMD*))((::PBYTE)hIl2Cpp + AFNFJOBKDJO_OKLLFEIJKHN_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Void EDEFLFIKNFK(::HCIANHKCFIL* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::HCIANHKCFIL*))((::PBYTE)hIl2Cpp + AFNFJOBKDJO_EDEFLFIKNFK_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Void BJJFIODFCHM(::KBEJDIFPLDP* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::KBEJDIFPLDP*))((::PBYTE)hIl2Cpp + AFNFJOBKDJO_BJJFIODFCHM_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Void FNNECGKFALM(::KBEJDIFPLDP* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::KBEJDIFPLDP*))((::PBYTE)hIl2Cpp + AFNFJOBKDJO_FNNECGKFALM_OFFSET))(this, MIALFKCCCPI);
	}

	::Cinemachine::CinemachineVirtualCamera* BEJMBJCNEHI()
	{
		return ((::Cinemachine::CinemachineVirtualCamera*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFNFJOBKDJO_BEJMBJCNEHI_OFFSET))(this);
	}

	::System::Void LBCDGHMEJMM(::Foundation::AggregateObject_1<::CNGOPCAEJMN>* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AggregateObject_1<::CNGOPCAEJMN>*))((::PBYTE)hIl2Cpp + AFNFJOBKDJO_LBCDGHMEJMM_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFNFJOBKDJO_NPOLNFDBOOD_OFFSET))(this);
	}

	::Cinemachine::CinemachineComposer* BGOODFHPHHN()
	{
		return ((::Cinemachine::CinemachineComposer*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFNFJOBKDJO_BGOODFHPHHN_OFFSET))(this);
	}

	::System::Void NIGDIMFIAEJ(::HCIANHKCFIL* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::HCIANHKCFIL*))((::PBYTE)hIl2Cpp + AFNFJOBKDJO_NIGDIMFIAEJ_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void NEJABFNFKIN(::LONKKOMHFMD* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::LONKKOMHFMD*))((::PBYTE)hIl2Cpp + AFNFJOBKDJO_NEJABFNFKIN_OFFSET))(this, MIALFKCCCPI);
	}
};
