#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EHKDAJFLIEI;
namespace System { class Object; }

#define EHKDAJFLIEI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E273DD0)
#define EHKDAJFLIEI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E273E10)
#define EHKDAJFLIEI___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E273E20)

inline static constexpr unsigned int EHKDAJFLIEI___c_TypeDefinitionIndex = 32919;

	class EHKDAJFLIEI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x497D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EHKDAJFLIEI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHKDAJFLIEI___C_CTOR_OFFSET))(this);
		}

		::EHKDAJFLIEI* __cctor_b__28_0()
		{
			return ((::EHKDAJFLIEI*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHKDAJFLIEI___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
