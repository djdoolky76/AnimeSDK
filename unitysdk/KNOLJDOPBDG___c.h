#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KNOLJDOPBDG;
namespace System { class Object; }

#define KNOLJDOPBDG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8A9860)
#define KNOLJDOPBDG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8A98A0)
#define KNOLJDOPBDG___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E8A98B0)

	class KNOLJDOPBDG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x24EE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KNOLJDOPBDG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNOLJDOPBDG___C_CTOR_OFFSET))(this);
		}

		::KNOLJDOPBDG* __cctor_b__33_0()
		{
			return ((::KNOLJDOPBDG*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNOLJDOPBDG___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
