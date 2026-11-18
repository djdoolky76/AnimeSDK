#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Predicate_1; }

#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE93610)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE93650)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS___C__CUBICROOTS_B__81_0_OFFSET UNITYSDK_OFFSET(0x1DE93660)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS___C__CUBICROOTS_B__81_1_OFFSET UNITYSDK_OFFSET(0x1DE936E0)

namespace ToolBuddy::ThirdParty::VectorGraphics
{
	inline static constexpr unsigned int VectorUtils___c_TypeDefinitionIndex = 31210;

	class VectorUtils___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Double, ::System::Single>** StaticGet___9__81_1()
		{
			return (::System::Func_2<::System::Double, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(VectorUtils___c_TypeDefinitionIndex)->GetStaticField(0x280B0);
		}
		static ::System::Predicate_1<::System::Double>** StaticGet___9__81_0()
		{
			return (::System::Predicate_1<::System::Double>**)Il2CppClass::FromTypeDefinitionIndex(VectorUtils___c_TypeDefinitionIndex)->GetStaticField(0x280B8);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(VectorUtils___c_TypeDefinitionIndex)->GetStaticField(0x280C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _CubicRoots_b__81_0(::System::Double x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS___C__CUBICROOTS_B__81_0_OFFSET))(this, x);
		}

		::System::Single _CubicRoots_b__81_1(::System::Double x)
		{
			return ((::System::Single(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS___C__CUBICROOTS_B__81_1_OFFSET))(this, x);
		}
	};
}
