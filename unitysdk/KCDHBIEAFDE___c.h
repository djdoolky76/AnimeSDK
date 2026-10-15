#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KCDHBIEAFDE;
namespace System { class Object; }

#define KCDHBIEAFDE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7F4400)
#define KCDHBIEAFDE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7F4440)
#define KCDHBIEAFDE___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E7F4450)

	class KCDHBIEAFDE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xF910);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KCDHBIEAFDE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCDHBIEAFDE___C_CTOR_OFFSET))(this);
		}

		::KCDHBIEAFDE* __cctor_b__38_0()
		{
			return ((::KCDHBIEAFDE*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCDHBIEAFDE___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
