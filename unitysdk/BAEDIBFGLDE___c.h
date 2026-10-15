#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BAEDIBFGLDE;
namespace System { class Object; }

#define BAEDIBFGLDE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7B2050)
#define BAEDIBFGLDE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7B2090)
#define BAEDIBFGLDE___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E7B20A0)

	class BAEDIBFGLDE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x44AE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BAEDIBFGLDE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAEDIBFGLDE___C_CTOR_OFFSET))(this);
		}

		::BAEDIBFGLDE* __cctor_b__33_0()
		{
			return ((::BAEDIBFGLDE*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAEDIBFGLDE___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
