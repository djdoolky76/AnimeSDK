#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CNOFLEBNGAC;
namespace System { class Object; }

#define CNOFLEBNGAC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E130280)
#define CNOFLEBNGAC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1302B0)
#define CNOFLEBNGAC___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E1302C0)

	class CNOFLEBNGAC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x20DB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CNOFLEBNGAC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNOFLEBNGAC___C_CTOR_OFFSET))(this);
		}

		::CNOFLEBNGAC* __cctor_b__28_0()
		{
			return ((::CNOFLEBNGAC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNOFLEBNGAC___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
