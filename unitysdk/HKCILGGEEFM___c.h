#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HKCILGGEEFM;
namespace System { class Object; }

#define HKCILGGEEFM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5AECB0)
#define HKCILGGEEFM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5AECF0)
#define HKCILGGEEFM___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E5AED00)

	class HKCILGGEEFM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x448D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HKCILGGEEFM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKCILGGEEFM___C_CTOR_OFFSET))(this);
		}

		::HKCILGGEEFM* __cctor_b__38_0()
		{
			return ((::HKCILGGEEFM*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKCILGGEEFM___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
