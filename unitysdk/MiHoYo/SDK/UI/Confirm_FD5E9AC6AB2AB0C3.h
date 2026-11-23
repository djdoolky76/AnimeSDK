#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::UI { class Confirm_B5F0E06A8DBF23BA; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_UI_CONFIRM_FD5E9AC6AB2AB0C3_A3FD24D058C629EB_OFFSET UNITYSDK_OFFSET(0x3A5B480)
#define MIHOYO_SDK_UI_CONFIRM_FD5E9AC6AB2AB0C3_AED093DA9AC7A7F2_OFFSET UNITYSDK_OFFSET(0x3A5B4F0)
#define MIHOYO_SDK_UI_CONFIRM_FD5E9AC6AB2AB0C3__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK::UI
{
	inline static constexpr unsigned int Confirm_FD5E9AC6AB2AB0C3_TypeDefinitionIndex = 12997;

	class Confirm_FD5E9AC6AB2AB0C3 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::UI::Confirm_B5F0E06A8DBF23BA* E04D2BE64FCE9814; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_CONFIRM_FD5E9AC6AB2AB0C3__CTOR_OFFSET))(this);
		}

		::System::Void A3FD24D058C629EB(::System::String* E41EB813C7FB644A, ::System::Action_1<::System::String*>* FFF2E11BB22CECAE)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_CONFIRM_FD5E9AC6AB2AB0C3_A3FD24D058C629EB_OFFSET))(this, E41EB813C7FB644A, FFF2E11BB22CECAE);
		}

		::System::Void AED093DA9AC7A7F2(::System::String* E41EB813C7FB644A, ::System::Action_1<::System::String*>* A023CCEA59368E44)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_CONFIRM_FD5E9AC6AB2AB0C3_AED093DA9AC7A7F2_OFFSET))(this, E41EB813C7FB644A, A023CCEA59368E44);
		}
	};
}
