#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FLCJMPNDMMH;
namespace System { class Object; }

#define FLCJMPNDMMH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3B66D0)
#define FLCJMPNDMMH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3B6710)
#define FLCJMPNDMMH___C___CCTOR_B__68_0_OFFSET UNITYSDK_OFFSET(0x1E3B6720)

	class FLCJMPNDMMH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x641C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLCJMPNDMMH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLCJMPNDMMH___C_CTOR_OFFSET))(this);
		}

		::FLCJMPNDMMH* __cctor_b__68_0()
		{
			return ((::FLCJMPNDMMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLCJMPNDMMH___C___CCTOR_B__68_0_OFFSET))(this);
		}

	};
