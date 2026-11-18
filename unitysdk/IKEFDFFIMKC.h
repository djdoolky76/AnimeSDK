#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define IKEFDFFIMKC__CTOR_OFFSET UNITYSDK_OFFSET(0x13811660)

inline static constexpr unsigned int IKEFDFFIMKC_TypeDefinitionIndex = 58824;

class IKEFDFFIMKC : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::AnimationCurve*>* HBMLPKDKNJJ; // 0x10
	::System::Collections::Generic::List_1<::UnityEngine::AnimationCurve*>* BJHCBNMCBOP; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKEFDFFIMKC__CTOR_OFFSET))(this);
	}
};
