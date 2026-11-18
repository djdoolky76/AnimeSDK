#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CHODNEDHGJE_JAKHEDEOMCF_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x15334E40)
#define CHODNEDHGJE_JAKHEDEOMCF__CTOR_OFFSET UNITYSDK_OFFSET(0x15334E30)

inline static constexpr unsigned int CHODNEDHGJE_JAKHEDEOMCF_TypeDefinitionIndex = 88600;

class CHODNEDHGJE_JAKHEDEOMCF : public ::System::Object
{
public:
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x10
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x18
	::System::String* GDGGMIJHAJJ; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHODNEDHGJE_JAKHEDEOMCF__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHODNEDHGJE_JAKHEDEOMCF_PNGOHNLELDJ_OFFSET))(this);
	}
};
