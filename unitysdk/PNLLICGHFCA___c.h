#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PNLLICGHFCA;
namespace System { class Object; }

#define PNLLICGHFCA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFBE440)
#define PNLLICGHFCA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFBE480)
#define PNLLICGHFCA___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1DFBE490)

	class PNLLICGHFCA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x51D70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PNLLICGHFCA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNLLICGHFCA___C_CTOR_OFFSET))(this);
		}

		::PNLLICGHFCA* __cctor_b__33_0()
		{
			return ((::PNLLICGHFCA*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNLLICGHFCA___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
