#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define B62BB6DAF7FE7329_AF0753B3E158E4AD_OFFSET UNITYSDK_OFFSET(0x1B8C490)
#define B62BB6DAF7FE7329_B1B7DBF1C0F3AF5F_OFFSET UNITYSDK_OFFSET(0x1B8C330)
#define B62BB6DAF7FE7329_EB3BE88265E61C45_OFFSET UNITYSDK_OFFSET(0x1B8C3F0)
#define B62BB6DAF7FE7329__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8C530)

inline static constexpr unsigned int B62BB6DAF7FE7329_TypeDefinitionIndex = 2269;

class B62BB6DAF7FE7329 : public ::System::Object
{
public:
	::System::UInt32 A4990782FDF80975; // 0x10
	::System::UInt32 F80FD2FDDCFD2577; // 0x14
	::System::UInt32 E99D00E85E63EDC1; // 0x18
	::System::Boolean E580C97C13617576; // 0x1C
	::System::Byte _padding0[0x3];
	::System::Action_1<::B62BB6DAF7FE7329*>* B94B690DC1BA1548; // 0x20
	::System::Action* B12A80899F3716C5; // 0x28
	::System::Action* F5D0FF9694461A82; // 0x30

	::System::Void EB3BE88265E61C45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B62BB6DAF7FE7329_EB3BE88265E61C45_OFFSET))(this);
	}

	::System::Void B1B7DBF1C0F3AF5F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B62BB6DAF7FE7329_B1B7DBF1C0F3AF5F_OFFSET))(this);
	}

	::System::Void AF0753B3E158E4AD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B62BB6DAF7FE7329_AF0753B3E158E4AD_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B62BB6DAF7FE7329__CTOR_OFFSET))(this);
	}
};
