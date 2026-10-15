#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HJFCEEBAGMF;
namespace System { class Object; }

#define HJFCEEBAGMF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5A8F30)
#define HJFCEEBAGMF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5A8F70)
#define HJFCEEBAGMF___C___CCTOR_B__73_0_OFFSET UNITYSDK_OFFSET(0x1E5A8F80)

	class HJFCEEBAGMF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x40210);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HJFCEEBAGMF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJFCEEBAGMF___C_CTOR_OFFSET))(this);
		}

		::HJFCEEBAGMF* __cctor_b__73_0()
		{
			return ((::HJFCEEBAGMF*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJFCEEBAGMF___C___CCTOR_B__73_0_OFFSET))(this);
		}

	};
