#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CCGJDDBKIDE;
namespace System { class Object; }

#define CCGJDDBKIDE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E046F90)
#define CCGJDDBKIDE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E046FD0)
#define CCGJDDBKIDE___C___CCTOR_B__29_0_OFFSET UNITYSDK_OFFSET(0x1E046FE0)

inline static constexpr unsigned int CCGJDDBKIDE___c_TypeDefinitionIndex = 29725;

	class CCGJDDBKIDE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xCB80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CCGJDDBKIDE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGJDDBKIDE___C_CTOR_OFFSET))(this);
		}

		::CCGJDDBKIDE* __cctor_b__29_0()
		{
			return ((::CCGJDDBKIDE*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGJDDBKIDE___C___CCTOR_B__29_0_OFFSET))(this);
		}

	};
