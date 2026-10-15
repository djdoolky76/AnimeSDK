#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NMACHAFCGNI;
namespace System { class Object; }

#define NMACHAFCGNI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB6A9B0)
#define NMACHAFCGNI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB6A9F0)
#define NMACHAFCGNI___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1EB6AA00)

	class NMACHAFCGNI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6BCD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NMACHAFCGNI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMACHAFCGNI___C_CTOR_OFFSET))(this);
		}

		::NMACHAFCGNI* __cctor_b__38_0()
		{
			return ((::NMACHAFCGNI*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMACHAFCGNI___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
