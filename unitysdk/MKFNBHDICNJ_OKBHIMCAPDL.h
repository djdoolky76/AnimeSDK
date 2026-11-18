#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KNONKDKJNIJ;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define MKFNBHDICNJ_OKBHIMCAPDL_FPOCONECJID_OFFSET UNITYSDK_OFFSET(0x17D45FD0)
#define MKFNBHDICNJ_OKBHIMCAPDL_JPAJCPJBLCE_OFFSET UNITYSDK_OFFSET(0x17D45F70)
#define MKFNBHDICNJ_OKBHIMCAPDL__CTOR_OFFSET UNITYSDK_OFFSET(0x17D45F60)

inline static constexpr unsigned int MKFNBHDICNJ_OKBHIMCAPDL_TypeDefinitionIndex = 61395;

class MKFNBHDICNJ_OKBHIMCAPDL : public ::System::Object
{
public:
	::System::Action_1<::KNONKDKJNIJ*>* EDNJGMKPFHG; // 0x10
	::System::Action* IFKOKLCPMNF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_OKBHIMCAPDL__CTOR_OFFSET))(this);
	}

	::System::Void JPAJCPJBLCE(::KNONKDKJNIJ* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::KNONKDKJNIJ*))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_OKBHIMCAPDL_JPAJCPJBLCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void FPOCONECJID(::System::Int32 PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_OKBHIMCAPDL_FPOCONECJID_OFFSET))(this, PIIPCLCCOIG);
	}
};
