#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BFHNHJLHPDB;
class EGFKFNHAHKL;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BFHNHJLHPDB_KCKGAEJMMGI_CFMFPIFBJDM_OFFSET UNITYSDK_OFFSET(0xFF6D900)
#define BFHNHJLHPDB_KCKGAEJMMGI__CTOR_OFFSET UNITYSDK_OFFSET(0xFF6D8F0)

inline static constexpr unsigned int BFHNHJLHPDB_KCKGAEJMMGI_TypeDefinitionIndex = 45393;

class BFHNHJLHPDB_KCKGAEJMMGI : public ::System::Object
{
public:
	::BFHNHJLHPDB* KLHPEBKNIFB; // 0x10
	::System::Action* DLMJCFBENGB; // 0x18
	::System::Action* IFKOKLCPMNF; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::EGFKFNHAHKL*>* NOBFHFIMKPH; // 0x28
	::System::Action* EDNJGMKPFHG; // 0x30
	::System::Int32 NLGLKFCLBGE; // 0x38
	::System::Boolean HGBOMLCCBEE; // 0x3C
	::System::Byte _padding0[0x3];
	::System::Int32 BMJNLAMDHPN; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFHNHJLHPDB_KCKGAEJMMGI__CTOR_OFFSET))(this);
	}

	::System::Void CFMFPIFBJDM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFHNHJLHPDB_KCKGAEJMMGI_CFMFPIFBJDM_OFFSET))(this);
	}
};
