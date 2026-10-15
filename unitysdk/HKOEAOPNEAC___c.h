#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HKOEAOPNEAC;
namespace System { class Object; }

#define HKOEAOPNEAC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E58B7C0)
#define HKOEAOPNEAC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E58B7F0)
#define HKOEAOPNEAC___C___CCTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0x1E58B800)

inline static constexpr unsigned int HKOEAOPNEAC___c_TypeDefinitionIndex = 33446;

	class HKOEAOPNEAC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x37780);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HKOEAOPNEAC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKOEAOPNEAC___C_CTOR_OFFSET))(this);
		}

		::HKOEAOPNEAC* __cctor_b__53_0()
		{
			return ((::HKOEAOPNEAC*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKOEAOPNEAC___C___CCTOR_B__53_0_OFFSET))(this);
		}

	};
