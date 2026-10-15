#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AHNLMMFHOME;
namespace System { class Object; }

#define AHNLMMFHOME___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E276DC0)
#define AHNLMMFHOME___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E276E00)
#define AHNLMMFHOME___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E276E10)

	class AHNLMMFHOME___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x326C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AHNLMMFHOME___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHNLMMFHOME___C_CTOR_OFFSET))(this);
		}

		::AHNLMMFHOME* __cctor_b__23_0()
		{
			return ((::AHNLMMFHOME*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHNLMMFHOME___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
