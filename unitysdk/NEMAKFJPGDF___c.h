#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NEMAKFJPGDF;
namespace System { class Object; }

#define NEMAKFJPGDF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FE3BFB0)
#define NEMAKFJPGDF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FE3BFF0)
#define NEMAKFJPGDF___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1FE3C000)

inline static constexpr unsigned int NEMAKFJPGDF___c_TypeDefinitionIndex = 30304;

	class NEMAKFJPGDF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x69370);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEMAKFJPGDF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEMAKFJPGDF___C_CTOR_OFFSET))(this);
		}

		::NEMAKFJPGDF* __cctor_b__18_0()
		{
			return ((::NEMAKFJPGDF*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEMAKFJPGDF___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
