#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define OHGICJMALCK_OLAOGKFJPFC_BCJNFDKJPKC_OFFSET UNITYSDK_OFFSET(0xFB8D4D0)
#define OHGICJMALCK_OLAOGKFJPFC_IDHOMHHFPOH_OFFSET UNITYSDK_OFFSET(0xFB8D600)
#define OHGICJMALCK_OLAOGKFJPFC_MBEBKINJOCI_OFFSET UNITYSDK_OFFSET(0xFB8D650)
#define OHGICJMALCK_OLAOGKFJPFC__CTOR_OFFSET UNITYSDK_OFFSET(0xFB8D4C0)

inline static constexpr unsigned int OHGICJMALCK_OLAOGKFJPFC_TypeDefinitionIndex = 61048;

class OHGICJMALCK_OLAOGKFJPFC : public ::System::Object
{
public:
	::System::Action_1<::System::Object*>* EGHBMCOKHOH; // 0x10
	::System::Boolean IDJONIJEJOA; // 0x18
	::System::Boolean CCEGBNDFIEM; // 0x19
	::System::Boolean AOLKFIKCNOH; // 0x1A
	::System::Byte _padding0[0x1];
	::System::Int32 EKHFNGNDBNE; // 0x1C
	::System::UInt32 PLLAHMDIFJF; // 0x20
	::System::Int32 MBNJLLBDIHA; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHGICJMALCK_OLAOGKFJPFC__CTOR_OFFSET))(this);
	}

	::System::Int32 BCJNFDKJPKC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OHGICJMALCK_OLAOGKFJPFC_BCJNFDKJPKC_OFFSET))(this);
	}

	::System::Boolean IDHOMHHFPOH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OHGICJMALCK_OLAOGKFJPFC_IDHOMHHFPOH_OFFSET))(this);
	}

	::System::Boolean MBEBKINJOCI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OHGICJMALCK_OLAOGKFJPFC_MBEBKINJOCI_OFFSET))(this);
	}
};
