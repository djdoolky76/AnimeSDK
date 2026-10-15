#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DIMGBMHNGAH;
namespace System { class Object; }

#define DIMGBMHNGAH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1C2770)
#define DIMGBMHNGAH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1C27B0)
#define DIMGBMHNGAH___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E1C27C0)

	class DIMGBMHNGAH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x36A80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DIMGBMHNGAH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIMGBMHNGAH___C_CTOR_OFFSET))(this);
		}

		::DIMGBMHNGAH* __cctor_b__38_0()
		{
			return ((::DIMGBMHNGAH*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIMGBMHNGAH___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
