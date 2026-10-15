#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NJBNEBEFNEC;
namespace System { class Object; }

#define NJBNEBEFNEC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB3C3B0)
#define NJBNEBEFNEC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB3C3F0)
#define NJBNEBEFNEC___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1EB3C400)

	class NJBNEBEFNEC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x64B80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NJBNEBEFNEC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJBNEBEFNEC___C_CTOR_OFFSET))(this);
		}

		::NJBNEBEFNEC* __cctor_b__33_0()
		{
			return ((::NJBNEBEFNEC*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJBNEBEFNEC___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
