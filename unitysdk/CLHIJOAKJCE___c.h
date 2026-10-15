#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CLHIJOAKJCE;
namespace System { class Object; }

#define CLHIJOAKJCE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0F97C0)
#define CLHIJOAKJCE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0F97F0)
#define CLHIJOAKJCE___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E0F9800)

	class CLHIJOAKJCE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1D3B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLHIJOAKJCE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLHIJOAKJCE___C_CTOR_OFFSET))(this);
		}

		::CLHIJOAKJCE* __cctor_b__33_0()
		{
			return ((::CLHIJOAKJCE*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLHIJOAKJCE___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
