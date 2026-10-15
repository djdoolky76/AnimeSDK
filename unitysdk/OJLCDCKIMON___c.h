#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OJLCDCKIMON;
namespace System { class Object; }

#define OJLCDCKIMON___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE89C50)
#define OJLCDCKIMON___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE89C90)
#define OJLCDCKIMON___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DE89CA0)

inline static constexpr unsigned int OJLCDCKIMON___c_TypeDefinitionIndex = 31190;

	class OJLCDCKIMON___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1FE30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OJLCDCKIMON___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJLCDCKIMON___C_CTOR_OFFSET))(this);
		}

		::OJLCDCKIMON* __cctor_b__28_0()
		{
			return ((::OJLCDCKIMON*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJLCDCKIMON___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
