#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DFEAHIKPKLO;
namespace System { class Object; }

#define DFEAHIKPKLO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E19F480)
#define DFEAHIKPKLO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E19F4C0)
#define DFEAHIKPKLO___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E19F4D0)

	class DFEAHIKPKLO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x324F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DFEAHIKPKLO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFEAHIKPKLO___C_CTOR_OFFSET))(this);
		}

		::DFEAHIKPKLO* __cctor_b__28_0()
		{
			return ((::DFEAHIKPKLO*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFEAHIKPKLO___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
