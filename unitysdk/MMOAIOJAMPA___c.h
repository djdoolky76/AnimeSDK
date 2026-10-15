#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MMOAIOJAMPA;
namespace System { class Object; }

#define MMOAIOJAMPA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA900C0)
#define MMOAIOJAMPA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA90100)
#define MMOAIOJAMPA___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EA90110)

	class MMOAIOJAMPA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x59410);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MMOAIOJAMPA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMOAIOJAMPA___C_CTOR_OFFSET))(this);
		}

		::MMOAIOJAMPA* __cctor_b__28_0()
		{
			return ((::MMOAIOJAMPA*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMOAIOJAMPA___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
