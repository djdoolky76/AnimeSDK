#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FluffyUnderware::Curvy::Generator { class CGSpots; }
namespace FluffyUnderware::Curvy::Generator { class CGVMesh; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }

#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FBB1D60)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1FBB1DA0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH___C__REFRESH_B__122_0_OFFSET UNITYSDK_OFFSET(0x1FBB1DB0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH___C__REFRESH_B__122_1_OFFSET UNITYSDK_OFFSET(0x1FBB1DD0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH___C__TOONEDIMENSIONALARRAY_B__130_0_OFFSET UNITYSDK_OFFSET(0x1FBB1DF0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH___C__TOONEDIMENSIONALARRAY_B__130_1_OFFSET UNITYSDK_OFFSET(0x1FBB1E00)

namespace FluffyUnderware::Curvy::Generator::Modules
{
	inline static constexpr unsigned int CreateMesh___c_TypeDefinitionIndex = 37664;

	class CreateMesh___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::FluffyUnderware::Curvy::Generator::CGSpots*, ::System::Int32>** StaticGet___9__130_1()
		{
			return (::System::Func_2<::FluffyUnderware::Curvy::Generator::CGSpots*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(CreateMesh___c_TypeDefinitionIndex)->GetStaticField(0x2C1C0);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(CreateMesh___c_TypeDefinitionIndex)->GetStaticField(0x2C1C8);
		}
		static ::System::Action_1<::FluffyUnderware::Curvy::Generator::CGVMesh*>** StaticGet___9__122_0()
		{
			return (::System::Action_1<::FluffyUnderware::Curvy::Generator::CGVMesh*>**)Il2CppClass::FromTypeDefinitionIndex(CreateMesh___c_TypeDefinitionIndex)->GetStaticField(0x2C1D0);
		}
		static ::System::Action_1<::FluffyUnderware::Curvy::Generator::CGSpots*>** StaticGet___9__122_1()
		{
			return (::System::Action_1<::FluffyUnderware::Curvy::Generator::CGSpots*>**)Il2CppClass::FromTypeDefinitionIndex(CreateMesh___c_TypeDefinitionIndex)->GetStaticField(0x2C1D8);
		}
		static ::System::Func_2<::FluffyUnderware::Curvy::Generator::CGSpots*, ::System::Boolean>** StaticGet___9__130_0()
		{
			return (::System::Func_2<::FluffyUnderware::Curvy::Generator::CGSpots*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(CreateMesh___c_TypeDefinitionIndex)->GetStaticField(0x2C1E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH___C__CTOR_OFFSET))(this);
		}

		::System::Void _Refresh_b__122_0(::FluffyUnderware::Curvy::Generator::CGVMesh* d)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGVMesh*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH___C__REFRESH_B__122_0_OFFSET))(this, d);
		}

		::System::Void _Refresh_b__122_1(::FluffyUnderware::Curvy::Generator::CGSpots* d)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGSpots*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH___C__REFRESH_B__122_1_OFFSET))(this, d);
		}

		::System::Boolean _ToOneDimensionalArray_b__130_0(::FluffyUnderware::Curvy::Generator::CGSpots* s)
		{
			return ((::System::Boolean(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGSpots*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH___C__TOONEDIMENSIONALARRAY_B__130_0_OFFSET))(this, s);
		}

		::System::Int32 _ToOneDimensionalArray_b__130_1(::FluffyUnderware::Curvy::Generator::CGSpots* s)
		{
			return ((::System::Int32(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGSpots*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH___C__TOONEDIMENSIONALARRAY_B__130_1_OFFSET))(this, s);
		}
	};
}
