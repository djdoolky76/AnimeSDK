#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GIJKCHKMPJG;
namespace System { class Object; }

#define GIJKCHKMPJG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E49C630)
#define GIJKCHKMPJG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E49C670)
#define GIJKCHKMPJG___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E49C680)

	class GIJKCHKMPJG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1A130);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GIJKCHKMPJG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIJKCHKMPJG___C_CTOR_OFFSET))(this);
		}

		::GIJKCHKMPJG* __cctor_b__28_0()
		{
			return ((::GIJKCHKMPJG*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIJKCHKMPJG___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
