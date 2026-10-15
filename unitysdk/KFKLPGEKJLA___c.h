#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KFKLPGEKJLA;
namespace System { class Object; }

#define KFKLPGEKJLA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E81D510)
#define KFKLPGEKJLA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E81D550)
#define KFKLPGEKJLA___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E81D560)

inline static constexpr unsigned int KFKLPGEKJLA___c_TypeDefinitionIndex = 25073;

	class KFKLPGEKJLA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x13F00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KFKLPGEKJLA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFKLPGEKJLA___C_CTOR_OFFSET))(this);
		}

		::KFKLPGEKJLA* __cctor_b__28_0()
		{
			return ((::KFKLPGEKJLA*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFKLPGEKJLA___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
