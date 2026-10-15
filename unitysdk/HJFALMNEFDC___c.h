#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HJFALMNEFDC;
namespace System { class Object; }

#define HJFALMNEFDC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5A75E0)
#define HJFALMNEFDC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5A7620)
#define HJFALMNEFDC___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E5A7630)

	class HJFALMNEFDC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3FBE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HJFALMNEFDC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJFALMNEFDC___C_CTOR_OFFSET))(this);
		}

		::HJFALMNEFDC* __cctor_b__18_0()
		{
			return ((::HJFALMNEFDC*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJFALMNEFDC___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
