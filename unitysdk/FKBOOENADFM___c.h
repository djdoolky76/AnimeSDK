#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FKBOOENADFM;
namespace System { class Object; }

#define FKBOOENADFM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3AB1A0)
#define FKBOOENADFM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3AB1D0)
#define FKBOOENADFM___C___CCTOR_B__44_0_OFFSET UNITYSDK_OFFSET(0x1E3AB1E0)

	class FKBOOENADFM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x61030);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FKBOOENADFM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKBOOENADFM___C_CTOR_OFFSET))(this);
		}

		::FKBOOENADFM* __cctor_b__44_0()
		{
			return ((::FKBOOENADFM*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKBOOENADFM___C___CCTOR_B__44_0_OFFSET))(this);
		}

	};
