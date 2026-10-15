#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LJMGDJBLLKC;
namespace System { class Object; }

#define LJMGDJBLLKC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E95AD70)
#define LJMGDJBLLKC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E95ADB0)
#define LJMGDJBLLKC___C___CCTOR_B__44_0_OFFSET UNITYSDK_OFFSET(0x1E95ADC0)

inline static constexpr unsigned int LJMGDJBLLKC___c_TypeDefinitionIndex = 25217;

	class LJMGDJBLLKC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x39750);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LJMGDJBLLKC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJMGDJBLLKC___C_CTOR_OFFSET))(this);
		}

		::LJMGDJBLLKC* __cctor_b__44_0()
		{
			return ((::LJMGDJBLLKC*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJMGDJBLLKC___C___CCTOR_B__44_0_OFFSET))(this);
		}

	};
