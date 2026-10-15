#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AKHEHAMBLEB;
namespace System { class Object; }

#define AKHEHAMBLEB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3CBD20)
#define AKHEHAMBLEB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3CBD60)
#define AKHEHAMBLEB___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E3CBD70)

	class AKHEHAMBLEB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x36A70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKHEHAMBLEB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKHEHAMBLEB___C_CTOR_OFFSET))(this);
		}

		::AKHEHAMBLEB* __cctor_b__28_0()
		{
			return ((::AKHEHAMBLEB*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKHEHAMBLEB___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
