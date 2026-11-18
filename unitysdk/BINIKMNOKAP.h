#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CNGOPCAEJMN.h"
#include "unitysdk/IACDPHEDMFD.h"
#include "unitysdk/JHPEPDKHCJP.h"
#include "unitysdk/OHNGKGHBKAF.h"
#include "unitysdk/UnityEngine/Vector3.h"

class HCIANHKCFIL;
class KBEJDIFPLDP;
class LONKKOMHFMD;
class NNEBEOAFJLE;
namespace Foundation { template <typename T> class AggregateObject_1; }
namespace System { class Action; }

#define BINIKMNOKAP_BJJFIODFCHM_OFFSET UNITYSDK_OFFSET(0xF79C840)
#define BINIKMNOKAP_CEGMNHJCECC_OFFSET UNITYSDK_OFFSET(0xF79CA80)
#define BINIKMNOKAP_CGGIHNGAIIC_OFFSET UNITYSDK_OFFSET(0xF79BE10)
#define BINIKMNOKAP_EDEFLFIKNFK_OFFSET UNITYSDK_OFFSET(0xF79C260)
#define BINIKMNOKAP_FNNECGKFALM_OFFSET UNITYSDK_OFFSET(0xF79C960)
#define BINIKMNOKAP_LBCDGHMEJMM_OFFSET UNITYSDK_OFFSET(0xF79CC90)
#define BINIKMNOKAP_NEJABFNFKIN_OFFSET UNITYSDK_OFFSET(0xF79C9F0)
#define BINIKMNOKAP_NIGDIMFIAEJ_OFFSET UNITYSDK_OFFSET(0xF79CD20)
#define BINIKMNOKAP_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0xF79CB40)
#define BINIKMNOKAP_OKLLFEIJKHN_OFFSET UNITYSDK_OFFSET(0xF79C7F0)
#define BINIKMNOKAP_ONINITIALIZED_OFFSET UNITYSDK_OFFSET(0xF79BE30)
#define BINIKMNOKAP__CTOR_OFFSET UNITYSDK_OFFSET(0xF79C950)

inline static constexpr unsigned int BINIKMNOKAP_TypeDefinitionIndex = 84355;

class BINIKMNOKAP : public ::JHPEPDKHCJP
{
public:
	::NNEBEOAFJLE* NGGFFANKIKE; // 0x10
	::IACDPHEDMFD HBPAINCDEIH; // 0x18
	::OHNGKGHBKAF ACDOKEGBJAO; // 0x78
	::System::Action* EGBBBMAIKNP; // 0x88
	::UnityEngine::Vector3 EGENKJPKJEI; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BINIKMNOKAP__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector3 CGGIHNGAIIC()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BINIKMNOKAP_CGGIHNGAIIC_OFFSET))(this);
	}

	::System::Void OnInitialized(::Foundation::AggregateObject_1<::CNGOPCAEJMN>* JPMDNBICBON)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AggregateObject_1<::CNGOPCAEJMN>*))((::PBYTE)hIl2Cpp + BINIKMNOKAP_ONINITIALIZED_OFFSET))(this, JPMDNBICBON);
	}

	::System::Void EDEFLFIKNFK(::HCIANHKCFIL* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::HCIANHKCFIL*))((::PBYTE)hIl2Cpp + BINIKMNOKAP_EDEFLFIKNFK_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Void OKLLFEIJKHN(::LONKKOMHFMD* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::LONKKOMHFMD*))((::PBYTE)hIl2Cpp + BINIKMNOKAP_OKLLFEIJKHN_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Void BJJFIODFCHM(::KBEJDIFPLDP* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::KBEJDIFPLDP*))((::PBYTE)hIl2Cpp + BINIKMNOKAP_BJJFIODFCHM_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Void FNNECGKFALM(::KBEJDIFPLDP* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::KBEJDIFPLDP*))((::PBYTE)hIl2Cpp + BINIKMNOKAP_FNNECGKFALM_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void NEJABFNFKIN(::LONKKOMHFMD* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::LONKKOMHFMD*))((::PBYTE)hIl2Cpp + BINIKMNOKAP_NEJABFNFKIN_OFFSET))(this, MIALFKCCCPI);
	}

	::UnityEngine::Vector3 CEGMNHJCECC()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BINIKMNOKAP_CEGMNHJCECC_OFFSET))(this);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BINIKMNOKAP_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::Void LBCDGHMEJMM(::Foundation::AggregateObject_1<::CNGOPCAEJMN>* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AggregateObject_1<::CNGOPCAEJMN>*))((::PBYTE)hIl2Cpp + BINIKMNOKAP_LBCDGHMEJMM_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void NIGDIMFIAEJ(::HCIANHKCFIL* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::HCIANHKCFIL*))((::PBYTE)hIl2Cpp + BINIKMNOKAP_NIGDIMFIAEJ_OFFSET))(this, MIALFKCCCPI);
	}
};
