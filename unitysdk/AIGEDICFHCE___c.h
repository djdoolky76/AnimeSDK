#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AIGEDICFHCE;
namespace System { class Object; }

#define AIGEDICFHCE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E27B620)
#define AIGEDICFHCE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E27B660)
#define AIGEDICFHCE___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E27B670)

	class AIGEDICFHCE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x32D10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AIGEDICFHCE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIGEDICFHCE___C_CTOR_OFFSET))(this);
		}

		::AIGEDICFHCE* __cctor_b__28_0()
		{
			return ((::AIGEDICFHCE*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIGEDICFHCE___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
