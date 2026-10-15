#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BELNLOJAFCM;
namespace System { class Object; }

#define BELNLOJAFCM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA65350)
#define BELNLOJAFCM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA65380)
#define BELNLOJAFCM___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1EA65390)

	class BELNLOJAFCM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x41090);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BELNLOJAFCM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BELNLOJAFCM___C_CTOR_OFFSET))(this);
		}

		::BELNLOJAFCM* __cctor_b__38_0()
		{
			return ((::BELNLOJAFCM*(*)(::PVOID))((::PBYTE)hIl2Cpp + BELNLOJAFCM___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
