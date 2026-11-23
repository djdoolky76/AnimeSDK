#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define B6F733D33EA0C7BA_ED1B5EB647FC3CF8_A64E0BE931D71D20_OFFSET UNITYSDK_OFFSET(0x3A5D4C0)
#define B6F733D33EA0C7BA_ED1B5EB647FC3CF8__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B6F733D33EA0C7BA_ED1B5EB647FC3CF8_TypeDefinitionIndex = 13006;

class B6F733D33EA0C7BA_ED1B5EB647FC3CF8 : public ::System::Object
{
public:
	::System::Action_1<::System::String*>* E04D2BE64FCE9814; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B6F733D33EA0C7BA_ED1B5EB647FC3CF8__CTOR_OFFSET))(this);
	}

	::System::Void A64E0BE931D71D20(::System::String* B083BE7841B347C4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + B6F733D33EA0C7BA_ED1B5EB647FC3CF8_A64E0BE931D71D20_OFFSET))(this, B083BE7841B347C4);
	}
};
