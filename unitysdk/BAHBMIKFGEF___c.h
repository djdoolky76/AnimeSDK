#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BAHBMIKFGEF;
namespace System { class Object; }

#define BAHBMIKFGEF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7B6C90)
#define BAHBMIKFGEF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7B6CC0)
#define BAHBMIKFGEF___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E7B6CD0)

	class BAHBMIKFGEF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x456D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BAHBMIKFGEF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAHBMIKFGEF___C_CTOR_OFFSET))(this);
		}

		::BAHBMIKFGEF* __cctor_b__33_0()
		{
			return ((::BAHBMIKFGEF*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAHBMIKFGEF___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
