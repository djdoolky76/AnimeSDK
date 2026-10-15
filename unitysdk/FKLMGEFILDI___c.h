#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FKLMGEFILDI;
namespace System { class Object; }

#define FKLMGEFILDI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3B1AE0)
#define FKLMGEFILDI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3B1B20)
#define FKLMGEFILDI___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E3B1B30)

	class FKLMGEFILDI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x63E30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FKLMGEFILDI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKLMGEFILDI___C_CTOR_OFFSET))(this);
		}

		::FKLMGEFILDI* __cctor_b__23_0()
		{
			return ((::FKLMGEFILDI*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKLMGEFILDI___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
