#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ABKIKDIGKHG;
namespace System { class Object; }

#define ABKIKDIGKHG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDCDF20)
#define ABKIKDIGKHG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDCDF60)
#define ABKIKDIGKHG___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1DDCDF70)

	class ABKIKDIGKHG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x39A90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ABKIKDIGKHG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABKIKDIGKHG___C_CTOR_OFFSET))(this);
		}

		::ABKIKDIGKHG* __cctor_b__18_0()
		{
			return ((::ABKIKDIGKHG*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABKIKDIGKHG___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
