#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MJFFBOKIDND;
namespace System { class Object; }

#define MJFFBOKIDND___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA49A70)
#define MJFFBOKIDND___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA49AB0)
#define MJFFBOKIDND___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EA49AC0)

	class MJFFBOKIDND___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x55970);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MJFFBOKIDND___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJFFBOKIDND___C_CTOR_OFFSET))(this);
		}

		::MJFFBOKIDND* __cctor_b__28_0()
		{
			return ((::MJFFBOKIDND*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJFFBOKIDND___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
