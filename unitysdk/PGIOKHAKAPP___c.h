#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PGIOKHAKAPP;
namespace System { class Object; }

#define PGIOKHAKAPP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF33350)
#define PGIOKHAKAPP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF33390)
#define PGIOKHAKAPP___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1DF333A0)

	class PGIOKHAKAPP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3E470);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PGIOKHAKAPP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGIOKHAKAPP___C_CTOR_OFFSET))(this);
		}

		::PGIOKHAKAPP* __cctor_b__48_0()
		{
			return ((::PGIOKHAKAPP*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGIOKHAKAPP___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
