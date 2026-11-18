#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CNGOPCAEJMN.h"
#include "unitysdk/JHPEPDKHCJP.h"
#include "unitysdk/UnityEngine/Vector3.h"

class HCIANHKCFIL;
class KBEJDIFPLDP;
class LONKKOMHFMD;
class NNEBEOAFJLE;
namespace Foundation { template <typename T> class AggregateObject_1; }
namespace System { class Action; }

#define CPBKHFBGJFG_BKJPMPBEHDO_OFFSET UNITYSDK_OFFSET(0x123D6FD0)
#define CPBKHFBGJFG_EDEFLFIKNFK_OFFSET UNITYSDK_OFFSET(0x123D6CF0)
#define CPBKHFBGJFG_JAKEMMNKKNP_OFFSET UNITYSDK_OFFSET(0x123D6FB0)
#define CPBKHFBGJFG_LBCDGHMEJMM_OFFSET UNITYSDK_OFFSET(0x123D70F0)
#define CPBKHFBGJFG_NEJABFNFKIN_OFFSET UNITYSDK_OFFSET(0x123D7060)
#define CPBKHFBGJFG_NIGDIMFIAEJ_OFFSET UNITYSDK_OFFSET(0x123D6F20)
#define CPBKHFBGJFG_OKLLFEIJKHN_OFFSET UNITYSDK_OFFSET(0x123D6E90)
#define CPBKHFBGJFG_ONINITIALIZED_OFFSET UNITYSDK_OFFSET(0x123D6C60)
#define CPBKHFBGJFG_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x123D6DE0)
#define CPBKHFBGJFG__CTOR_OFFSET UNITYSDK_OFFSET(0x123D6F10)

inline static constexpr unsigned int CPBKHFBGJFG_TypeDefinitionIndex = 70804;

class CPBKHFBGJFG : public ::JHPEPDKHCJP
{
public:
	::System::Action* EGBBBMAIKNP; // 0x10
	::NNEBEOAFJLE* NGGFFANKIKE; // 0x18
	::UnityEngine::Vector3 KIBABCNNIEO; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPBKHFBGJFG__CTOR_OFFSET))(this);
	}

	::System::Void OnInitialized(::Foundation::AggregateObject_1<::CNGOPCAEJMN>* JPMDNBICBON)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AggregateObject_1<::CNGOPCAEJMN>*))((::PBYTE)hIl2Cpp + CPBKHFBGJFG_ONINITIALIZED_OFFSET))(this, JPMDNBICBON);
	}

	::System::Void EDEFLFIKNFK(::HCIANHKCFIL* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::HCIANHKCFIL*))((::PBYTE)hIl2Cpp + CPBKHFBGJFG_EDEFLFIKNFK_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Void PLPONJAKNEB(::KBEJDIFPLDP* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::KBEJDIFPLDP*))((::PBYTE)hIl2Cpp + CPBKHFBGJFG_PLPONJAKNEB_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Void OKLLFEIJKHN(::LONKKOMHFMD* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::LONKKOMHFMD*))((::PBYTE)hIl2Cpp + CPBKHFBGJFG_OKLLFEIJKHN_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Void NIGDIMFIAEJ(::HCIANHKCFIL* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::HCIANHKCFIL*))((::PBYTE)hIl2Cpp + CPBKHFBGJFG_NIGDIMFIAEJ_OFFSET))(this, MIALFKCCCPI);
	}

	::UnityEngine::Vector3 JAKEMMNKKNP()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CPBKHFBGJFG_JAKEMMNKKNP_OFFSET))(this);
	}

	::System::Void BKJPMPBEHDO(::KBEJDIFPLDP* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::KBEJDIFPLDP*))((::PBYTE)hIl2Cpp + CPBKHFBGJFG_BKJPMPBEHDO_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void NEJABFNFKIN(::LONKKOMHFMD* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::LONKKOMHFMD*))((::PBYTE)hIl2Cpp + CPBKHFBGJFG_NEJABFNFKIN_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void LBCDGHMEJMM(::Foundation::AggregateObject_1<::CNGOPCAEJMN>* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AggregateObject_1<::CNGOPCAEJMN>*))((::PBYTE)hIl2Cpp + CPBKHFBGJFG_LBCDGHMEJMM_OFFSET))(this, MIALFKCCCPI);
	}
};
