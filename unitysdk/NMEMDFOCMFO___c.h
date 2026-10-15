#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NMEMDFOCMFO;
namespace System { class Object; }

#define NMEMDFOCMFO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB73F20)
#define NMEMDFOCMFO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB73F60)
#define NMEMDFOCMFO___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1EB73F70)

	class NMEMDFOCMFO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6C280);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NMEMDFOCMFO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMEMDFOCMFO___C_CTOR_OFFSET))(this);
		}

		::NMEMDFOCMFO* __cctor_b__43_0()
		{
			return ((::NMEMDFOCMFO*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMEMDFOCMFO___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
