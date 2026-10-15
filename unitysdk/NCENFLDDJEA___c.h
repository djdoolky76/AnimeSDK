#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NCENFLDDJEA;
namespace System { class Object; }

#define NCENFLDDJEA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAD9080)
#define NCENFLDDJEA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAD90C0)
#define NCENFLDDJEA___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EAD90D0)

	class NCENFLDDJEA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5D150);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NCENFLDDJEA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCENFLDDJEA___C_CTOR_OFFSET))(this);
		}

		::NCENFLDDJEA* __cctor_b__28_0()
		{
			return ((::NCENFLDDJEA*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCENFLDDJEA___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
