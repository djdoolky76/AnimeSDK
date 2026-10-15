#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MBCOHBBDJAA;
namespace System { class Object; }

#define MBCOHBBDJAA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9E1BD0)
#define MBCOHBBDJAA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9E1C10)
#define MBCOHBBDJAA___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E9E1C20)

	class MBCOHBBDJAA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x430E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MBCOHBBDJAA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBCOHBBDJAA___C_CTOR_OFFSET))(this);
		}

		::MBCOHBBDJAA* __cctor_b__28_0()
		{
			return ((::MBCOHBBDJAA*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBCOHBBDJAA___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
