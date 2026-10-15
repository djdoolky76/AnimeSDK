#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IAKEDFLIOFD;
namespace System { class Object; }

#define IAKEDFLIOFD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5D9C30)
#define IAKEDFLIOFD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5D9C70)
#define IAKEDFLIOFD___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1E5D9C80)

inline static constexpr unsigned int IAKEDFLIOFD___c_TypeDefinitionIndex = 29477;

	class IAKEDFLIOFD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x416C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IAKEDFLIOFD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAKEDFLIOFD___C_CTOR_OFFSET))(this);
		}

		::IAKEDFLIOFD* __cctor_b__43_0()
		{
			return ((::IAKEDFLIOFD*(*)(::PVOID))((::PBYTE)hIl2Cpp + IAKEDFLIOFD___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
