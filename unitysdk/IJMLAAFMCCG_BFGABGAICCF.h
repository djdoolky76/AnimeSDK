#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define IJMLAAFMCCG_BFGABGAICCF_BCJNFDKJPKC_OFFSET UNITYSDK_OFFSET(0x160AF3B0)
#define IJMLAAFMCCG_BFGABGAICCF_IDHOMHHFPOH_OFFSET UNITYSDK_OFFSET(0x160B0030)
#define IJMLAAFMCCG_BFGABGAICCF_MBEBKINJOCI_OFFSET UNITYSDK_OFFSET(0x160AF4E0)
#define IJMLAAFMCCG_BFGABGAICCF__CTOR_OFFSET UNITYSDK_OFFSET(0x160B0020)

inline static constexpr unsigned int IJMLAAFMCCG_BFGABGAICCF_TypeDefinitionIndex = 51800;

class IJMLAAFMCCG_BFGABGAICCF : public ::System::Object
{
public:
	::System::Action_1<::System::Object*>* EGHBMCOKHOH; // 0x10
	::System::Int32 EKHFNGNDBNE; // 0x18
	::System::Boolean CCEGBNDFIEM; // 0x1C
	::System::Boolean AOLKFIKCNOH; // 0x1D
	::System::Boolean IDJONIJEJOA; // 0x1E
	::System::Byte _padding0[0x1];
	::System::Int32 MBNJLLBDIHA; // 0x20
	::System::UInt32 PLLAHMDIFJF; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJMLAAFMCCG_BFGABGAICCF__CTOR_OFFSET))(this);
	}

	::System::Int32 BCJNFDKJPKC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IJMLAAFMCCG_BFGABGAICCF_BCJNFDKJPKC_OFFSET))(this);
	}

	::System::Boolean MBEBKINJOCI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IJMLAAFMCCG_BFGABGAICCF_MBEBKINJOCI_OFFSET))(this);
	}

	::System::Boolean IDHOMHHFPOH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IJMLAAFMCCG_BFGABGAICCF_IDHOMHHFPOH_OFFSET))(this);
	}
};
