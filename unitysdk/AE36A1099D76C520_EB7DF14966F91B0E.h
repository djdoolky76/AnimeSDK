#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AE36A1099D76C520;
class F8B11FF5D1DF1B0F;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define AE36A1099D76C520_EB7DF14966F91B0E_E86564B7A1960FD2_OFFSET UNITYSDK_OFFSET(0x38F5620)
#define AE36A1099D76C520_EB7DF14966F91B0E__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int AE36A1099D76C520_EB7DF14966F91B0E_TypeDefinitionIndex = 11775;

class AE36A1099D76C520_EB7DF14966F91B0E : public ::System::Object
{
public:
	::AE36A1099D76C520* A544919C800E2923; // 0x10
	::System::Action_1<::System::String*>* E04D2BE64FCE9814; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AE36A1099D76C520_EB7DF14966F91B0E__CTOR_OFFSET))(this);
	}

	::System::Void E86564B7A1960FD2(::System::Int32 B714679C324FF96E, ::System::String* B083BE7841B347C4, ::F8B11FF5D1DF1B0F* E4BD819DDBEC18B1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::F8B11FF5D1DF1B0F*))((::PBYTE)hIl2Cpp + AE36A1099D76C520_EB7DF14966F91B0E_E86564B7A1960FD2_OFFSET))(this, B714679C324FF96E, B083BE7841B347C4, E4BD819DDBEC18B1);
	}
};
