#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class WeakReference_1; }
namespace UnityEngine { class GameObject; }

#define CGBGBGOGEMK_AFGAEJLINDP__CTOR_OFFSET UNITYSDK_OFFSET(0x139C44C0)

inline static constexpr unsigned int CGBGBGOGEMK_AFGAEJLINDP_TypeDefinitionIndex = 88855;

class CGBGBGOGEMK_AFGAEJLINDP : public ::System::Object
{
public:
	::System::WeakReference_1<::UnityEngine::GameObject*>* JEIDPPCEHLD; // 0x10
	::System::Int32 KIAGKPDIDDH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_AFGAEJLINDP__CTOR_OFFSET))(this);
	}
};
