#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KBCNABANJLF;
namespace System { class Object; }

#define KBCNABANJLF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x203B2EE0)
#define KBCNABANJLF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x203B2F20)
#define KBCNABANJLF___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x203B2F30)

inline static constexpr unsigned int KBCNABANJLF___c_TypeDefinitionIndex = 35935;

	class KBCNABANJLF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x69B60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KBCNABANJLF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBCNABANJLF___C_CTOR_OFFSET))(this);
		}

		::KBCNABANJLF* __cctor_b__28_0()
		{
			return ((::KBCNABANJLF*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBCNABANJLF___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
