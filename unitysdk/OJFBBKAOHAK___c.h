#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OJFBBKAOHAK;
namespace System { class Object; }

#define OJFBBKAOHAK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE815B0)
#define OJFBBKAOHAK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE815F0)
#define OJFBBKAOHAK___C___CCTOR_B__47_0_OFFSET UNITYSDK_OFFSET(0x1DE81600)

	class OJFBBKAOHAK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1ED80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OJFBBKAOHAK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJFBBKAOHAK___C_CTOR_OFFSET))(this);
		}

		::OJFBBKAOHAK* __cctor_b__47_0()
		{
			return ((::OJFBBKAOHAK*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJFBBKAOHAK___C___CCTOR_B__47_0_OFFSET))(this);
		}

	};
