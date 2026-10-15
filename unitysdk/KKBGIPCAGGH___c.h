#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KKBGIPCAGGH;
namespace System { class Object; }

#define KKBGIPCAGGH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8760E0)
#define KKBGIPCAGGH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E876120)
#define KKBGIPCAGGH___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1E876130)

	class KKBGIPCAGGH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1DC10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KKBGIPCAGGH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKBGIPCAGGH___C_CTOR_OFFSET))(this);
		}

		::KKBGIPCAGGH* __cctor_b__43_0()
		{
			return ((::KKBGIPCAGGH*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKBGIPCAGGH___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
