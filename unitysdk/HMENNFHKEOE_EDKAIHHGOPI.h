#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HMENNFHKEOE_EDHGLKMJFCA;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HMENNFHKEOE_EDKAIHHGOPI_JONGDFPLAJH_OFFSET UNITYSDK_OFFSET(0x14D381F0)
#define HMENNFHKEOE_EDKAIHHGOPI__CTOR_OFFSET UNITYSDK_OFFSET(0x14D381E0)

inline static constexpr unsigned int HMENNFHKEOE_EDKAIHHGOPI_TypeDefinitionIndex = 53331;

class HMENNFHKEOE_EDKAIHHGOPI : public ::System::Object
{
public:
	::HMENNFHKEOE_EDHGLKMJFCA* EEMOEMFLABI; // 0x10
	::System::Collections::Generic::List_1<::System::UInt32>* MFDGPOMPDPO; // 0x18
	::System::Int32 ABHBKFJKINO; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMENNFHKEOE_EDKAIHHGOPI__CTOR_OFFSET))(this);
	}

	::System::Void JONGDFPLAJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMENNFHKEOE_EDKAIHHGOPI_JONGDFPLAJH_OFFSET))(this);
	}
};
