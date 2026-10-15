#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IKDGBHLLMBB;
namespace System { class Object; }

#define IKDGBHLLMBB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E69F690)
#define IKDGBHLLMBB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E69F6D0)
#define IKDGBHLLMBB___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E69F6E0)

	class IKDGBHLLMBB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x55400);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IKDGBHLLMBB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKDGBHLLMBB___C_CTOR_OFFSET))(this);
		}

		::IKDGBHLLMBB* __cctor_b__28_0()
		{
			return ((::IKDGBHLLMBB*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKDGBHLLMBB___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
