#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OFNBDEKJMON;
namespace System { class Object; }

#define OFNBDEKJMON___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE1E8C0)
#define OFNBDEKJMON___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE1E900)
#define OFNBDEKJMON___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DE1E910)

inline static constexpr unsigned int OFNBDEKJMON___c_TypeDefinitionIndex = 30298;

	class OFNBDEKJMON___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x17150);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OFNBDEKJMON___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFNBDEKJMON___C_CTOR_OFFSET))(this);
		}

		::OFNBDEKJMON* __cctor_b__23_0()
		{
			return ((::OFNBDEKJMON*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFNBDEKJMON___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
