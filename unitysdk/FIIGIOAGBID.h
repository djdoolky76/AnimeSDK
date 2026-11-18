#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CNGOPCAEJMN.h"
#include "unitysdk/JHPEPDKHCJP.h"
#include "unitysdk/JIILKHLOHBL.h"

class HCIANHKCFIL;
class LONKKOMHFMD;
namespace Foundation { template <typename T> class AggregateObject_1; }
namespace Nap::NapECS { class EcsWorld; }

#define FIIGIOAGBID_EDEFLFIKNFK_OFFSET UNITYSDK_OFFSET(0xBB47960)
#define FIIGIOAGBID_LBCDGHMEJMM_OFFSET UNITYSDK_OFFSET(0xBB47C20)
#define FIIGIOAGBID_NEJABFNFKIN_OFFSET UNITYSDK_OFFSET(0xBB47D40)
#define FIIGIOAGBID_NIGDIMFIAEJ_OFFSET UNITYSDK_OFFSET(0xBB47CB0)
#define FIIGIOAGBID_OKLLFEIJKHN_OFFSET UNITYSDK_OFFSET(0xBB47A20)
#define FIIGIOAGBID_ONINITIALIZED_OFFSET UNITYSDK_OFFSET(0xBB47910)
#define FIIGIOAGBID__CTOR_OFFSET UNITYSDK_OFFSET(0xBB47C10)

inline static constexpr unsigned int FIIGIOAGBID_TypeDefinitionIndex = 50786;

class FIIGIOAGBID : public ::JHPEPDKHCJP
{
public:
	::JIILKHLOHBL PMKINFHDLFD; // 0x10
	::Nap::NapECS::EcsWorld* NAEFJGAOJCB; // 0x18
	::System::Boolean ALMIPEFAPPC; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIIGIOAGBID__CTOR_OFFSET))(this);
	}

	::System::Void OnInitialized(::Foundation::AggregateObject_1<::CNGOPCAEJMN>* JPMDNBICBON)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AggregateObject_1<::CNGOPCAEJMN>*))((::PBYTE)hIl2Cpp + FIIGIOAGBID_ONINITIALIZED_OFFSET))(this, JPMDNBICBON);
	}

	::System::Void EDEFLFIKNFK(::HCIANHKCFIL* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::HCIANHKCFIL*))((::PBYTE)hIl2Cpp + FIIGIOAGBID_EDEFLFIKNFK_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Void OKLLFEIJKHN(::LONKKOMHFMD* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::LONKKOMHFMD*))((::PBYTE)hIl2Cpp + FIIGIOAGBID_OKLLFEIJKHN_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Void LBCDGHMEJMM(::Foundation::AggregateObject_1<::CNGOPCAEJMN>* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AggregateObject_1<::CNGOPCAEJMN>*))((::PBYTE)hIl2Cpp + FIIGIOAGBID_LBCDGHMEJMM_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void NIGDIMFIAEJ(::HCIANHKCFIL* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::HCIANHKCFIL*))((::PBYTE)hIl2Cpp + FIIGIOAGBID_NIGDIMFIAEJ_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void NEJABFNFKIN(::LONKKOMHFMD* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::LONKKOMHFMD*))((::PBYTE)hIl2Cpp + FIIGIOAGBID_NEJABFNFKIN_OFFSET))(this, MIALFKCCCPI);
	}
};
