#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class F00D975466190277;
class F8B11FF5D1DF1B0F;
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }

#define AE36A1099D76C520_E687BC1D2F235992_BE65BFA95E82690A_OFFSET UNITYSDK_OFFSET(0x38F4490)
#define AE36A1099D76C520_E687BC1D2F235992__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int AE36A1099D76C520_E687BC1D2F235992_TypeDefinitionIndex = 11777;

class AE36A1099D76C520_E687BC1D2F235992 : public ::System::Object
{
public:
	::System::Action_3<::System::Int32, ::System::String*, ::F8B11FF5D1DF1B0F*>* E04D2BE64FCE9814; // 0x10
	::F00D975466190277* F19E59B9731CD70D; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AE36A1099D76C520_E687BC1D2F235992__CTOR_OFFSET))(this);
	}

	::System::Void BE65BFA95E82690A(::System::Int32 B714679C324FF96E, ::System::String* B083BE7841B347C4, ::F8B11FF5D1DF1B0F* E4BD819DDBEC18B1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::F8B11FF5D1DF1B0F*))((::PBYTE)hIl2Cpp + AE36A1099D76C520_E687BC1D2F235992_BE65BFA95E82690A_OFFSET))(this, B714679C324FF96E, B083BE7841B347C4, E4BD819DDBEC18B1);
	}
};
