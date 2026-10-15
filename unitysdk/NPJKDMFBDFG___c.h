#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace EnviromentSystemV2Space { class EnvProfileV2; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Tuple; }

#define NPJKDMFBDFG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xBD0BB80)
#define NPJKDMFBDFG___C_CTOR_OFFSET UNITYSDK_OFFSET(0xBD0BBB0)
#define NPJKDMFBDFG___C__INIT_B__40_0_OFFSET UNITYSDK_OFFSET(0xBD0BBC0)

	class NPJKDMFBDFG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x59100);
		}

		static ::System::Object** StaticGet___9__40_0()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x59108);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPJKDMFBDFG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPJKDMFBDFG___C_CTOR_OFFSET))(this);
		}

		::System::Void _Init_b__40_0(::System::Tuple* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Tuple*))((::PBYTE)hIl2Cpp + NPJKDMFBDFG___C__INIT_B__40_0_OFFSET))(this, a1);
		}

	};
