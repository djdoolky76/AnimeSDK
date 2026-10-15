#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KDPGIMOOLON;
namespace System { class Object; }

#define KDPGIMOOLON___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8085A0)
#define KDPGIMOOLON___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8085E0)
#define KDPGIMOOLON___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1E8085F0)

	class KDPGIMOOLON___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x117A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KDPGIMOOLON___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDPGIMOOLON___C_CTOR_OFFSET))(this);
		}

		::KDPGIMOOLON* __cctor_b__43_0()
		{
			return ((::KDPGIMOOLON*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDPGIMOOLON___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
