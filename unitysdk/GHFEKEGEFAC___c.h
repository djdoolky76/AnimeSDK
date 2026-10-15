#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GHFEKEGEFAC;
namespace System { class Object; }

#define GHFEKEGEFAC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E488050)
#define GHFEKEGEFAC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E488090)
#define GHFEKEGEFAC___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E4880A0)

	class GHFEKEGEFAC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x16E70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GHFEKEGEFAC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHFEKEGEFAC___C_CTOR_OFFSET))(this);
		}

		::GHFEKEGEFAC* __cctor_b__28_0()
		{
			return ((::GHFEKEGEFAC*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHFEKEGEFAC___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
