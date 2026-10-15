#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KJAMNOGFAMJ;
namespace System { class Object; }

#define KJAMNOGFAMJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E867F10)
#define KJAMNOGFAMJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E867F40)
#define KJAMNOGFAMJ___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E867F50)

	class KJAMNOGFAMJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1BD80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KJAMNOGFAMJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJAMNOGFAMJ___C_CTOR_OFFSET))(this);
		}

		::KJAMNOGFAMJ* __cctor_b__28_0()
		{
			return ((::KJAMNOGFAMJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJAMNOGFAMJ___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
