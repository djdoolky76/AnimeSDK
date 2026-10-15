#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PIOGCEBHNBF;
namespace System { class Object; }

#define PIOGCEBHNBF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF44A20)
#define PIOGCEBHNBF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF44A50)
#define PIOGCEBHNBF___C___CCTOR_B__103_0_OFFSET UNITYSDK_OFFSET(0x1DF44A60)

inline static constexpr unsigned int PIOGCEBHNBF___c_TypeDefinitionIndex = 25399;

	class PIOGCEBHNBF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x35CC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIOGCEBHNBF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIOGCEBHNBF___C_CTOR_OFFSET))(this);
		}

		::PIOGCEBHNBF* __cctor_b__103_0()
		{
			return ((::PIOGCEBHNBF*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIOGCEBHNBF___C___CCTOR_B__103_0_OFFSET))(this);
		}

	};
