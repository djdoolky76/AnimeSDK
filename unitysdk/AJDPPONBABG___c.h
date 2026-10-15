#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AJDPPONBABG;
namespace System { class Object; }

#define AJDPPONBABG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3C06B0)
#define AJDPPONBABG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3C06F0)
#define AJDPPONBABG___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E3C0700)

	class AJDPPONBABG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x34E40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AJDPPONBABG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJDPPONBABG___C_CTOR_OFFSET))(this);
		}

		::AJDPPONBABG* __cctor_b__23_0()
		{
			return ((::AJDPPONBABG*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJDPPONBABG___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
