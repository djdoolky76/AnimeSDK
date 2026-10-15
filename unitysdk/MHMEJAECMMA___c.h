#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MHMEJAECMMA;
namespace System { class Object; }

#define MHMEJAECMMA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA36290)
#define MHMEJAECMMA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA362C0)
#define MHMEJAECMMA___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EA362D0)

	class MHMEJAECMMA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x522F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MHMEJAECMMA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHMEJAECMMA___C_CTOR_OFFSET))(this);
		}

		::MHMEJAECMMA* __cctor_b__28_0()
		{
			return ((::MHMEJAECMMA*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHMEJAECMMA___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
