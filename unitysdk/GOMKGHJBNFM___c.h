#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GOMKGHJBNFM;
namespace System { class Object; }

#define GOMKGHJBNFM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4F3090)
#define GOMKGHJBNFM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4F30C0)
#define GOMKGHJBNFM___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E4F30D0)

	class GOMKGHJBNFM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2B4E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOMKGHJBNFM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOMKGHJBNFM___C_CTOR_OFFSET))(this);
		}

		::GOMKGHJBNFM* __cctor_b__28_0()
		{
			return ((::GOMKGHJBNFM*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOMKGHJBNFM___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
