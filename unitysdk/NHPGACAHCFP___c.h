#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NHPGACAHCFP;
namespace System { class Object; }

#define NHPGACAHCFP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB24360)
#define NHPGACAHCFP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB24390)
#define NHPGACAHCFP___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1EB243A0)

	class NHPGACAHCFP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x60960);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NHPGACAHCFP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHPGACAHCFP___C_CTOR_OFFSET))(this);
		}

		::NHPGACAHCFP* __cctor_b__18_0()
		{
			return ((::NHPGACAHCFP*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHPGACAHCFP___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
