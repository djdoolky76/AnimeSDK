#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PLADCLDJGKK;
namespace System { class Object; }

#define PLADCLDJGKK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF9BAC0)
#define PLADCLDJGKK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF9BB00)
#define PLADCLDJGKK___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DF9BB10)

	class PLADCLDJGKK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4B300);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PLADCLDJGKK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLADCLDJGKK___C_CTOR_OFFSET))(this);
		}

		::PLADCLDJGKK* __cctor_b__28_0()
		{
			return ((::PLADCLDJGKK*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLADCLDJGKK___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
