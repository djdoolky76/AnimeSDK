#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ELGOBKCNOHH;
namespace System { class Object; }

#define ELGOBKCNOHH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2D1E20)
#define ELGOBKCNOHH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2D1E60)
#define ELGOBKCNOHH___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1E2D1E70)

	class ELGOBKCNOHH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x507A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ELGOBKCNOHH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELGOBKCNOHH___C_CTOR_OFFSET))(this);
		}

		::ELGOBKCNOHH* __cctor_b__43_0()
		{
			return ((::ELGOBKCNOHH*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELGOBKCNOHH___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
