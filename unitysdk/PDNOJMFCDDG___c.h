#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PDNOJMFCDDG;
namespace System { class Object; }

#define PDNOJMFCDDG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF13FB0)
#define PDNOJMFCDDG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF13FF0)
#define PDNOJMFCDDG___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DF14000)

	class PDNOJMFCDDG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x381B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PDNOJMFCDDG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDNOJMFCDDG___C_CTOR_OFFSET))(this);
		}

		::PDNOJMFCDDG* __cctor_b__28_0()
		{
			return ((::PDNOJMFCDDG*(*)(::PVOID))((::PBYTE)hIl2Cpp + PDNOJMFCDDG___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
