#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CGBKDLHENKL;
namespace System { class Object; }

#define CGBKDLHENKL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0AAE20)
#define CGBKDLHENKL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0AAE50)
#define CGBKDLHENKL___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E0AAE60)

	class CGBKDLHENKL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x13A60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CGBKDLHENKL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGBKDLHENKL___C_CTOR_OFFSET))(this);
		}

		::CGBKDLHENKL* __cctor_b__28_0()
		{
			return ((::CGBKDLHENKL*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGBKDLHENKL___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
