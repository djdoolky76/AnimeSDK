#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CNGOPCAEJMN.h"
#include "unitysdk/System/Object.h"

class EMMBKBFICND;
class HCIANHKCFIL;
class KBEJDIFPLDP;
class LONKKOMHFMD;
namespace Foundation { template <typename T> class AggregateObject_1; }
namespace Foundation { template <typename T> class IAggregateObjectEventContext_1; }

#define JHPEPDKHCJP_BJJFIODFCHM_OFFSET UNITYSDK_OFFSET(0x198C9D40)
#define JHPEPDKHCJP_EDEFLFIKNFK_OFFSET UNITYSDK_OFFSET(0x198C9CF0)
#define JHPEPDKHCJP_HANDLEEVENT_OFFSET UNITYSDK_OFFSET(0x198C9AC0)
#define JHPEPDKHCJP_HGJAICMNEEG_OFFSET UNITYSDK_OFFSET(0x198C9DE0)
#define JHPEPDKHCJP_LJMIPGJJELP_OFFSET UNITYSDK_OFFSET(0x198C9E80)
#define JHPEPDKHCJP_OKLLFEIJKHN_OFFSET UNITYSDK_OFFSET(0x198C9E30)
#define JHPEPDKHCJP_ONINITIALIZED_OFFSET UNITYSDK_OFFSET(0x198C9CA0)
#define JHPEPDKHCJP_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x198C9D90)
#define JHPEPDKHCJP__CTOR_OFFSET UNITYSDK_OFFSET(0x198C9ED0)

inline static constexpr unsigned int JHPEPDKHCJP_TypeDefinitionIndex = 90709;

class JHPEPDKHCJP : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHPEPDKHCJP__CTOR_OFFSET))(this);
	}

	::System::Void HandleEvent(::CNGOPCAEJMN OFCNFADIBGJ, ::Foundation::IAggregateObjectEventContext_1<::CNGOPCAEJMN>* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::CNGOPCAEJMN, ::Foundation::IAggregateObjectEventContext_1<::CNGOPCAEJMN>*))((::PBYTE)hIl2Cpp + JHPEPDKHCJP_HANDLEEVENT_OFFSET))(this, OFCNFADIBGJ, AAOCANGHBDG);
	}

	::System::Void OnInitialized(::Foundation::AggregateObject_1<::CNGOPCAEJMN>* JPMDNBICBON)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AggregateObject_1<::CNGOPCAEJMN>*))((::PBYTE)hIl2Cpp + JHPEPDKHCJP_ONINITIALIZED_OFFSET))(this, JPMDNBICBON);
	}

	::System::Void EDEFLFIKNFK(::HCIANHKCFIL* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::HCIANHKCFIL*))((::PBYTE)hIl2Cpp + JHPEPDKHCJP_EDEFLFIKNFK_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Void BJJFIODFCHM(::KBEJDIFPLDP* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::KBEJDIFPLDP*))((::PBYTE)hIl2Cpp + JHPEPDKHCJP_BJJFIODFCHM_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Void PLPONJAKNEB(::KBEJDIFPLDP* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::KBEJDIFPLDP*))((::PBYTE)hIl2Cpp + JHPEPDKHCJP_PLPONJAKNEB_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Void HGJAICMNEEG(::KBEJDIFPLDP* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::KBEJDIFPLDP*))((::PBYTE)hIl2Cpp + JHPEPDKHCJP_HGJAICMNEEG_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Void OKLLFEIJKHN(::LONKKOMHFMD* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::LONKKOMHFMD*))((::PBYTE)hIl2Cpp + JHPEPDKHCJP_OKLLFEIJKHN_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Void LJMIPGJJELP(::EMMBKBFICND* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::EMMBKBFICND*))((::PBYTE)hIl2Cpp + JHPEPDKHCJP_LJMIPGJJELP_OFFSET))(this, AAOCANGHBDG);
	}
};
