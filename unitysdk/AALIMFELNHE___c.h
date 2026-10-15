#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AALIMFELNHE;
namespace System { class Object; }

#define AALIMFELNHE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDBF380)
#define AALIMFELNHE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDBF3C0)
#define AALIMFELNHE___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DDBF3D0)

	class AALIMFELNHE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x37520);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AALIMFELNHE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AALIMFELNHE___C_CTOR_OFFSET))(this);
		}

		::AALIMFELNHE* __cctor_b__28_0()
		{
			return ((::AALIMFELNHE*(*)(::PVOID))((::PBYTE)hIl2Cpp + AALIMFELNHE___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
