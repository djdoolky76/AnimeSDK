#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CBEEKLPIEMK;
namespace System { class Object; }

#define CBEEKLPIEMK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0655C0)
#define CBEEKLPIEMK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E065600)
#define CBEEKLPIEMK___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E065610)

	class CBEEKLPIEMK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xBF90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CBEEKLPIEMK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBEEKLPIEMK___C_CTOR_OFFSET))(this);
		}

		::CBEEKLPIEMK* __cctor_b__28_0()
		{
			return ((::CBEEKLPIEMK*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBEEKLPIEMK___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
