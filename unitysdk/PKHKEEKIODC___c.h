#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PKHKEEKIODC;
namespace System { class Object; }

#define PKHKEEKIODC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF92EE0)
#define PKHKEEKIODC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF92F10)
#define PKHKEEKIODC___C___CCTOR_B__196_0_OFFSET UNITYSDK_OFFSET(0x1DF92F20)

inline static constexpr unsigned int PKHKEEKIODC___c_TypeDefinitionIndex = 33050;

	class PKHKEEKIODC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x49D30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PKHKEEKIODC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKHKEEKIODC___C_CTOR_OFFSET))(this);
		}

		::PKHKEEKIODC* __cctor_b__196_0()
		{
			return ((::PKHKEEKIODC*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKHKEEKIODC___C___CCTOR_B__196_0_OFFSET))(this);
		}

	};
