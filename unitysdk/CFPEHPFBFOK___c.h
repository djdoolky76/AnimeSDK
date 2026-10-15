#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CFPEHPFBFOK;
namespace System { class Object; }

#define CFPEHPFBFOK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0A90E0)
#define CFPEHPFBFOK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0A9120)
#define CFPEHPFBFOK___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E0A9130)

	class CFPEHPFBFOK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x13800);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CFPEHPFBFOK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFPEHPFBFOK___C_CTOR_OFFSET))(this);
		}

		::CFPEHPFBFOK* __cctor_b__38_0()
		{
			return ((::CFPEHPFBFOK*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFPEHPFBFOK___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
