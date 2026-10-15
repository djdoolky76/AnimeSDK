#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HGMJFBCFJFN;
namespace System { class Object; }

#define HGMJFBCFJFN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E582010)
#define HGMJFBCFJFN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E582050)
#define HGMJFBCFJFN___C___CCTOR_B__72_0_OFFSET UNITYSDK_OFFSET(0x1E582060)

	class HGMJFBCFJFN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x38310);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HGMJFBCFJFN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGMJFBCFJFN___C_CTOR_OFFSET))(this);
		}

		::HGMJFBCFJFN* __cctor_b__72_0()
		{
			return ((::HGMJFBCFJFN*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGMJFBCFJFN___C___CCTOR_B__72_0_OFFSET))(this);
		}

	};
