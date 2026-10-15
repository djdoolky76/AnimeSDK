#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GNLACIGLJJN;
namespace System { class Object; }

#define GNLACIGLJJN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4E42A0)
#define GNLACIGLJJN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4E42D0)
#define GNLACIGLJJN___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E4E42E0)

	class GNLACIGLJJN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x23A00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GNLACIGLJJN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNLACIGLJJN___C_CTOR_OFFSET))(this);
		}

		::GNLACIGLJJN* __cctor_b__23_0()
		{
			return ((::GNLACIGLJJN*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNLACIGLJJN___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
