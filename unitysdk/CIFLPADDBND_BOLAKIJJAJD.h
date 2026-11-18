#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CIFLPADDBND_BOLAKIJJAJD_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x139CC320)
#define CIFLPADDBND_BOLAKIJJAJD__CTOR_OFFSET UNITYSDK_OFFSET(0x139CC310)

inline static constexpr unsigned int CIFLPADDBND_BOLAKIJJAJD_TypeDefinitionIndex = 87915;

class CIFLPADDBND_BOLAKIJJAJD : public ::System::Object
{
public:
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x10
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x18
	::System::String* GDGGMIJHAJJ; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIFLPADDBND_BOLAKIJJAJD__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIFLPADDBND_BOLAKIJJAJD_PNGOHNLELDJ_OFFSET))(this);
	}
};
