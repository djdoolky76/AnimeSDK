#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System::Text { class StringBuilder; }

#define RPG_GAMECORE_DYNAMICVALUE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F0D59D0)
#define RPG_GAMECORE_DYNAMICVALUE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F0D5A00)
#define RPG_GAMECORE_DYNAMICVALUE___C___CCTOR_B__80_0_OFFSET UNITYSDK_OFFSET(0x1F0D5A10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DynamicValue___c_TypeDefinitionIndex = 10858;

	class DynamicValue___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.GameCore", "<>c")->GetStaticField(0x1CA90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICVALUE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICVALUE___C_CTOR_OFFSET))(this);
		}

		::System::Text::StringBuilder* __cctor_b__80_0()
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICVALUE___C___CCTOR_B__80_0_OFFSET))(this);
		}

	};
}
