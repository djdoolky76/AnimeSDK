#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LGGIDOJJDCN;
namespace System { class Object; }

#define LGGIDOJJDCN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E953440)
#define LGGIDOJJDCN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E953480)
#define LGGIDOJJDCN___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E953490)

	class LGGIDOJJDCN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3EF30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LGGIDOJJDCN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGGIDOJJDCN___C_CTOR_OFFSET))(this);
		}

		::LGGIDOJJDCN* __cctor_b__33_0()
		{
			return ((::LGGIDOJJDCN*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGGIDOJJDCN___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
