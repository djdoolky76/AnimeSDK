#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GOKHEKCHLEL;
namespace System { class Object; }

#define GOKHEKCHLEL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4F0C30)
#define GOKHEKCHLEL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4F0C70)
#define GOKHEKCHLEL___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E4F0C80)

	class GOKHEKCHLEL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2B310);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOKHEKCHLEL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOKHEKCHLEL___C_CTOR_OFFSET))(this);
		}

		::GOKHEKCHLEL* __cctor_b__28_0()
		{
			return ((::GOKHEKCHLEL*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOKHEKCHLEL___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
