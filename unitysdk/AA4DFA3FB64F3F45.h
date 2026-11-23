#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define AA4DFA3FB64F3F45_ADEC45654C330B9A_OFFSET UNITYSDK_OFFSET(0x2375CA0)
#define AA4DFA3FB64F3F45_B38AE0F7B63BFC59_OFFSET UNITYSDK_OFFSET(0x2375F30)
#define AA4DFA3FB64F3F45_F51D72CC8D7335F2_OFFSET UNITYSDK_OFFSET(0x2375E80)
#define AA4DFA3FB64F3F45_F5642D94EAE2EEA9_OFFSET UNITYSDK_OFFSET(0x2375DD0)

inline static constexpr unsigned int AA4DFA3FB64F3F45_TypeDefinitionIndex = 3338;

class AA4DFA3FB64F3F45 : public ::System::Object
{
public:
	static ::System::String* F51D72CC8D7335F2()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + AA4DFA3FB64F3F45_F51D72CC8D7335F2_OFFSET))();
	}

	static ::System::String* F5642D94EAE2EEA9()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + AA4DFA3FB64F3F45_F5642D94EAE2EEA9_OFFSET))();
	}

	static ::System::String* ADEC45654C330B9A(::System::String* A63698870A4A03E5)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + AA4DFA3FB64F3F45_ADEC45654C330B9A_OFFSET))(A63698870A4A03E5);
	}

	static ::System::String* B38AE0F7B63BFC59()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + AA4DFA3FB64F3F45_B38AE0F7B63BFC59_OFFSET))();
	}
};
