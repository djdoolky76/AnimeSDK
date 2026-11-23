#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define PAMPELGAMES_ROADCONSTRUCTOR_SWITCHER__CTOR_OFFSET UNITYSDK_OFFSET(0x2893910)

namespace PampelGames::RoadConstructor
{
	inline static constexpr unsigned int Switcher_TypeDefinitionIndex = 16186;

	class Switcher : public ::System::Object
	{
	public:
		::System::Single duration; // 0x10
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* lights; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMPELGAMES_ROADCONSTRUCTOR_SWITCHER__CTOR_OFFSET))(this);
		}
	};
}
