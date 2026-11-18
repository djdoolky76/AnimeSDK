#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MonoUITableScrollV2;
class PEOKKIIGIBN;
namespace System { class String; }
namespace System::Collections { class IEnumerable; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define PEOKKIIGIBN_BJEKFOBJGDO_BAKBBGDOIAD_OFFSET UNITYSDK_OFFSET(0x1949BA80)
#define PEOKKIIGIBN_BJEKFOBJGDO_BOIOBOACAME_OFFSET UNITYSDK_OFFSET(0x1949AFF0)
#define PEOKKIIGIBN_BJEKFOBJGDO_DECNGMNNIPK_OFFSET UNITYSDK_OFFSET(0x1949B0D0)
#define PEOKKIIGIBN_BJEKFOBJGDO_EFMCEPCBHPN_OFFSET UNITYSDK_OFFSET(0x1949B3C0)
#define PEOKKIIGIBN_BJEKFOBJGDO_FNMONEGOBHD_OFFSET UNITYSDK_OFFSET(0x1949B650)
#define PEOKKIIGIBN_BJEKFOBJGDO_HGMCGMDMANJ_OFFSET UNITYSDK_OFFSET(0x1949A920)
#define PEOKKIIGIBN_BJEKFOBJGDO_MJHMHMABFCG_OFFSET UNITYSDK_OFFSET(0x1949B360)
#define PEOKKIIGIBN_BJEKFOBJGDO_MNLHLLEHBPF_OFFSET UNITYSDK_OFFSET(0x1949A4A0)
#define PEOKKIIGIBN_BJEKFOBJGDO_NIBGOKFGNAH_OFFSET UNITYSDK_OFFSET(0x1949A420)
#define PEOKKIIGIBN_BJEKFOBJGDO__CTOR_OFFSET UNITYSDK_OFFSET(0x1949A410)

inline static constexpr unsigned int PEOKKIIGIBN_BJEKFOBJGDO_TypeDefinitionIndex = 74608;

class PEOKKIIGIBN_BJEKFOBJGDO : public ::System::Object
{
public:
	::MonoUITableScrollV2* LAOANOKHCAH; // 0x10
	::PEOKKIIGIBN* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEOKKIIGIBN_BJEKFOBJGDO__CTOR_OFFSET))(this);
	}

	::System::Void NIBGOKFGNAH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEOKKIIGIBN_BJEKFOBJGDO_NIBGOKFGNAH_OFFSET))(this);
	}

	::System::Void MNLHLLEHBPF(::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PEOKKIIGIBN_BJEKFOBJGDO_MNLHLLEHBPF_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Collections::Generic::IEnumerable_1<::System::Object*>* HGMCGMDMANJ()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEOKKIIGIBN_BJEKFOBJGDO_HGMCGMDMANJ_OFFSET))(this);
	}

	::System::Int32 BOIOBOACAME()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PEOKKIIGIBN_BJEKFOBJGDO_BOIOBOACAME_OFFSET))(this);
	}

	::System::String* DECNGMNNIPK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEOKKIIGIBN_BJEKFOBJGDO_DECNGMNNIPK_OFFSET))(this);
	}

	::System::Collections::IEnumerable* MJHMHMABFCG()
	{
		return ((::System::Collections::IEnumerable*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEOKKIIGIBN_BJEKFOBJGDO_MJHMHMABFCG_OFFSET))(this);
	}

	::System::String* EFMCEPCBHPN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEOKKIIGIBN_BJEKFOBJGDO_EFMCEPCBHPN_OFFSET))(this);
	}

	::System::String* FNMONEGOBHD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEOKKIIGIBN_BJEKFOBJGDO_FNMONEGOBHD_OFFSET))(this);
	}

	::System::String* BAKBBGDOIAD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEOKKIIGIBN_BJEKFOBJGDO_BAKBBGDOIAD_OFFSET))(this);
	}
};
