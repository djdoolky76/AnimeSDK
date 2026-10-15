#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EJDPLLIJDNK;
namespace System { class Object; }

#define EJDPLLIJDNK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2B23B0)
#define EJDPLLIJDNK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2B23F0)
#define EJDPLLIJDNK___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E2B2400)

	class EJDPLLIJDNK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4B100);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EJDPLLIJDNK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJDPLLIJDNK___C_CTOR_OFFSET))(this);
		}

		::EJDPLLIJDNK* __cctor_b__23_0()
		{
			return ((::EJDPLLIJDNK*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJDPLLIJDNK___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
