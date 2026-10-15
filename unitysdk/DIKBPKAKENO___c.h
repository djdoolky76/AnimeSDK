#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DIKBPKAKENO;
namespace System { class Object; }

#define DIKBPKAKENO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1C1BC0)
#define DIKBPKAKENO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1C1BF0)
#define DIKBPKAKENO___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E1C1C00)

	class DIKBPKAKENO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x36830);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DIKBPKAKENO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIKBPKAKENO___C_CTOR_OFFSET))(this);
		}

		::DIKBPKAKENO* __cctor_b__28_0()
		{
			return ((::DIKBPKAKENO*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIKBPKAKENO___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
