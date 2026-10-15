#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore
{
	template <typename T>
	class GameComponentTypeInfoHelper_1 : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_ComponentTypeIndex()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.GameCore", "GameComponentTypeInfoHelper`1")->GetStaticField(0x0);
		}

		static ::System::Boolean* StaticGet_IsTickImplemented()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "GameComponentTypeInfoHelper`1")->GetStaticField(0x0);
		}

		static ::System::Boolean* StaticGet_IsLateUpdateImplemented()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "GameComponentTypeInfoHelper`1")->GetStaticField(0x0);
		}

	};
}
