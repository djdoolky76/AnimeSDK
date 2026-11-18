#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DJBPFFLIECG.h"

namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T> class Action_1; }

#define OLKPFCPCBLI_BEAOPJANBDL_OFFSET UNITYSDK_OFFSET(0x14F8BD90)
#define OLKPFCPCBLI_FNACCCGEIGF_OFFSET UNITYSDK_OFFSET(0x14F8BBF0)
#define OLKPFCPCBLI_KIMJCGJHJAC_OFFSET UNITYSDK_OFFSET(0x14F8BBA0)
#define OLKPFCPCBLI_ONSTART_OFFSET UNITYSDK_OFFSET(0x14F8BB60)
#define OLKPFCPCBLI__CTOR_OFFSET UNITYSDK_OFFSET(0x14F8BBE0)

inline static constexpr unsigned int OLKPFCPCBLI_TypeDefinitionIndex = 70460;

class OLKPFCPCBLI : public ::DJBPFFLIECG
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLKPFCPCBLI__CTOR_OFFSET))(this);
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLKPFCPCBLI_ONSTART_OFFSET))(this);
	}

	::System::Void KIMJCGJHJAC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLKPFCPCBLI_KIMJCGJHJAC_OFFSET))(this);
	}

	::System::Void FNACCCGEIGF(::System::UInt32 DFJOLNGAOAJ, ::System::Action_1<::System::UInt32>* FKHOJLMBILE)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Action_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + OLKPFCPCBLI_FNACCCGEIGF_OFFSET))(this, DFJOLNGAOAJ, FKHOJLMBILE);
	}

	::System::Void BEAOPJANBDL(::System::Boolean ABCNGAEFBNL, ::System::UInt32 LEHABHCOMGH, ::System::UInt32 DFJOLNGAOAJ, ::System::Action_3<::System::Boolean, ::System::UInt32, ::System::UInt32>* FKHOJLMBILE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::UInt32, ::System::UInt32, ::System::Action_3<::System::Boolean, ::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + OLKPFCPCBLI_BEAOPJANBDL_OFFSET))(this, ABCNGAEFBNL, LEHABHCOMGH, DFJOLNGAOAJ, FKHOJLMBILE);
	}
};
