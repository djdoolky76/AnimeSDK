#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class FloorStreamingLayerLoadGroupStateEntry; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define FOUNDATION_VIEWOBJECT_DONJON_FLOORSTREAMINGLAYERLOADCOMPONENT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x142C1540)
#define FOUNDATION_VIEWOBJECT_DONJON_FLOORSTREAMINGLAYERLOADCOMPONENT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x142C1580)
#define FOUNDATION_VIEWOBJECT_DONJON_FLOORSTREAMINGLAYERLOADCOMPONENT___C__ONENABLE_B__2_0_OFFSET UNITYSDK_OFFSET(0x142C1590)

namespace Foundation::ViewObject::Donjon
{
	inline static constexpr unsigned int FloorStreamingLayerLoadComponent___c_TypeDefinitionIndex = 45919;

	class FloorStreamingLayerLoadComponent___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::MoleMole::Config::FloorStreamingLayerLoadGroupStateEntry*, ::System::Int32>** StaticGet___9__2_0()
		{
			return (::System::Func_2<::MoleMole::Config::FloorStreamingLayerLoadGroupStateEntry*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(FloorStreamingLayerLoadComponent___c_TypeDefinitionIndex)->GetStaticField(0x3ADF0);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(FloorStreamingLayerLoadComponent___c_TypeDefinitionIndex)->GetStaticField(0x3ADF8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_FLOORSTREAMINGLAYERLOADCOMPONENT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_FLOORSTREAMINGLAYERLOADCOMPONENT___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _OnEnable_b__2_0(::MoleMole::Config::FloorStreamingLayerLoadGroupStateEntry* entry)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::Config::FloorStreamingLayerLoadGroupStateEntry*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_FLOORSTREAMINGLAYERLOADCOMPONENT___C__ONENABLE_B__2_0_OFFSET))(this, entry);
		}
	};
}
