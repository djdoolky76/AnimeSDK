#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JPGKBLDLADF;
namespace System { class Object; }

#define JPGKBLDLADF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7D4740)
#define JPGKBLDLADF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7D4780)
#define JPGKBLDLADF___C___CCTOR_B__36_0_OFFSET UNITYSDK_OFFSET(0x1E7D4790)

	class JPGKBLDLADF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xB200);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JPGKBLDLADF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPGKBLDLADF___C_CTOR_OFFSET))(this);
		}

		::JPGKBLDLADF* __cctor_b__36_0()
		{
			return ((::JPGKBLDLADF*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPGKBLDLADF___C___CCTOR_B__36_0_OFFSET))(this);
		}

	};
