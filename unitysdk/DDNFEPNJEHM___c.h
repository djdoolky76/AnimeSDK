#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DDNFEPNJEHM;
namespace System { class Object; }

#define DDNFEPNJEHM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E189AA0)
#define DDNFEPNJEHM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E189AD0)
#define DDNFEPNJEHM___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E189AE0)

	class DDNFEPNJEHM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2F1A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DDNFEPNJEHM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDNFEPNJEHM___C_CTOR_OFFSET))(this);
		}

		::DDNFEPNJEHM* __cctor_b__28_0()
		{
			return ((::DDNFEPNJEHM*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDNFEPNJEHM___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
