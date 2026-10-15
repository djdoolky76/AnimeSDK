#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KAJLLLAAKOG;
namespace System { class Object; }

#define KAJLLLAAKOG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7E6C80)
#define KAJLLLAAKOG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7E6CC0)
#define KAJLLLAAKOG___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E7E6CD0)

	class KAJLLLAAKOG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xE280);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KAJLLLAAKOG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAJLLLAAKOG___C_CTOR_OFFSET))(this);
		}

		::KAJLLLAAKOG* __cctor_b__28_0()
		{
			return ((::KAJLLLAAKOG*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAJLLLAAKOG___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
