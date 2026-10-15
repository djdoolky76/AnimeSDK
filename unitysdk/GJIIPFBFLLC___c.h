#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GJIIPFBFLLC;
namespace System { class Object; }

#define GJIIPFBFLLC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4AA1F0)
#define GJIIPFBFLLC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4AA230)
#define GJIIPFBFLLC___C___CCTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0x1E4AA240)

inline static constexpr unsigned int GJIIPFBFLLC___c_TypeDefinitionIndex = 29878;

	class GJIIPFBFLLC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1BF20);
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
