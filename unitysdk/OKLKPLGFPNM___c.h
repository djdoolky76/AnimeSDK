#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OKLKPLGFPNM;
namespace System { class Object; }

#define OKLKPLGFPNM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE9F3B0)
#define OKLKPLGFPNM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE9F3F0)
#define OKLKPLGFPNM___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DE9F400)

	class OKLKPLGFPNM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x22FB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OKLKPLGFPNM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKLKPLGFPNM___C_CTOR_OFFSET))(this);
		}

		::OKLKPLGFPNM* __cctor_b__23_0()
		{
			return ((::OKLKPLGFPNM*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKLKPLGFPNM___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
