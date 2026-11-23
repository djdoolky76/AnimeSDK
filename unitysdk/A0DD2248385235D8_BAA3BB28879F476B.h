#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class A0DD2248385235D8;
class FF1237522147A967;
namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T> class Action_1; }

#define A0DD2248385235D8_BAA3BB28879F476B_AD8C2185B069423A_OFFSET UNITYSDK_OFFSET(0x3AF7890)
#define A0DD2248385235D8_BAA3BB28879F476B_B38CFFB233C9653A_OFFSET UNITYSDK_OFFSET(0x3AF8090)
#define A0DD2248385235D8_BAA3BB28879F476B_F48F6A8A28BCDE5D_OFFSET UNITYSDK_OFFSET(0x3AF7BA0)
#define A0DD2248385235D8_BAA3BB28879F476B__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A0DD2248385235D8_BAA3BB28879F476B_TypeDefinitionIndex = 12198;

class A0DD2248385235D8_BAA3BB28879F476B : public ::System::Object
{
public:
	::System::String* F937AFADF857C1DB; // 0x10
	::FF1237522147A967* F423C01E632FCED3; // 0x18
	::System::String* F2A9EC2723D2E694; // 0x20
	::MiHoYo::SDK::AccountModel* E0B1DDD91A901A3D; // 0x28
	::A0DD2248385235D8* A544919C800E2923; // 0x30
	::System::Action_1<::System::String*>* E04D2BE64FCE9814; // 0x38
	::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* FC1BFCAB993D006C; // 0x40
	::System::Action_3<::System::Int32, ::System::String*, ::System::String*>* BDCB87964C751DB1; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A0DD2248385235D8_BAA3BB28879F476B__CTOR_OFFSET))(this);
	}

	::System::Void AD8C2185B069423A(::System::Boolean A2303CBF53675790)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + A0DD2248385235D8_BAA3BB28879F476B_AD8C2185B069423A_OFFSET))(this, A2303CBF53675790);
	}

	::System::Void F48F6A8A28BCDE5D(::System::Int32 FEC8DC0392823C8D, ::System::String* AF94CBD00018A704, ::System::String* AD4834887E87082A)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + A0DD2248385235D8_BAA3BB28879F476B_F48F6A8A28BCDE5D_OFFSET))(this, FEC8DC0392823C8D, AF94CBD00018A704, AD4834887E87082A);
	}

	::System::Void B38CFFB233C9653A(::MiHoYo::SDK::NetworkResponseModel* A6CAE7339066B0FB)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + A0DD2248385235D8_BAA3BB28879F476B_B38CFFB233C9653A_OFFSET))(this, A6CAE7339066B0FB);
	}
};
