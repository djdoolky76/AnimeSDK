#pragma once
#include "unitysdk/unitysdk.h"

class BEE2D07B44A901BD;
class F3A019B3697FD5CF;
class F74A04D385941DBC;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define E0482F8067321659_EC5D98EAB58C72A3_OFFSET UNITYSDK_OFFSET(0x21CDBC0)
#define E0482F8067321659_F29249DD4508E851_OFFSET UNITYSDK_OFFSET(0x21CDDE0)
#define E0482F8067321659_F358103F0CB2C054_OFFSET UNITYSDK_OFFSET(0x21CE370)
#define E0482F8067321659__CTOR_OFFSET UNITYSDK_OFFSET(0x21CE580)

inline static constexpr unsigned int E0482F8067321659_TypeDefinitionIndex = 8907;

class E0482F8067321659
{
public:
	::BEE2D07B44A901BD* F358103F0CB2C054(::F74A04D385941DBC* AF4717A1A80FD60F)
	{
		return ((::BEE2D07B44A901BD*(*)(::PVOID, ::F74A04D385941DBC*))((::PBYTE)hIl2Cpp + E0482F8067321659_F358103F0CB2C054_OFFSET))(this, AF4717A1A80FD60F);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E0482F8067321659__CTOR_OFFSET))(this);
	}

	::System::Void F29249DD4508E851(::System::String* A85C1D758418F8BA, ::System::Collections::Generic::Dictionary_2<::System::String*, ::F3A019B3697FD5CF*>* EE201D57A2FEBD5A)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::F3A019B3697FD5CF*>*))((::PBYTE)hIl2Cpp + E0482F8067321659_F29249DD4508E851_OFFSET))(this, A85C1D758418F8BA, EE201D57A2FEBD5A);
	}

	::System::Void EC5D98EAB58C72A3(::System::Collections::Generic::List_1<::F3A019B3697FD5CF*>* E05852C4C5F1274F)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::F3A019B3697FD5CF*>*))((::PBYTE)hIl2Cpp + E0482F8067321659_EC5D98EAB58C72A3_OFFSET))(this, E05852C4C5F1274F);
	}
};
