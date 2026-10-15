#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GAKJMHLEJMD;
namespace System { class Object; }

#define GAKJMHLEJMD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E420F80)
#define GAKJMHLEJMD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E420FC0)
#define GAKJMHLEJMD___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E420FD0)

	class GAKJMHLEJMD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xBE70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GAKJMHLEJMD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAKJMHLEJMD___C_CTOR_OFFSET))(this);
		}

		::GAKJMHLEJMD* __cctor_b__23_0()
		{
			return ((::GAKJMHLEJMD*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAKJMHLEJMD___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
