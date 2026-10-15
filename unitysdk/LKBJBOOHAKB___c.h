#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LKBJBOOHAKB;
namespace System { class Object; }

#define LKBJBOOHAKB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E98C660)
#define LKBJBOOHAKB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E98C6A0)
#define LKBJBOOHAKB___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E98C6B0)

	class LKBJBOOHAKB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4A350);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LKBJBOOHAKB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKBJBOOHAKB___C_CTOR_OFFSET))(this);
		}

		::LKBJBOOHAKB* __cctor_b__38_0()
		{
			return ((::LKBJBOOHAKB*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKBJBOOHAKB___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
