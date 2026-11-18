#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define PCCMOBNBBCJ__CTOR_OFFSET UNITYSDK_OFFSET(0x11B57210)

inline static constexpr unsigned int PCCMOBNBBCJ_TypeDefinitionIndex = 54854;

class PCCMOBNBBCJ : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::AnimationCurve*>* DFELIBBHBKC; // 0x10
	::System::Single OEJJIGILEHO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCCMOBNBBCJ__CTOR_OFFSET))(this);
	}
};
