#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MJMGDLJAJCM;
namespace System { class Object; }

#define MJMGDLJAJCM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA4D450)
#define MJMGDLJAJCM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA4D490)
#define MJMGDLJAJCM___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1EA4D4A0)

	class MJMGDLJAJCM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x55F30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MJMGDLJAJCM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJMGDLJAJCM___C_CTOR_OFFSET))(this);
		}

		::MJMGDLJAJCM* __cctor_b__23_0()
		{
			return ((::MJMGDLJAJCM*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJMGDLJAJCM___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
