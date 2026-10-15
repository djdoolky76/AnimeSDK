#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OIIPJFDNPAH;
namespace System { class Object; }

#define OIIPJFDNPAH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE70A30)
#define OIIPJFDNPAH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE70A60)
#define OIIPJFDNPAH___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1DE70A70)

	class OIIPJFDNPAH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1CFA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OIIPJFDNPAH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIIPJFDNPAH___C_CTOR_OFFSET))(this);
		}

		::OIIPJFDNPAH* __cctor_b__33_0()
		{
			return ((::OIIPJFDNPAH*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIIPJFDNPAH___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
