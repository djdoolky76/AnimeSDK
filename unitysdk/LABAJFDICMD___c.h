#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LABAJFDICMD;
namespace System { class Object; }

#define LABAJFDICMD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8C6780)
#define LABAJFDICMD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8C67C0)
#define LABAJFDICMD___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E8C67D0)

	class LABAJFDICMD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2E600);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LABAJFDICMD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LABAJFDICMD___C_CTOR_OFFSET))(this);
		}

		::LABAJFDICMD* __cctor_b__28_0()
		{
			return ((::LABAJFDICMD*(*)(::PVOID))((::PBYTE)hIl2Cpp + LABAJFDICMD___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
