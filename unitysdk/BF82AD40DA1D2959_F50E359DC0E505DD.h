#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define BF82AD40DA1D2959_F50E359DC0E505DD_E19D5C488C68FD45_OFFSET UNITYSDK_OFFSET(0x39532D0)
#define BF82AD40DA1D2959_F50E359DC0E505DD__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int BF82AD40DA1D2959_F50E359DC0E505DD_TypeDefinitionIndex = 12421;

class BF82AD40DA1D2959_F50E359DC0E505DD : public ::System::Object
{
public:
	::System::Action* E5753F48089F9529; // 0x10
	::System::Action_1<::System::String*>* E8158D6D9A56F03B; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BF82AD40DA1D2959_F50E359DC0E505DD__CTOR_OFFSET))(this);
	}

	::System::Void E19D5C488C68FD45(::System::String* EAE374FF2314A910)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BF82AD40DA1D2959_F50E359DC0E505DD_E19D5C488C68FD45_OFFSET))(this, EAE374FF2314A910);
	}
};
