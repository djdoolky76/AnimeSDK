#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IKHLECEJHPO;
namespace System { class Object; }

#define IKHLECEJHPO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6A1880)
#define IKHLECEJHPO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6A18B0)
#define IKHLECEJHPO___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E6A18C0)

	class IKHLECEJHPO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x555D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IKHLECEJHPO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKHLECEJHPO___C_CTOR_OFFSET))(this);
		}

		::IKHLECEJHPO* __cctor_b__28_0()
		{
			return ((::IKHLECEJHPO*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKHLECEJHPO___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
