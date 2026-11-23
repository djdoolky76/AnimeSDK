#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B07850EA97DBB75A.h"
#include "unitysdk/System/Object.h"

class E19FBE1E705551ED;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }

#define BF29F3D8AE173D96__CTOR_OFFSET UNITYSDK_OFFSET(0x40415F0)

inline static constexpr unsigned int BF29F3D8AE173D96_TypeDefinitionIndex = 20380;

class BF29F3D8AE173D96 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::B07850EA97DBB75A<::UnityEngine::Camera*, ::E19FBE1E705551ED*>>* BB9CBE24B1F96C75; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BF29F3D8AE173D96__CTOR_OFFSET))(this);
	}
};
