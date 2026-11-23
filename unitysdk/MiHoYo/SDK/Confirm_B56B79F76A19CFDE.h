#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class Confirm_B5F0E06A8DBF23BA; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_CONFIRM_B56B79F76A19CFDE_A3FD24D058C629EB_OFFSET UNITYSDK_OFFSET(0x39CDAE0)
#define MIHOYO_SDK_CONFIRM_B56B79F76A19CFDE_AED093DA9AC7A7F2_OFFSET UNITYSDK_OFFSET(0x39CDB50)
#define MIHOYO_SDK_CONFIRM_B56B79F76A19CFDE__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int Confirm_B56B79F76A19CFDE_TypeDefinitionIndex = 12601;

	class Confirm_B56B79F76A19CFDE : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Confirm_B5F0E06A8DBF23BA* E04D2BE64FCE9814; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIRM_B56B79F76A19CFDE__CTOR_OFFSET))(this);
		}

		::System::Void A3FD24D058C629EB(::System::String* E41EB813C7FB644A, ::System::Action_1<::System::String*>* FFF2E11BB22CECAE)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIRM_B56B79F76A19CFDE_A3FD24D058C629EB_OFFSET))(this, E41EB813C7FB644A, FFF2E11BB22CECAE);
		}

		::System::Void AED093DA9AC7A7F2(::System::String* E41EB813C7FB644A, ::System::Action_1<::System::String*>* A023CCEA59368E44)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIRM_B56B79F76A19CFDE_AED093DA9AC7A7F2_OFFSET))(this, E41EB813C7FB644A, A023CCEA59368E44);
		}
	};
}
