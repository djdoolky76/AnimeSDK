#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LIOGDHEFOGD;
namespace System { class Object; }

#define LIOGDHEFOGD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E972CA0)
#define LIOGDHEFOGD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E972CE0)
#define LIOGDHEFOGD___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E972CF0)

	class LIOGDHEFOGD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x45EC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LIOGDHEFOGD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIOGDHEFOGD___C_CTOR_OFFSET))(this);
		}

		::LIOGDHEFOGD* __cctor_b__18_0()
		{
			return ((::LIOGDHEFOGD*(*)(::PVOID))((::PBYTE)hIl2Cpp + LIOGDHEFOGD___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
