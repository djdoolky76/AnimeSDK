#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GAEKHIDCFHF;
namespace System { class Object; }

#define GAEKHIDCFHF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E41B570)
#define GAEKHIDCFHF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E41B5B0)
#define GAEKHIDCFHF___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E41B5C0)

	class GAEKHIDCFHF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xAC00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GAEKHIDCFHF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAEKHIDCFHF___C_CTOR_OFFSET))(this);
		}

		::GAEKHIDCFHF* __cctor_b__38_0()
		{
			return ((::GAEKHIDCFHF*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAEKHIDCFHF___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
