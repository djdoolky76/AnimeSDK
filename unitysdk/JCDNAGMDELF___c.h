#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JCDNAGMDELF;
namespace System { class Object; }

#define JCDNAGMDELF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6FF4D0)
#define JCDNAGMDELF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6FF500)
#define JCDNAGMDELF___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E6FF510)

	class JCDNAGMDELF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5D660);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JCDNAGMDELF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCDNAGMDELF___C_CTOR_OFFSET))(this);
		}

		::JCDNAGMDELF* __cctor_b__33_0()
		{
			return ((::JCDNAGMDELF*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCDNAGMDELF___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
