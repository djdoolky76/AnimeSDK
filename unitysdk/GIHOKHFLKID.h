#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CNGOPCAEJMN.h"
#include "unitysdk/JHPEPDKHCJP.h"

class FHEAOOPKGCD;
class HCIANHKCFIL;
class IJGMIKPLNPL;
class JBNBCPJDGNE;
class KBEJDIFPLDP;
class LONKKOMHFMD;
class NNEBEOAFJLE;
namespace Foundation { template <typename T> class AggregateObject_1; }
namespace MoleMole::Cameras { class CameraDataAccessor; }
namespace MoleMole::Cameras { class VCamerasLayoutCalculator; }

#define GIHOKHFLKID_BJJFIODFCHM_OFFSET UNITYSDK_OFFSET(0x11DB1480)
#define GIHOKHFLKID_EDEFLFIKNFK_OFFSET UNITYSDK_OFFSET(0x11DB0E00)
#define GIHOKHFLKID_FNNECGKFALM_OFFSET UNITYSDK_OFFSET(0x11DB15C0)
#define GIHOKHFLKID_IIBFCLKCFGB_OFFSET UNITYSDK_OFFSET(0x11DB1770)
#define GIHOKHFLKID_LBCDGHMEJMM_OFFSET UNITYSDK_OFFSET(0x11DB16E0)
#define GIHOKHFLKID_NEJABFNFKIN_OFFSET UNITYSDK_OFFSET(0x11DB1840)
#define GIHOKHFLKID_NIGDIMFIAEJ_OFFSET UNITYSDK_OFFSET(0x11DB1650)
#define GIHOKHFLKID_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x11DB1570)
#define GIHOKHFLKID_OKLLFEIJKHN_OFFSET UNITYSDK_OFFSET(0x11DB14D0)
#define GIHOKHFLKID_ONINITIALIZED_OFFSET UNITYSDK_OFFSET(0x11DB0170)
#define GIHOKHFLKID_PENDMLPCMKB_OFFSET UNITYSDK_OFFSET(0x11DB1780)
#define GIHOKHFLKID__CTOR_OFFSET UNITYSDK_OFFSET(0x11DB1560)

inline static constexpr unsigned int GIHOKHFLKID_TypeDefinitionIndex = 42039;

class GIHOKHFLKID : public ::JHPEPDKHCJP
{
public:
	::NNEBEOAFJLE* NGGFFANKIKE; // 0x10
	::FHEAOOPKGCD* CFABLNKFAHJ; // 0x18
	::MoleMole::Cameras::VCamerasLayoutCalculator* IHGANPNLDFK; // 0x20
	::IJGMIKPLNPL* LNEOIBCOAMO; // 0x28
	::JBNBCPJDGNE* PNBAFHNNCFJ; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIHOKHFLKID__CTOR_OFFSET))(this);
	}

	::System::Void OnInitialized(::Foundation::AggregateObject_1<::CNGOPCAEJMN>* JPMDNBICBON)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AggregateObject_1<::CNGOPCAEJMN>*))((::PBYTE)hIl2Cpp + GIHOKHFLKID_ONINITIALIZED_OFFSET))(this, JPMDNBICBON);
	}

	::System::Void EDEFLFIKNFK(::HCIANHKCFIL* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::HCIANHKCFIL*))((::PBYTE)hIl2Cpp + GIHOKHFLKID_EDEFLFIKNFK_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Void BJJFIODFCHM(::KBEJDIFPLDP* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::KBEJDIFPLDP*))((::PBYTE)hIl2Cpp + GIHOKHFLKID_BJJFIODFCHM_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Void OKLLFEIJKHN(::LONKKOMHFMD* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::LONKKOMHFMD*))((::PBYTE)hIl2Cpp + GIHOKHFLKID_OKLLFEIJKHN_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIHOKHFLKID_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::Void FNNECGKFALM(::KBEJDIFPLDP* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::KBEJDIFPLDP*))((::PBYTE)hIl2Cpp + GIHOKHFLKID_FNNECGKFALM_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void NIGDIMFIAEJ(::HCIANHKCFIL* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::HCIANHKCFIL*))((::PBYTE)hIl2Cpp + GIHOKHFLKID_NIGDIMFIAEJ_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void LBCDGHMEJMM(::Foundation::AggregateObject_1<::CNGOPCAEJMN>* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AggregateObject_1<::CNGOPCAEJMN>*))((::PBYTE)hIl2Cpp + GIHOKHFLKID_LBCDGHMEJMM_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void IIBFCLKCFGB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIHOKHFLKID_IIBFCLKCFGB_OFFSET))(this);
	}

	static ::MoleMole::Cameras::CameraDataAccessor* PENDMLPCMKB()
	{
		return ((::MoleMole::Cameras::CameraDataAccessor*(*)())((::PBYTE)hIl2Cpp + GIHOKHFLKID_PENDMLPCMKB_OFFSET))();
	}

	::System::Void NEJABFNFKIN(::LONKKOMHFMD* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::LONKKOMHFMD*))((::PBYTE)hIl2Cpp + GIHOKHFLKID_NEJABFNFKIN_OFFSET))(this, MIALFKCCCPI);
	}
};
