#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BAEKEIDLDCI;
namespace System { class Object; }

#define BAEKEIDLDCI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7B3230)
#define BAEKEIDLDCI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7B3270)
#define BAEKEIDLDCI___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E7B3280)

	class BAEKEIDLDCI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x44CC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BAEKEIDLDCI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAEKEIDLDCI___C_CTOR_OFFSET))(this);
		}

		::BAEKEIDLDCI* __cctor_b__28_0()
		{
			return ((::BAEKEIDLDCI*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAEKEIDLDCI___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
