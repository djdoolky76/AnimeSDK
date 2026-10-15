#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OJOEOMAKAGI;
namespace System { class Object; }

#define OJOEOMAKAGI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE8C2C0)
#define OJOEOMAKAGI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE8C300)
#define OJOEOMAKAGI___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1DE8C310)

	class OJOEOMAKAGI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x202B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OJOEOMAKAGI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJOEOMAKAGI___C_CTOR_OFFSET))(this);
		}

		::OJOEOMAKAGI* __cctor_b__33_0()
		{
			return ((::OJOEOMAKAGI*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJOEOMAKAGI___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
