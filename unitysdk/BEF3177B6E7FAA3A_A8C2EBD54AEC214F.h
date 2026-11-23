#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BEF3177B6E7FAA3A;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BEF3177B6E7FAA3A_A8C2EBD54AEC214F_AE38477FF77F8645_OFFSET UNITYSDK_OFFSET(0x29B4330)
#define BEF3177B6E7FAA3A_A8C2EBD54AEC214F_AF20D850419180E3_OFFSET UNITYSDK_OFFSET(0x29B3C40)
#define BEF3177B6E7FAA3A_A8C2EBD54AEC214F_E110BDDAF4925FB4_OFFSET UNITYSDK_OFFSET(0x2946230)
#define BEF3177B6E7FAA3A_A8C2EBD54AEC214F__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int BEF3177B6E7FAA3A_A8C2EBD54AEC214F_TypeDefinitionIndex = 15596;

class BEF3177B6E7FAA3A_A8C2EBD54AEC214F : public ::System::Object
{
public:
	::System::Action_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>*>* BB83DD88CD827F8B; // 0x10
	::System::Collections::Generic::List_1<::System::String*>* BB14855F226B96D7; // 0x18
	::BEF3177B6E7FAA3A* A544919C800E2923; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>* E945D709B8B0B00C; // 0x28
	::System::Collections::Generic::List_1<::System::String*>* F641FAB9B1385DCD; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>* BFAB843A7E10FC6B; // 0x38
	::System::Action_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>*>* E04D2BE64FCE9814; // 0x40
	::System::String* A2F72F00CA1FE98D; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEF3177B6E7FAA3A_A8C2EBD54AEC214F__CTOR_OFFSET))(this);
	}

	::System::Void E110BDDAF4925FB4(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>* F5293D562DA2F697)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>*))((::PBYTE)hIl2Cpp + BEF3177B6E7FAA3A_A8C2EBD54AEC214F_E110BDDAF4925FB4_OFFSET))(this, F5293D562DA2F697);
	}

	::System::Void AF20D850419180E3(::System::String* EAE374FF2314A910)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BEF3177B6E7FAA3A_A8C2EBD54AEC214F_AF20D850419180E3_OFFSET))(this, EAE374FF2314A910);
	}

	::System::Void AE38477FF77F8645()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEF3177B6E7FAA3A_A8C2EBD54AEC214F_AE38477FF77F8645_OFFSET))(this);
	}
};
