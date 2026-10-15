#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IPFOBFKCDGH;
namespace System { class Object; }

#define IPFOBFKCDGH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6DF8C0)
#define IPFOBFKCDGH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6DF900)
#define IPFOBFKCDGH___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E6DF910)

	class IPFOBFKCDGH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5AE80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IPFOBFKCDGH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPFOBFKCDGH___C_CTOR_OFFSET))(this);
		}

		::IPFOBFKCDGH* __cctor_b__28_0()
		{
			return ((::IPFOBFKCDGH*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPFOBFKCDGH___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
