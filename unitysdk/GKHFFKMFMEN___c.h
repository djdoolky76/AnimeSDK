#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GKHFFKMFMEN;
namespace System { class Object; }

#define GKHFFKMFMEN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4B3A60)
#define GKHFFKMFMEN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4B3A90)
#define GKHFFKMFMEN___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E4B3AA0)

	class GKHFFKMFMEN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1D480);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GKHFFKMFMEN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKHFFKMFMEN___C_CTOR_OFFSET))(this);
		}

		::GKHFFKMFMEN* __cctor_b__28_0()
		{
			return ((::GKHFFKMFMEN*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKHFFKMFMEN___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
