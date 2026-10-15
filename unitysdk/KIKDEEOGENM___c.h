#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KIKDEEOGENM;
namespace System { class Object; }

#define KIKDEEOGENM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E85F130)
#define KIKDEEOGENM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E85F160)
#define KIKDEEOGENM___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1E85F170)

	class KIKDEEOGENM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1AA30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KIKDEEOGENM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIKDEEOGENM___C_CTOR_OFFSET))(this);
		}

		::KIKDEEOGENM* __cctor_b__48_0()
		{
			return ((::KIKDEEOGENM*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIKDEEOGENM___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
