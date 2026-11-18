#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CNGOPCAEJMN.h"
#include "unitysdk/JHPEPDKHCJP.h"

class AFNFJOBKDJO;
class CFBOAGFHJOC;
class HCIANHKCFIL;
class KBEJDIFPLDP;
class LONKKOMHFMD;
class NNEBEOAFJLE;
namespace Foundation { template <typename T> class AggregateObject_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

#define HDGJGJICDOG_BKJPMPBEHDO_OFFSET UNITYSDK_OFFSET(0x13D87890)
#define HDGJGJICDOG_EDEFLFIKNFK_OFFSET UNITYSDK_OFFSET(0x13D87420)
#define HDGJGJICDOG_LBCDGHMEJMM_OFFSET UNITYSDK_OFFSET(0x13D87800)
#define HDGJGJICDOG_NEJABFNFKIN_OFFSET UNITYSDK_OFFSET(0x13D87770)
#define HDGJGJICDOG_NIGDIMFIAEJ_OFFSET UNITYSDK_OFFSET(0x13D87920)
#define HDGJGJICDOG_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x13D879B0)
#define HDGJGJICDOG_OKLLFEIJKHN_OFFSET UNITYSDK_OFFSET(0x13D87310)
#define HDGJGJICDOG_ONINITIALIZED_OFFSET UNITYSDK_OFFSET(0x13D86A60)
#define HDGJGJICDOG_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x13D87560)
#define HDGJGJICDOG__CTOR_OFFSET UNITYSDK_OFFSET(0x13D87760)

inline static constexpr unsigned int HDGJGJICDOG_TypeDefinitionIndex = 70514;

class HDGJGJICDOG : public ::JHPEPDKHCJP
{
public:
	::UnityEngine::Transform* EHMDBGDPHPI; // 0x10
	::AFNFJOBKDJO* HDIJCDNJANM; // 0x18
	::CFBOAGFHJOC* JDLDFLICPEE; // 0x20
	::UnityEngine::AnimationCurve* OKPPHJAFKBA; // 0x28
	::NNEBEOAFJLE* NGGFFANKIKE; // 0x30
	::System::Boolean OEKFGMHPEPP; // 0x38
	::System::Boolean MEAFNGMCJPK; // 0x39

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDGJGJICDOG__CTOR_OFFSET))(this);
	}

	::System::Void OnInitialized(::Foundation::AggregateObject_1<::CNGOPCAEJMN>* JPMDNBICBON)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AggregateObject_1<::CNGOPCAEJMN>*))((::PBYTE)hIl2Cpp + HDGJGJICDOG_ONINITIALIZED_OFFSET))(this, JPMDNBICBON);
	}

	::System::Void OKLLFEIJKHN(::LONKKOMHFMD* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::LONKKOMHFMD*))((::PBYTE)hIl2Cpp + HDGJGJICDOG_OKLLFEIJKHN_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Void EDEFLFIKNFK(::HCIANHKCFIL* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::HCIANHKCFIL*))((::PBYTE)hIl2Cpp + HDGJGJICDOG_EDEFLFIKNFK_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Void PLPONJAKNEB(::KBEJDIFPLDP* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::KBEJDIFPLDP*))((::PBYTE)hIl2Cpp + HDGJGJICDOG_PLPONJAKNEB_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Void NEJABFNFKIN(::LONKKOMHFMD* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::LONKKOMHFMD*))((::PBYTE)hIl2Cpp + HDGJGJICDOG_NEJABFNFKIN_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void LBCDGHMEJMM(::Foundation::AggregateObject_1<::CNGOPCAEJMN>* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AggregateObject_1<::CNGOPCAEJMN>*))((::PBYTE)hIl2Cpp + HDGJGJICDOG_LBCDGHMEJMM_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void BKJPMPBEHDO(::KBEJDIFPLDP* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::KBEJDIFPLDP*))((::PBYTE)hIl2Cpp + HDGJGJICDOG_BKJPMPBEHDO_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void NIGDIMFIAEJ(::HCIANHKCFIL* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::HCIANHKCFIL*))((::PBYTE)hIl2Cpp + HDGJGJICDOG_NIGDIMFIAEJ_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDGJGJICDOG_NPOLNFDBOOD_OFFSET))(this);
	}
};
