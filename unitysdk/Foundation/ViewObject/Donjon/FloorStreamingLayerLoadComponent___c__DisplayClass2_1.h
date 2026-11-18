#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IHLLEPCIGGO;

#define FOUNDATION_VIEWOBJECT_DONJON_FLOORSTREAMINGLAYERLOADCOMPONENT___C__DISPLAYCLASS2_1__CTOR_OFFSET UNITYSDK_OFFSET(0x10ED78E0)
#define FOUNDATION_VIEWOBJECT_DONJON_FLOORSTREAMINGLAYERLOADCOMPONENT___C__DISPLAYCLASS2_1__ONENABLE_B__1_OFFSET UNITYSDK_OFFSET(0x10ED78F0)

namespace Foundation::ViewObject::Donjon
{
	inline static constexpr unsigned int FloorStreamingLayerLoadComponent___c__DisplayClass2_1_TypeDefinitionIndex = 45921;

	template <typename T>
	class FloorStreamingLayerLoadComponent___c__DisplayClass2_1 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals1; // 0x10
		::System::Int32 groupId; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_FLOORSTREAMINGLAYERLOADCOMPONENT___C__DISPLAYCLASS2_1__CTOR_OFFSET))(this);
		}

		::System::Void _OnEnable_b__1(::System::Boolean success, ::IHLLEPCIGGO* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::IHLLEPCIGGO*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_FLOORSTREAMINGLAYERLOADCOMPONENT___C__DISPLAYCLASS2_1__ONENABLE_B__1_OFFSET))(this, success, rsp);
		}
	};
}
