#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FOCOJIDPAGO;
namespace System { class Object; }

#define FOCOJIDPAGO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x202E0980)
#define FOCOJIDPAGO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x202E09C0)
#define FOCOJIDPAGO___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x202E09D0)

inline static constexpr unsigned int FOCOJIDPAGO___c_TypeDefinitionIndex = 30207;

	class FOCOJIDPAGO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x50A20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOCOJIDPAGO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOCOJIDPAGO___C_CTOR_OFFSET))(this);
		}

		::FOCOJIDPAGO* __cctor_b__33_0()
		{
			return ((::FOCOJIDPAGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOCOJIDPAGO___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
