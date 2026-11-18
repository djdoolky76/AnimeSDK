#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

namespace ConfigModuleLib::Runtime
{
	inline static constexpr unsigned int LoadAssetListOp_1___c_TypeDefinitionIndex = 8532;

	template <typename T>
	class LoadAssetListOp_1___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(LoadAssetListOp_1___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_2<T, ::System::Boolean>** StaticGet___9__23_0()
		{
			return (::System::Func_2<T, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(LoadAssetListOp_1___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
