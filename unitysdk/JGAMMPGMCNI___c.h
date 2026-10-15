#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JGAMMPGMCNI;
namespace System { class Object; }

#define JGAMMPGMCNI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E736190)
#define JGAMMPGMCNI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7361C0)
#define JGAMMPGMCNI___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E7361D0)

	class JGAMMPGMCNI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x60620);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JGAMMPGMCNI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGAMMPGMCNI___C_CTOR_OFFSET))(this);
		}

		::JGAMMPGMCNI* __cctor_b__33_0()
		{
			return ((::JGAMMPGMCNI*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGAMMPGMCNI___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
