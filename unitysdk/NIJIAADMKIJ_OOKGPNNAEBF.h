#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NIJIAADMKIJ_CNPCHLGIHFL;

#define NIJIAADMKIJ_OOKGPNNAEBF_KEMHKAMDFCC_OFFSET UNITYSDK_OFFSET(0x16B80A50)
#define NIJIAADMKIJ_OOKGPNNAEBF__CTOR_OFFSET UNITYSDK_OFFSET(0x16B80A40)

inline static constexpr unsigned int NIJIAADMKIJ_OOKGPNNAEBF_TypeDefinitionIndex = 57842;

class NIJIAADMKIJ_OOKGPNNAEBF : public ::System::Object
{
public:
	::NIJIAADMKIJ_CNPCHLGIHFL* FGBNBFHOKAA; // 0x10
	::System::Int32 MGMDLMBEDJF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIJIAADMKIJ_OOKGPNNAEBF__CTOR_OFFSET))(this);
	}

	::System::Void KEMHKAMDFCC(::System::Boolean NDOLCDKEHNN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NIJIAADMKIJ_OOKGPNNAEBF_KEMHKAMDFCC_OFFSET))(this, NDOLCDKEHNN);
	}
};
