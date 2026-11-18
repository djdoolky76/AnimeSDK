#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CNGOPCAEJMN.h"
#include "unitysdk/Foundation/Unreal/FTransform.h"
#include "unitysdk/IACDPHEDMFD.h"
#include "unitysdk/JHPEPDKHCJP.h"
#include "unitysdk/OHNGKGHBKAF.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class HCIANHKCFIL;
class KBEJDIFPLDP;
class LONKKOMHFMD;
class NNEBEOAFJLE;
namespace Foundation { template <typename T> class AggregateObject_1; }
namespace System { class Action; }

#define BHANHLPBBAE_BJJFIODFCHM_OFFSET UNITYSDK_OFFSET(0x128A8660)
#define BHANHLPBBAE_CEGMNHJCECC_OFFSET UNITYSDK_OFFSET(0x128A8A20)
#define BHANHLPBBAE_COBPIICGJJA_OFFSET UNITYSDK_OFFSET(0x128A8700)
#define BHANHLPBBAE_EDEFLFIKNFK_OFFSET UNITYSDK_OFFSET(0x128A7AD0)
#define BHANHLPBBAE_FNNECGKFALM_OFFSET UNITYSDK_OFFSET(0x128A8720)
#define BHANHLPBBAE_LBCDGHMEJMM_OFFSET UNITYSDK_OFFSET(0x128A8990)
#define BHANHLPBBAE_LPAGONBLDHD_OFFSET UNITYSDK_OFFSET(0x128A86E0)
#define BHANHLPBBAE_NEJABFNFKIN_OFFSET UNITYSDK_OFFSET(0x128A8D80)
#define BHANHLPBBAE_NIGDIMFIAEJ_OFFSET UNITYSDK_OFFSET(0x128A8E10)
#define BHANHLPBBAE_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x128A87B0)
#define BHANHLPBBAE_OKLLFEIJKHN_OFFSET UNITYSDK_OFFSET(0x128A8610)
#define BHANHLPBBAE_ONINITIALIZED_OFFSET UNITYSDK_OFFSET(0x128A76A0)
#define BHANHLPBBAE__CTOR_OFFSET UNITYSDK_OFFSET(0x128A8710)

inline static constexpr unsigned int BHANHLPBBAE_TypeDefinitionIndex = 60390;

class BHANHLPBBAE : public ::JHPEPDKHCJP
{
public:
	::NNEBEOAFJLE* NGGFFANKIKE; // 0x10
	::OHNGKGHBKAF ACDOKEGBJAO; // 0x18
	::IACDPHEDMFD HBPAINCDEIH; // 0x28
	::System::Action* EGBBBMAIKNP; // 0x88
	::UnityEngine::Vector3 AMBIAFBCONI; // 0x90
	::Foundation::Unreal::FTransform EGENKJPKJEI; // 0x9C
	::UnityEngine::Quaternion NGNHGMFLGGB; // 0xBC
	::System::Boolean BHKJIPFKBEB; // 0xCC
	::System::Byte _padding0[0x3];
	::UnityEngine::Vector3 FKGDPAOIINO; // 0xD0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHANHLPBBAE__CTOR_OFFSET))(this);
	}

	::System::Void OnInitialized(::Foundation::AggregateObject_1<::CNGOPCAEJMN>* JPMDNBICBON)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AggregateObject_1<::CNGOPCAEJMN>*))((::PBYTE)hIl2Cpp + BHANHLPBBAE_ONINITIALIZED_OFFSET))(this, JPMDNBICBON);
	}

	::System::Void EDEFLFIKNFK(::HCIANHKCFIL* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::HCIANHKCFIL*))((::PBYTE)hIl2Cpp + BHANHLPBBAE_EDEFLFIKNFK_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Void OKLLFEIJKHN(::LONKKOMHFMD* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::LONKKOMHFMD*))((::PBYTE)hIl2Cpp + BHANHLPBBAE_OKLLFEIJKHN_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Void BJJFIODFCHM(::KBEJDIFPLDP* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::KBEJDIFPLDP*))((::PBYTE)hIl2Cpp + BHANHLPBBAE_BJJFIODFCHM_OFFSET))(this, AAOCANGHBDG);
	}

	::UnityEngine::Vector3 LPAGONBLDHD()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BHANHLPBBAE_LPAGONBLDHD_OFFSET))(this);
	}

	::UnityEngine::Quaternion COBPIICGJJA()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + BHANHLPBBAE_COBPIICGJJA_OFFSET))(this);
	}

	::System::Void FNNECGKFALM(::KBEJDIFPLDP* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::KBEJDIFPLDP*))((::PBYTE)hIl2Cpp + BHANHLPBBAE_FNNECGKFALM_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHANHLPBBAE_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::Void LBCDGHMEJMM(::Foundation::AggregateObject_1<::CNGOPCAEJMN>* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AggregateObject_1<::CNGOPCAEJMN>*))((::PBYTE)hIl2Cpp + BHANHLPBBAE_LBCDGHMEJMM_OFFSET))(this, MIALFKCCCPI);
	}

	::Foundation::Unreal::FTransform CEGMNHJCECC()
	{
		return ((::Foundation::Unreal::FTransform(*)(::PVOID))((::PBYTE)hIl2Cpp + BHANHLPBBAE_CEGMNHJCECC_OFFSET))(this);
	}

	::System::Void NEJABFNFKIN(::LONKKOMHFMD* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::LONKKOMHFMD*))((::PBYTE)hIl2Cpp + BHANHLPBBAE_NEJABFNFKIN_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void NIGDIMFIAEJ(::HCIANHKCFIL* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::HCIANHKCFIL*))((::PBYTE)hIl2Cpp + BHANHLPBBAE_NIGDIMFIAEJ_OFFSET))(this, MIALFKCCCPI);
	}
};
