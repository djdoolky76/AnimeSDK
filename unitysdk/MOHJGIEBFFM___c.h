#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MOHJGIEBFFM;
namespace System { class Object; }

#define MOHJGIEBFFM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAAA670)
#define MOHJGIEBFFM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAAA6B0)
#define MOHJGIEBFFM___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EAAA6C0)

	class MOHJGIEBFFM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5A6E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOHJGIEBFFM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOHJGIEBFFM___C_CTOR_OFFSET))(this);
		}

		::MOHJGIEBFFM* __cctor_b__28_0()
		{
			return ((::MOHJGIEBFFM*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOHJGIEBFFM___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
