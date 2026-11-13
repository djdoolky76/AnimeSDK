#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GJIIPFBFLLC;
namespace System { class Object; }

#define GJIIPFBFLLC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FBDE660)
#define GJIIPFBFLLC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FBDE6A0)
#define GJIIPFBFLLC___C___CCTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0x1FBDE6B0)

inline static constexpr unsigned int GJIIPFBFLLC___c_TypeDefinitionIndex = 30776;

	class GJIIPFBFLLC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x13320);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GJIIPFBFLLC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJIIPFBFLLC___C_CTOR_OFFSET))(this);
		}

		::GJIIPFBFLLC* __cctor_b__53_0()
		{
			return ((::GJIIPFBFLLC*(*)(::PVOID))((::PBYTE)hIl2Cpp + GJIIPFBFLLC___C___CCTOR_B__53_0_OFFSET))(this);
		}

	};
