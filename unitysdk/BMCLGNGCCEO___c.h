#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BMCLGNGCCEO;
namespace System { class Object; }

#define BMCLGNGCCEO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E020700)
#define BMCLGNGCCEO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E020740)
#define BMCLGNGCCEO___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E020750)

	class BMCLGNGCCEO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4FC00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BMCLGNGCCEO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMCLGNGCCEO___C_CTOR_OFFSET))(this);
		}

		::BMCLGNGCCEO* __cctor_b__23_0()
		{
			return ((::BMCLGNGCCEO*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMCLGNGCCEO___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
