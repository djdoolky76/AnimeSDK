#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/GEJADGCJEBG.h"

class CPJHOPDANAJ;
class PDKOPODIHIE;

#define FOUNDATION_VIEWOBJECT_DONJON_FLOOREROSIONDATACOMPONENT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13242400)
#define FOUNDATION_VIEWOBJECT_DONJON_FLOOREROSIONDATACOMPONENT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13242440)
#define FOUNDATION_VIEWOBJECT_DONJON_FLOOREROSIONDATACOMPONENT___C__ONENABLE_B__5_0_OFFSET UNITYSDK_OFFSET(0x13242450)

namespace Foundation::ViewObject::Donjon
{
	inline static constexpr unsigned int FloorErosionDataComponent___c_TypeDefinitionIndex = 40405;

	class FloorErosionDataComponent___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(FloorErosionDataComponent___c_TypeDefinitionIndex)->GetStaticField(0x31B60);
		}
		static ::PDKOPODIHIE** StaticGet___9__5_0()
		{
			return (::PDKOPODIHIE**)Il2CppClass::FromTypeDefinitionIndex(FloorErosionDataComponent___c_TypeDefinitionIndex)->GetStaticField(0x31B68);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_FLOOREROSIONDATACOMPONENT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_FLOOREROSIONDATACOMPONENT___C__CTOR_OFFSET))(this);
		}

		::CPJHOPDANAJ* _OnEnable_b__5_0(::GEJADGCJEBG context)
		{
			return ((::CPJHOPDANAJ*(*)(::PVOID, ::GEJADGCJEBG))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_FLOOREROSIONDATACOMPONENT___C__ONENABLE_B__5_0_OFFSET))(this, context);
		}
	};
}
