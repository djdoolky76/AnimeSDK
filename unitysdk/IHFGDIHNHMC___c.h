#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IHFGDIHNHMC;
namespace System { class Object; }

#define IHFGDIHNHMC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E65C550)
#define IHFGDIHNHMC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E65C580)
#define IHFGDIHNHMC___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1E65C590)

	class IHFGDIHNHMC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4CFA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IHFGDIHNHMC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHFGDIHNHMC___C_CTOR_OFFSET))(this);
		}

		::IHFGDIHNHMC* __cctor_b__48_0()
		{
			return ((::IHFGDIHNHMC*(*)(::PVOID))((::PBYTE)hIl2Cpp + IHFGDIHNHMC___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
