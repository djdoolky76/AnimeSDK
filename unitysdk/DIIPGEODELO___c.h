#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DIIPGEODELO;
namespace System { class Object; }

#define DIIPGEODELO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1BFCE0)
#define DIIPGEODELO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1BFD20)
#define DIIPGEODELO___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E1BFD30)

	class DIIPGEODELO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x365C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DIIPGEODELO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIIPGEODELO___C_CTOR_OFFSET))(this);
		}

		::DIIPGEODELO* __cctor_b__28_0()
		{
			return ((::DIIPGEODELO*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIIPGEODELO___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
