#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KGBAFBEMICB;
namespace System { class Object; }

#define KGBAFBEMICB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E835250)
#define KGBAFBEMICB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E835290)
#define KGBAFBEMICB___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E8352A0)

	class KGBAFBEMICB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x15B70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KGBAFBEMICB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGBAFBEMICB___C_CTOR_OFFSET))(this);
		}

		::KGBAFBEMICB* __cctor_b__28_0()
		{
			return ((::KGBAFBEMICB*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGBAFBEMICB___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
