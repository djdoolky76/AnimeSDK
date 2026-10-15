#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GDIBHDEKJCG;
namespace System { class Object; }

#define GDIBHDEKJCG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E44B7B0)
#define GDIBHDEKJCG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E44B7F0)
#define GDIBHDEKJCG___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E44B800)

	class GDIBHDEKJCG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x10E90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GDIBHDEKJCG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDIBHDEKJCG___C_CTOR_OFFSET))(this);
		}

		::GDIBHDEKJCG* __cctor_b__18_0()
		{
			return ((::GDIBHDEKJCG*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDIBHDEKJCG___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
