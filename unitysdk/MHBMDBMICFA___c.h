#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MHBMDBMICFA;
namespace System { class Object; }

#define MHBMDBMICFA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA2C8F0)
#define MHBMDBMICFA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA2C930)
#define MHBMDBMICFA___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1EA2C940)

	class MHBMDBMICFA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x505A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MHBMDBMICFA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHBMDBMICFA___C_CTOR_OFFSET))(this);
		}

		::MHBMDBMICFA* __cctor_b__33_0()
		{
			return ((::MHBMDBMICFA*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHBMDBMICFA___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
