#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BPLKAFBAEHJ;
class MMHGJMLKKEA;
namespace System { class String; }

#define HLMBKALBNNL_DFHCJJMAKMC_OFFSET UNITYSDK_OFFSET(0x140C0920)
#define HLMBKALBNNL_GLEOCJPDLBC_OFFSET UNITYSDK_OFFSET(0x140C08A0)

inline static constexpr unsigned int HLMBKALBNNL_TypeDefinitionIndex = 45706;

class HLMBKALBNNL : public ::System::Object
{
public:
	// static const ::System::String* CLOBPCILDHJ; // 0x0

	static ::System::Boolean GLEOCJPDLBC(::System::UInt32 HLIOLBGJDEA, ::MMHGJMLKKEA*& LILKIGNNLAJ)
	{
		return ((::System::Boolean(*)(::System::UInt32, ::MMHGJMLKKEA*&))((::PBYTE)hIl2Cpp + HLMBKALBNNL_GLEOCJPDLBC_OFFSET))(HLIOLBGJDEA, LILKIGNNLAJ);
	}

	static ::System::String* DFHCJJMAKMC(::BPLKAFBAEHJ* LJBPECKCCEA, ::System::Boolean PMLAACAFPDO)
	{
		return ((::System::String*(*)(::BPLKAFBAEHJ*, ::System::Boolean))((::PBYTE)hIl2Cpp + HLMBKALBNNL_DFHCJJMAKMC_OFFSET))(LJBPECKCCEA, PMLAACAFPDO);
	}
};
