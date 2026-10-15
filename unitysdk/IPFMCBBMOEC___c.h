#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IPFMCBBMOEC;
namespace System { class Object; }

#define IPFMCBBMOEC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6DECE0)
#define IPFMCBBMOEC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6DED10)
#define IPFMCBBMOEC___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E6DED20)

	class IPFMCBBMOEC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5AB50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IPFMCBBMOEC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPFMCBBMOEC___C_CTOR_OFFSET))(this);
		}

		::IPFMCBBMOEC* __cctor_b__18_0()
		{
			return ((::IPFMCBBMOEC*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPFMCBBMOEC___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
