#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	template <typename T>
	class B2ArenaAllocatorIndexer_1 : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_Index()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.LittleGameShare.HoyoPhysics.Box2D", "B2ArenaAllocatorIndexer`1")->GetStaticField(0x0);
		}

	};
}
