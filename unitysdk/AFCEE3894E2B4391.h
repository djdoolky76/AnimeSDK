#pragma once
#include "unitysdk/unitysdk.h"

class A2A92B2FFE2E2E5A;
class B7271E1C686B9364;
class F1C8A76FE26E681F;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AFCEE3894E2B4391_EC5D98EAB58C72A3_OFFSET UNITYSDK_OFFSET(0x21AC560)
#define AFCEE3894E2B4391_F29249DD4508E851_OFFSET UNITYSDK_OFFSET(0x21AC780)
#define AFCEE3894E2B4391_F358103F0CB2C054_OFFSET UNITYSDK_OFFSET(0x21ACCA0)
#define AFCEE3894E2B4391__CTOR_OFFSET UNITYSDK_OFFSET(0x21ACEB0)

inline static constexpr unsigned int AFCEE3894E2B4391_TypeDefinitionIndex = 8822;

class AFCEE3894E2B4391
{
public:
	::B7271E1C686B9364* F358103F0CB2C054(::A2A92B2FFE2E2E5A* AF4717A1A80FD60F)
	{
		return ((::B7271E1C686B9364*(*)(::PVOID, ::A2A92B2FFE2E2E5A*))((::PBYTE)hIl2Cpp + AFCEE3894E2B4391_F358103F0CB2C054_OFFSET))(this, AF4717A1A80FD60F);
	}

	::System::Void EC5D98EAB58C72A3(::System::Collections::Generic::List_1<::F1C8A76FE26E681F*>* E05852C4C5F1274F)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::F1C8A76FE26E681F*>*))((::PBYTE)hIl2Cpp + AFCEE3894E2B4391_EC5D98EAB58C72A3_OFFSET))(this, E05852C4C5F1274F);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFCEE3894E2B4391__CTOR_OFFSET))(this);
	}

	::System::Void F29249DD4508E851(::System::String* A85C1D758418F8BA, ::System::Collections::Generic::Dictionary_2<::System::String*, ::F1C8A76FE26E681F*>* EE201D57A2FEBD5A)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::F1C8A76FE26E681F*>*))((::PBYTE)hIl2Cpp + AFCEE3894E2B4391_F29249DD4508E851_OFFSET))(this, A85C1D758418F8BA, EE201D57A2FEBD5A);
	}
};
