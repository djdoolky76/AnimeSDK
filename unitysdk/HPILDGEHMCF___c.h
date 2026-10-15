#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HPILDGEHMCF;
namespace System { class Object; }

#define HPILDGEHMCF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5F9060)
#define HPILDGEHMCF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5F90A0)
#define HPILDGEHMCF___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E5F90B0)

inline static constexpr unsigned int HPILDGEHMCF___c_TypeDefinitionIndex = 31534;

	class HPILDGEHMCF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x51880);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HPILDGEHMCF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPILDGEHMCF___C_CTOR_OFFSET))(this);
		}

		::HPILDGEHMCF* __cctor_b__28_0()
		{
			return ((::HPILDGEHMCF*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPILDGEHMCF___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
