#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GPJONCPIEEI;
namespace System { class Object; }

#define GPJONCPIEEI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FD02AF0)
#define GPJONCPIEEI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FD02B30)
#define GPJONCPIEEI___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1FD02B40)

inline static constexpr unsigned int GPJONCPIEEI___c_TypeDefinitionIndex = 35499;

	class GPJONCPIEEI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1D720);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GPJONCPIEEI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPJONCPIEEI___C_CTOR_OFFSET))(this);
		}

		::GPJONCPIEEI* __cctor_b__28_0()
		{
			return ((::GPJONCPIEEI*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPJONCPIEEI___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
