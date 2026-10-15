#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KNKGKMFEHLB;
namespace System { class Object; }

#define KNKGKMFEHLB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8A61C0)
#define KNKGKMFEHLB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8A6200)
#define KNKGKMFEHLB___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E8A6210)

	class KNKGKMFEHLB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x247D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KNKGKMFEHLB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNKGKMFEHLB___C_CTOR_OFFSET))(this);
		}

		::KNKGKMFEHLB* __cctor_b__28_0()
		{
			return ((::KNKGKMFEHLB*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNKGKMFEHLB___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
