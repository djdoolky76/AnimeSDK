#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A02C529E4F26A97B_B10456726705F94C.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System::Threading { class Thread; }

#define F92D59E5E1F97AD2_B3964F83D534B116_OFFSET UNITYSDK_OFFSET(0x3D3BA90)
#define F92D59E5E1F97AD2_E5ABBD460BB47F83_OFFSET UNITYSDK_OFFSET(0x3D3BA70)

inline static constexpr unsigned int F92D59E5E1F97AD2_TypeDefinitionIndex = 10963;

struct alignas(8) F92D59E5E1F97AD2
{
	::A02C529E4F26A97B_B10456726705F94C B3392FF60E9114CF; // 0x10
	::System::Boolean EEA874D4276B35ED; // 0x18
	::System::Byte _padding0[0x7];
	::System::Object* F319A5E684559CC7; // 0x20
	::System::Threading::Thread* B111620228C61457; // 0x28

	::System::Boolean E5ABBD460BB47F83()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + F92D59E5E1F97AD2_E5ABBD460BB47F83_OFFSET))(this);
	}

	::System::Void B3964F83D534B116()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F92D59E5E1F97AD2_B3964F83D534B116_OFFSET))(this);
	}
};
