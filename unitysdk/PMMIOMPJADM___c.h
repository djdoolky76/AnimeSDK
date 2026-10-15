#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PMMIOMPJADM;
namespace System { class Object; }

#define PMMIOMPJADM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFAE2C0)
#define PMMIOMPJADM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFAE300)
#define PMMIOMPJADM___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DFAE310)

	class PMMIOMPJADM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4DE60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PMMIOMPJADM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMMIOMPJADM___C_CTOR_OFFSET))(this);
		}

		::PMMIOMPJADM* __cctor_b__23_0()
		{
			return ((::PMMIOMPJADM*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMMIOMPJADM___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
