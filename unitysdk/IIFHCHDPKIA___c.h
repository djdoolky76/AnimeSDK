#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IIFHCHDPKIA;
namespace System { class Object; }

#define IIFHCHDPKIA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E689110)
#define IIFHCHDPKIA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E689150)
#define IIFHCHDPKIA___C___CCTOR_B__61_0_OFFSET UNITYSDK_OFFSET(0x1E689160)

	class IIFHCHDPKIA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x50650);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IIFHCHDPKIA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIFHCHDPKIA___C_CTOR_OFFSET))(this);
		}

		::IIFHCHDPKIA* __cctor_b__61_0()
		{
			return ((::IIFHCHDPKIA*(*)(::PVOID))((::PBYTE)hIl2Cpp + IIFHCHDPKIA___C___CCTOR_B__61_0_OFFSET))(this);
		}

	};
