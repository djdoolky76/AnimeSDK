#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AMEEHIIPMFP;
namespace System { class Object; }

#define AMEEHIIPMFP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E51C970)
#define AMEEHIIPMFP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E51C9A0)
#define AMEEHIIPMFP___C___CCTOR_B__58_0_OFFSET UNITYSDK_OFFSET(0x1E51C9B0)

	class AMEEHIIPMFP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3B880);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AMEEHIIPMFP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMEEHIIPMFP___C_CTOR_OFFSET))(this);
		}

		::AMEEHIIPMFP* __cctor_b__58_0()
		{
			return ((::AMEEHIIPMFP*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMEEHIIPMFP___C___CCTOR_B__58_0_OFFSET))(this);
		}

	};
