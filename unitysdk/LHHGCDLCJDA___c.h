#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LHHGCDLCJDA;
namespace System { class Object; }

#define LHHGCDLCJDA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9609F0)
#define LHHGCDLCJDA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E960A20)
#define LHHGCDLCJDA___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E960A30)

inline static constexpr unsigned int LHHGCDLCJDA___c_TypeDefinitionIndex = 30242;

	class LHHGCDLCJDA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x40F40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LHHGCDLCJDA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHHGCDLCJDA___C_CTOR_OFFSET))(this);
		}

		::LHHGCDLCJDA* __cctor_b__33_0()
		{
			return ((::LHHGCDLCJDA*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHHGCDLCJDA___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
