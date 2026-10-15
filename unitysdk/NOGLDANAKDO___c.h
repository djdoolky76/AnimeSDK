#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NOGLDANAKDO;
namespace System { class Object; }

#define NOGLDANAKDO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB5CC40)
#define NOGLDANAKDO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB5CC80)
#define NOGLDANAKDO___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1EB5CC90)

inline static constexpr unsigned int NOGLDANAKDO___c_TypeDefinitionIndex = 29648;

	class NOGLDANAKDO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xB120);
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
