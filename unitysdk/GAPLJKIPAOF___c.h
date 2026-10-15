#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GAPLJKIPAOF;
namespace System { class Object; }

#define GAPLJKIPAOF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E426B60)
#define GAPLJKIPAOF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E426B90)
#define GAPLJKIPAOF___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E426BA0)

	class GAPLJKIPAOF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xC8E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GAPLJKIPAOF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAPLJKIPAOF___C_CTOR_OFFSET))(this);
		}

		::GAPLJKIPAOF* __cctor_b__38_0()
		{
			return ((::GAPLJKIPAOF*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAPLJKIPAOF___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
