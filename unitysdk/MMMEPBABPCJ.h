#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ConsoleVariableBoolProperty.h"

#define MMMEPBABPCJ_CCTOR_OFFSET UNITYSDK_OFFSET(0xB9D34F0)

inline static constexpr unsigned int MMMEPBABPCJ_TypeDefinitionIndex = 50058;

	class MMMEPBABPCJ : public ::System::Object
	{
	public:
		static ::UnityEngine::ConsoleVariableBoolProperty* StaticGet_FNHMMANMDHK()
		{
			return (::UnityEngine::ConsoleVariableBoolProperty*)UnitySDK::FromName("", "MMMEPBABPCJ")->GetStaticField(0x11180);
		}

		static ::UnityEngine::ConsoleVariableBoolProperty* StaticGet_LHGHGMBIIFO()
		{
			return (::UnityEngine::ConsoleVariableBoolProperty*)UnitySDK::FromName("", "MMMEPBABPCJ")->GetStaticField(0x11190);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MMMEPBABPCJ_CCTOR_OFFSET))();
		}

	};
