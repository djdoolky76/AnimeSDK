#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Random; }

#define STATETREEGAMEPLAY_THREADSAFERANDOM_GET_RANDOM_OFFSET UNITYSDK_OFFSET(0x1D6473B0)
#define STATETREEGAMEPLAY_THREADSAFERANDOM_INSIDEUNITCIRCLE_OFFSET UNITYSDK_OFFSET(0x1D647670)
#define STATETREEGAMEPLAY_THREADSAFERANDOM_INSIDEUNITSPHERE_OFFSET UNITYSDK_OFFSET(0x1D6478A0)
#define STATETREEGAMEPLAY_THREADSAFERANDOM_NEXTFLOAT_OFFSET UNITYSDK_OFFSET(0x1D6475D0)
#define STATETREEGAMEPLAY_THREADSAFERANDOM_RANGE_OFFSET UNITYSDK_OFFSET(0x1D647520)
#define STATETREEGAMEPLAY_THREADSAFERANDOM__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D647BA0)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int ThreadSafeRandom_TypeDefinitionIndex = 58984;

	class ThreadSafeRandom : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet__seed()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ThreadSafeRandom_TypeDefinitionIndex)->GetStaticField(0x11680);
		}
		static ::System::Random** StaticGet__random()
		{
			return (::System::Random**)Il2CppClass::FromTypeDefinitionIndex(ThreadSafeRandom_TypeDefinitionIndex)->GetStaticField(0x0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_THREADSAFERANDOM__CCTOR_OFFSET))();
		}

		static ::System::Random* get_Random()
		{
			return ((::System::Random*(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_THREADSAFERANDOM_GET_RANDOM_OFFSET))();
		}

		static ::System::Single Range(::System::Single min, ::System::Single max)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_THREADSAFERANDOM_RANGE_OFFSET))(min, max);
		}

		static ::System::Single NextFloat()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_THREADSAFERANDOM_NEXTFLOAT_OFFSET))();
		}

		static ::UnityEngine::Vector2 InsideUnitCircle()
		{
			return ((::UnityEngine::Vector2(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_THREADSAFERANDOM_INSIDEUNITCIRCLE_OFFSET))();
		}

		static ::UnityEngine::Vector3 InsideUnitSphere()
		{
			return ((::UnityEngine::Vector3(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_THREADSAFERANDOM_INSIDEUNITSPHERE_OFFSET))();
		}
	};
}
