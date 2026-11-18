#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define DADCLNDFKEA__CTOR_OFFSET UNITYSDK_OFFSET(0x123FE050)

inline static constexpr unsigned int DADCLNDFKEA_TypeDefinitionIndex = 88091;

class DADCLNDFKEA : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::AnimationCurve*>* POMBFKPGFKF; // 0x10
	::System::Collections::Generic::List_1<::UnityEngine::AnimationCurve*>* CFIBPJBAHJP; // 0x18
	::System::Single INHLIKEGNDL; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DADCLNDFKEA__CTOR_OFFSET))(this);
	}
};
