#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KEHOGIENDKC;
namespace System { class Object; }

#define KEHOGIENDKC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E80AA60)
#define KEHOGIENDKC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E80AAA0)
#define KEHOGIENDKC___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E80AAB0)

	class KEHOGIENDKC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x12890);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KEHOGIENDKC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEHOGIENDKC___C_CTOR_OFFSET))(this);
		}

		::KEHOGIENDKC* __cctor_b__33_0()
		{
			return ((::KEHOGIENDKC*(*)(::PVOID))((::PBYTE)hIl2Cpp + KEHOGIENDKC___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
