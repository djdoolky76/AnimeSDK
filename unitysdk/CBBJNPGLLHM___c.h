#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CBBJNPGLLHM;
namespace System { class Object; }

#define CBBJNPGLLHM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E062050)
#define CBBJNPGLLHM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E062090)
#define CBBJNPGLLHM___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E0620A0)

	class CBBJNPGLLHM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xB180);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CBBJNPGLLHM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBBJNPGLLHM___C_CTOR_OFFSET))(this);
		}

		::CBBJNPGLLHM* __cctor_b__28_0()
		{
			return ((::CBBJNPGLLHM*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBBJNPGLLHM___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
