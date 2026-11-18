#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HMCBEAJMEFF.h"
#include "unitysdk/ProtoScript/HollowEntityType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/IKFPLFGLFHF_LOKCIAEOBOL.h"

class AHLMMFMPHEO;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EKJLAMFLGGJ_FLHNGDLANDC_OFFSET UNITYSDK_OFFSET(0x1426CE80)
#define EKJLAMFLGGJ_JLIMOLHLFAK_OFFSET UNITYSDK_OFFSET(0x1426CDA0)
#define EKJLAMFLGGJ_KAAEKAOEDDO_OFFSET UNITYSDK_OFFSET(0x1426CB80)
#define EKJLAMFLGGJ_OHMIAFGJELP_OFFSET UNITYSDK_OFFSET(0x1426CF70)
#define EKJLAMFLGGJ_PKOGNPKCHHE_OFFSET UNITYSDK_OFFSET(0x1426CBD0)
#define EKJLAMFLGGJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1426CEE0)

inline static constexpr unsigned int EKJLAMFLGGJ_TypeDefinitionIndex = 46253;

class EKJLAMFLGGJ : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::ProtoScript::HollowEntityType>* OLCKBLIFGNF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKJLAMFLGGJ__CTOR_OFFSET))(this);
	}

	::HMCBEAJMEFF KAAEKAOEDDO()
	{
		return ((::HMCBEAJMEFF(*)(::PVOID))((::PBYTE)hIl2Cpp + EKJLAMFLGGJ_KAAEKAOEDDO_OFFSET))(this);
	}

	::System::Void PKOGNPKCHHE(::IKFPLFGLFHF_LOKCIAEOBOL& HGDMBHDKFPK)
	{
		return ((::System::Void(*)(::PVOID, ::IKFPLFGLFHF_LOKCIAEOBOL&))((::PBYTE)hIl2Cpp + EKJLAMFLGGJ_PKOGNPKCHHE_OFFSET))(this, HGDMBHDKFPK);
	}

	::System::Void JLIMOLHLFAK(::AHLMMFMPHEO* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::AHLMMFMPHEO*))((::PBYTE)hIl2Cpp + EKJLAMFLGGJ_JLIMOLHLFAK_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void FLHNGDLANDC(::System::UInt32 KJDNDFCONCN)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EKJLAMFLGGJ_FLHNGDLANDC_OFFSET))(this, KJDNDFCONCN);
	}

	::System::Boolean OHMIAFGJELP(::System::UInt32 ACHBBPJIBIE, ::ProtoScript::HollowEntityType& OBNIAHNMHPF)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::ProtoScript::HollowEntityType&))((::PBYTE)hIl2Cpp + EKJLAMFLGGJ_OHMIAFGJELP_OFFSET))(this, ACHBBPJIBIE, OBNIAHNMHPF);
	}
};
