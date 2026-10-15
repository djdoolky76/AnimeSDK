#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LPHCHEJEMPD;
namespace System { class Object; }

#define LPHCHEJEMPD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9CDF50)
#define LPHCHEJEMPD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9CDF90)
#define LPHCHEJEMPD___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E9CDFA0)

	class LPHCHEJEMPD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x41CF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LPHCHEJEMPD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPHCHEJEMPD___C_CTOR_OFFSET))(this);
		}

		::LPHCHEJEMPD* __cctor_b__38_0()
		{
			return ((::LPHCHEJEMPD*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPHCHEJEMPD___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
