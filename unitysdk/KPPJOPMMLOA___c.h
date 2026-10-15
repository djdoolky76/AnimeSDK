#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KPPJOPMMLOA;
namespace System { class Object; }

#define KPPJOPMMLOA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8C3EA0)
#define KPPJOPMMLOA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8C3EE0)
#define KPPJOPMMLOA___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E8C3EF0)

	class KPPJOPMMLOA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2D9D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KPPJOPMMLOA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPPJOPMMLOA___C_CTOR_OFFSET))(this);
		}

		::KPPJOPMMLOA* __cctor_b__23_0()
		{
			return ((::KPPJOPMMLOA*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPPJOPMMLOA___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
