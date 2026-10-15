#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LCGFKNIAMBE;
namespace System { class Object; }

#define LCGFKNIAMBE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8ED520)
#define LCGFKNIAMBE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8ED560)
#define LCGFKNIAMBE___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1E8ED570)

	class LCGFKNIAMBE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x32D40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LCGFKNIAMBE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCGFKNIAMBE___C_CTOR_OFFSET))(this);
		}

		::LCGFKNIAMBE* __cctor_b__43_0()
		{
			return ((::LCGFKNIAMBE*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCGFKNIAMBE___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
