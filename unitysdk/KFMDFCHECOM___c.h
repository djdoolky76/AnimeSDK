#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KFMDFCHECOM;
namespace System { class Object; }

#define KFMDFCHECOM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E820100)
#define KFMDFCHECOM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E820140)
#define KFMDFCHECOM___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E820150)

	class KFMDFCHECOM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x14330);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KFMDFCHECOM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFMDFCHECOM___C_CTOR_OFFSET))(this);
		}

		::KFMDFCHECOM* __cctor_b__33_0()
		{
			return ((::KFMDFCHECOM*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFMDFCHECOM___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
