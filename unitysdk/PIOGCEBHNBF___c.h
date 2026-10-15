#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PIOGCEBHNBF;
namespace System { class Object; }

#define PIOGCEBHNBF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF720A0)
#define PIOGCEBHNBF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF720D0)
#define PIOGCEBHNBF___C___CCTOR_B__103_0_OFFSET UNITYSDK_OFFSET(0x1DF720E0)

	class PIOGCEBHNBF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x45650);
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
