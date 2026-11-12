#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NOGLDANAKDO;
namespace System { class Object; }

#define NOGLDANAKDO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F07E6E0)
#define NOGLDANAKDO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F07E720)
#define NOGLDANAKDO___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F07E730)

inline static constexpr unsigned int NOGLDANAKDO___c_TypeDefinitionIndex = 30460;

	class NOGLDANAKDO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x726A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NOGLDANAKDO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOGLDANAKDO___C_CTOR_OFFSET))(this);
		}

		::NOGLDANAKDO* __cctor_b__23_0()
		{
			return ((::NOGLDANAKDO*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOGLDANAKDO___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
