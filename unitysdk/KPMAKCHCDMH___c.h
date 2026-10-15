#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KPMAKCHCDMH;
namespace System { class Object; }

#define KPMAKCHCDMH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8C0390)
#define KPMAKCHCDMH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8C03C0)
#define KPMAKCHCDMH___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E8C03D0)

	class KPMAKCHCDMH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2D2D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KPMAKCHCDMH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPMAKCHCDMH___C_CTOR_OFFSET))(this);
		}

		::KPMAKCHCDMH* __cctor_b__38_0()
		{
			return ((::KPMAKCHCDMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPMAKCHCDMH___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
