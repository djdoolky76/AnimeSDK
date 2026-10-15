#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IOIJDHEMDLK;
namespace System { class Object; }

#define IOIJDHEMDLK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6D6FB0)
#define IOIJDHEMDLK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6D6FF0)
#define IOIJDHEMDLK___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E6D7000)

	class IOIJDHEMDLK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x59E20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IOIJDHEMDLK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOIJDHEMDLK___C_CTOR_OFFSET))(this);
		}

		::IOIJDHEMDLK* __cctor_b__38_0()
		{
			return ((::IOIJDHEMDLK*(*)(::PVOID))((::PBYTE)hIl2Cpp + IOIJDHEMDLK___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
