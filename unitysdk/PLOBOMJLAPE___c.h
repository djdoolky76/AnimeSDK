#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PLOBOMJLAPE;
namespace System { class Object; }

#define PLOBOMJLAPE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F255D50)
#define PLOBOMJLAPE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F255D90)
#define PLOBOMJLAPE___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F255DA0)

inline static constexpr unsigned int PLOBOMJLAPE___c_TypeDefinitionIndex = 26894;

	class PLOBOMJLAPE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3EA80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PLOBOMJLAPE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLOBOMJLAPE___C_CTOR_OFFSET))(this);
		}

		::PLOBOMJLAPE* __cctor_b__23_0()
		{
			return ((::PLOBOMJLAPE*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLOBOMJLAPE___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
