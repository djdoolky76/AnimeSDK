#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KAFLJMENFBA;
namespace System { class Object; }

#define KAFLJMENFBA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7DE2D0)
#define KAFLJMENFBA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7DE310)
#define KAFLJMENFBA___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E7DE320)

	class KAFLJMENFBA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xD740);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KAFLJMENFBA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAFLJMENFBA___C_CTOR_OFFSET))(this);
		}

		::KAFLJMENFBA* __cctor_b__23_0()
		{
			return ((::KAFLJMENFBA*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAFLJMENFBA___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
