#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NEMAKFJPGDF;
namespace System { class Object; }

#define NEMAKFJPGDF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EACC970)
#define NEMAKFJPGDF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EACC9B0)
#define NEMAKFJPGDF___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1EACC9C0)

inline static constexpr unsigned int NEMAKFJPGDF___c_TypeDefinitionIndex = 29542;

	class NEMAKFJPGDF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x62AE0);
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
