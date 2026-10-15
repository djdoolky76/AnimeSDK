#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ABGMGHNOONM;
namespace System { class Object; }

#define ABGMGHNOONM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDCC660)
#define ABGMGHNOONM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDCC6A0)
#define ABGMGHNOONM___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1DDCC6B0)

	class ABGMGHNOONM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x394E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ABGMGHNOONM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABGMGHNOONM___C_CTOR_OFFSET))(this);
		}

		::ABGMGHNOONM* __cctor_b__18_0()
		{
			return ((::ABGMGHNOONM*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABGMGHNOONM___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
