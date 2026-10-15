#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CEFEIJFPCKE;
namespace System { class Object; }

#define CEFEIJFPCKE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E092970)
#define CEFEIJFPCKE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0929B0)
#define CEFEIJFPCKE___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E0929C0)

	class CEFEIJFPCKE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x108A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CEFEIJFPCKE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEFEIJFPCKE___C_CTOR_OFFSET))(this);
		}

		::CEFEIJFPCKE* __cctor_b__28_0()
		{
			return ((::CEFEIJFPCKE*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEFEIJFPCKE___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
