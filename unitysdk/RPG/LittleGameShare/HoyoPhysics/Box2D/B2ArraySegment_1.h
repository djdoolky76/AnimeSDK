#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	template <typename T>
	struct alignas(8) B2ArraySegment_1
	{
		::Il2CppArray<T>* _array; // 0x0
		::System::Int32 _offset; // 0x0
		::System::Int32 _count; // 0x0
		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ArraySegment_1<T>* StaticGet__Empty_k__BackingField()
		{
			return (::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ArraySegment_1<T>*)UnitySDK::FromName("RPG.LittleGameShare.HoyoPhysics.Box2D", "B2ArraySegment`1")->GetStaticField(0x0);
		}

	};
}
