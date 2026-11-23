#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AE02E8F41E452C48;
class FF1237522147A967;
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AE02E8F41E452C48_BE76DFDA6A8333B3_AD8C2185B069423A_OFFSET UNITYSDK_OFFSET(0x3AC8590)
#define AE02E8F41E452C48_BE76DFDA6A8333B3_F48F6A8A28BCDE5D_OFFSET UNITYSDK_OFFSET(0x3AC8B60)
#define AE02E8F41E452C48_BE76DFDA6A8333B3__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int AE02E8F41E452C48_BE76DFDA6A8333B3_TypeDefinitionIndex = 12095;

class AE02E8F41E452C48_BE76DFDA6A8333B3 : public ::System::Object
{
public:
	::AE02E8F41E452C48* A544919C800E2923; // 0x10
	::System::Action_1<::System::String*>* E04D2BE64FCE9814; // 0x18
	::System::String* BD7F81C4BAB71679; // 0x20
	::FF1237522147A967* F423C01E632FCED3; // 0x28
	::System::String* AF94CBD00018A704; // 0x30
	::System::String* BD2C65BCCC92F212; // 0x38
	::System::Collections::Generic::List_1<::System::String*>* B9ECD0BAD793C561; // 0x40
	::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* AE846711F351347E; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AE02E8F41E452C48_BE76DFDA6A8333B3__CTOR_OFFSET))(this);
	}

	::System::Void AD8C2185B069423A(::MiHoYo::SDK::NetworkResponseModel* A6CAE7339066B0FB)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + AE02E8F41E452C48_BE76DFDA6A8333B3_AD8C2185B069423A_OFFSET))(this, A6CAE7339066B0FB);
	}

	::System::Void F48F6A8A28BCDE5D(::System::Boolean A2303CBF53675790)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AE02E8F41E452C48_BE76DFDA6A8333B3_F48F6A8A28BCDE5D_OFFSET))(this, A2303CBF53675790);
	}
};
