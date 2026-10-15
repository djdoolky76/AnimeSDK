#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PMMOFOBCINL;
namespace System { class Object; }

#define PMMOFOBCINL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF81CB0)
#define PMMOFOBCINL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF81CE0)
#define PMMOFOBCINL___C___CCTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0x1DF81CF0)

inline static constexpr unsigned int PMMOFOBCINL___c_TypeDefinitionIndex = 26977;

	class PMMOFOBCINL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x409C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PMMOFOBCINL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMMOFOBCINL___C_CTOR_OFFSET))(this);
		}

		::PMMOFOBCINL* __cctor_b__53_0()
		{
			return ((::PMMOFOBCINL*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMMOFOBCINL___C___CCTOR_B__53_0_OFFSET))(this);
		}

	};
