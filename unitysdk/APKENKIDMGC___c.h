#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class APKENKIDMGC;
namespace System { class Object; }

#define APKENKIDMGC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E678FA0)
#define APKENKIDMGC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E678FD0)
#define APKENKIDMGC___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E678FE0)

	class APKENKIDMGC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x42610);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + APKENKIDMGC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APKENKIDMGC___C_CTOR_OFFSET))(this);
		}

		::APKENKIDMGC* __cctor_b__28_0()
		{
			return ((::APKENKIDMGC*(*)(::PVOID))((::PBYTE)hIl2Cpp + APKENKIDMGC___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
