#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CNGOPCAEJMN.h"
#include "unitysdk/IACDPHEDMFD.h"
#include "unitysdk/JHPEPDKHCJP.h"
#include "unitysdk/UnityEngine/Vector3.h"

class HCIANHKCFIL;
class KBEJDIFPLDP;
class LONKKOMHFMD;
class NNEBEOAFJLE;
namespace Foundation { template <typename T> class AggregateObject_1; }
namespace MoleMole::Cameras { class CameraDataAccessor; }
namespace System { class Action; }

#define GFDMHCPBCJM_BJJFIODFCHM_OFFSET UNITYSDK_OFFSET(0xBB8AC90)
#define GFDMHCPBCJM_CEGMNHJCECC_OFFSET UNITYSDK_OFFSET(0xBB8B1D0)
#define GFDMHCPBCJM_CGGIHNGAIIC_OFFSET UNITYSDK_OFFSET(0xBB8A190)
#define GFDMHCPBCJM_EDEFLFIKNFK_OFFSET UNITYSDK_OFFSET(0xBB8A5E0)
#define GFDMHCPBCJM_FNNECGKFALM_OFFSET UNITYSDK_OFFSET(0xBB8AFF0)
#define GFDMHCPBCJM_LBCDGHMEJMM_OFFSET UNITYSDK_OFFSET(0xBB8AE60)
#define GFDMHCPBCJM_NEJABFNFKIN_OFFSET UNITYSDK_OFFSET(0xBB8B340)
#define GFDMHCPBCJM_NIGDIMFIAEJ_OFFSET UNITYSDK_OFFSET(0xBB8B140)
#define GFDMHCPBCJM_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0xBB8AEF0)
#define GFDMHCPBCJM_OKLLFEIJKHN_OFFSET UNITYSDK_OFFSET(0xBB8AB50)
#define GFDMHCPBCJM_ONINITIALIZED_OFFSET UNITYSDK_OFFSET(0xBB8A1B0)
#define GFDMHCPBCJM_PENDMLPCMKB_OFFSET UNITYSDK_OFFSET(0xBB8B080)
#define GFDMHCPBCJM__CTOR_OFFSET UNITYSDK_OFFSET(0xBB8AE50)

inline static constexpr unsigned int GFDMHCPBCJM_TypeDefinitionIndex = 75142;

class GFDMHCPBCJM : public ::JHPEPDKHCJP
{
public:
	::NNEBEOAFJLE* NGGFFANKIKE; // 0x10
	::IACDPHEDMFD HBPAINCDEIH; // 0x18
	::System::Action* EGBBBMAIKNP; // 0x78
	::UnityEngine::Vector3 EGENKJPKJEI; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFDMHCPBCJM__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector3 CGGIHNGAIIC()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + GFDMHCPBCJM_CGGIHNGAIIC_OFFSET))(this);
	}

	::System::Void OnInitialized(::Foundation::AggregateObject_1<::CNGOPCAEJMN>* JPMDNBICBON)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AggregateObject_1<::CNGOPCAEJMN>*))((::PBYTE)hIl2Cpp + GFDMHCPBCJM_ONINITIALIZED_OFFSET))(this, JPMDNBICBON);
	}

	::System::Void EDEFLFIKNFK(::HCIANHKCFIL* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::HCIANHKCFIL*))((::PBYTE)hIl2Cpp + GFDMHCPBCJM_EDEFLFIKNFK_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Void OKLLFEIJKHN(::LONKKOMHFMD* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::LONKKOMHFMD*))((::PBYTE)hIl2Cpp + GFDMHCPBCJM_OKLLFEIJKHN_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Void BJJFIODFCHM(::KBEJDIFPLDP* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::KBEJDIFPLDP*))((::PBYTE)hIl2Cpp + GFDMHCPBCJM_BJJFIODFCHM_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Void LBCDGHMEJMM(::Foundation::AggregateObject_1<::CNGOPCAEJMN>* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AggregateObject_1<::CNGOPCAEJMN>*))((::PBYTE)hIl2Cpp + GFDMHCPBCJM_LBCDGHMEJMM_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFDMHCPBCJM_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::Void FNNECGKFALM(::KBEJDIFPLDP* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::KBEJDIFPLDP*))((::PBYTE)hIl2Cpp + GFDMHCPBCJM_FNNECGKFALM_OFFSET))(this, MIALFKCCCPI);
	}

	static ::MoleMole::Cameras::CameraDataAccessor* PENDMLPCMKB()
	{
		return ((::MoleMole::Cameras::CameraDataAccessor*(*)())((::PBYTE)hIl2Cpp + GFDMHCPBCJM_PENDMLPCMKB_OFFSET))();
	}

	::System::Void NIGDIMFIAEJ(::HCIANHKCFIL* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::HCIANHKCFIL*))((::PBYTE)hIl2Cpp + GFDMHCPBCJM_NIGDIMFIAEJ_OFFSET))(this, MIALFKCCCPI);
	}

	::UnityEngine::Vector3 CEGMNHJCECC()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + GFDMHCPBCJM_CEGMNHJCECC_OFFSET))(this);
	}

	::System::Void NEJABFNFKIN(::LONKKOMHFMD* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::LONKKOMHFMD*))((::PBYTE)hIl2Cpp + GFDMHCPBCJM_NEJABFNFKIN_OFFSET))(this, MIALFKCCCPI);
	}
};
