#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MBPCKIKJKOF;
namespace System { class Object; }

#define MBPCKIKJKOF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9EF460)
#define MBPCKIKJKOF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9EF4A0)
#define MBPCKIKJKOF___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E9EF4B0)

	class MBPCKIKJKOF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x46760);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MBPCKIKJKOF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBPCKIKJKOF___C_CTOR_OFFSET))(this);
		}

		::MBPCKIKJKOF* __cctor_b__28_0()
		{
			return ((::MBPCKIKJKOF*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBPCKIKJKOF___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
