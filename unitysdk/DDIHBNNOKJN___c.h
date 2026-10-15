#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DDIHBNNOKJN;
namespace System { class Object; }

#define DDIHBNNOKJN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E17FB80)
#define DDIHBNNOKJN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E17FBC0)
#define DDIHBNNOKJN___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E17FBD0)

	class DDIHBNNOKJN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2DE60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DDIHBNNOKJN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDIHBNNOKJN___C_CTOR_OFFSET))(this);
		}

		::DDIHBNNOKJN* __cctor_b__23_0()
		{
			return ((::DDIHBNNOKJN*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDIHBNNOKJN___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
