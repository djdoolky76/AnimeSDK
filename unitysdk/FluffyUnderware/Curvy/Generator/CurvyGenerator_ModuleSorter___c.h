#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FluffyUnderware::Curvy::Generator { class CGModule; }
namespace FluffyUnderware::Curvy::Generator { class CGModuleInputSlot; }
namespace FluffyUnderware::Curvy::Generator { class CGModuleOutputSlot; }
namespace FluffyUnderware::Curvy::Generator { class CGModuleSlot; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_MODULESORTER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ECC20D0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_MODULESORTER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1ECC2110)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_MODULESORTER___C__SORT_B__8_0_OFFSET UNITYSDK_OFFSET(0x1ECC21F0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_MODULESORTER___C__SORT_B__8_1_OFFSET UNITYSDK_OFFSET(0x1ECC2120)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_MODULESORTER___C__SORT_B__8_2_OFFSET UNITYSDK_OFFSET(0x1ECC2140)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_MODULESORTER___C__SORT_B__8_3_OFFSET UNITYSDK_OFFSET(0x1ECC2260)

namespace FluffyUnderware::Curvy::Generator
{
	inline static constexpr unsigned int CurvyGenerator_ModuleSorter___c_TypeDefinitionIndex = 37703;

	class CurvyGenerator_ModuleSorter___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(CurvyGenerator_ModuleSorter___c_TypeDefinitionIndex)->GetStaticField(0x2BF90);
		}
		static ::System::Func_2<::FluffyUnderware::Curvy::Generator::CGModuleInputSlot*, ::System::Int32>** StaticGet___9__8_2()
		{
			return (::System::Func_2<::FluffyUnderware::Curvy::Generator::CGModuleInputSlot*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(CurvyGenerator_ModuleSorter___c_TypeDefinitionIndex)->GetStaticField(0x2BF98);
		}
		static ::System::Comparison_1<::FluffyUnderware::Curvy::Generator::CGModule*>** StaticGet___9__8_0()
		{
			return (::System::Comparison_1<::FluffyUnderware::Curvy::Generator::CGModule*>**)Il2CppClass::FromTypeDefinitionIndex(CurvyGenerator_ModuleSorter___c_TypeDefinitionIndex)->GetStaticField(0x2BFA0);
		}
		static ::System::Func_2<::FluffyUnderware::Curvy::Generator::CGModuleInputSlot*, ::System::Boolean>** StaticGet___9__8_1()
		{
			return (::System::Func_2<::FluffyUnderware::Curvy::Generator::CGModuleInputSlot*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(CurvyGenerator_ModuleSorter___c_TypeDefinitionIndex)->GetStaticField(0x2BFA8);
		}
		static ::System::Func_2<::FluffyUnderware::Curvy::Generator::CGModuleOutputSlot*, ::System::Collections::Generic::IEnumerable_1<::FluffyUnderware::Curvy::Generator::CGModuleSlot*>*>** StaticGet___9__8_3()
		{
			return (::System::Func_2<::FluffyUnderware::Curvy::Generator::CGModuleOutputSlot*, ::System::Collections::Generic::IEnumerable_1<::FluffyUnderware::Curvy::Generator::CGModuleSlot*>*>**)Il2CppClass::FromTypeDefinitionIndex(CurvyGenerator_ModuleSorter___c_TypeDefinitionIndex)->GetStaticField(0x2BFB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_MODULESORTER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_MODULESORTER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _Sort_b__8_1(::FluffyUnderware::Curvy::Generator::CGModuleInputSlot* t)
		{
			return ((::System::Boolean(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGModuleInputSlot*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_MODULESORTER___C__SORT_B__8_1_OFFSET))(this, t);
		}

		::System::Int32 _Sort_b__8_2(::FluffyUnderware::Curvy::Generator::CGModuleInputSlot* t)
		{
			return ((::System::Int32(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGModuleInputSlot*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_MODULESORTER___C__SORT_B__8_2_OFFSET))(this, t);
		}

		::System::Int32 _Sort_b__8_0(::FluffyUnderware::Curvy::Generator::CGModule* a, ::FluffyUnderware::Curvy::Generator::CGModule* b)
		{
			return ((::System::Int32(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGModule*, ::FluffyUnderware::Curvy::Generator::CGModule*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_MODULESORTER___C__SORT_B__8_0_OFFSET))(this, a, b);
		}

		::System::Collections::Generic::IEnumerable_1<::FluffyUnderware::Curvy::Generator::CGModuleSlot*>* _Sort_b__8_3(::FluffyUnderware::Curvy::Generator::CGModuleOutputSlot* outputSlot)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::FluffyUnderware::Curvy::Generator::CGModuleSlot*>*(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGModuleOutputSlot*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_MODULESORTER___C__SORT_B__8_3_OFFSET))(this, outputSlot);
		}
	};
}
