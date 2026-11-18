#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ENBJPBMGMMJ;
class HKLIHBEDIDE;
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define PNCFHJJNMBF_COBGFBCIAAI_OFFSET UNITYSDK_OFFSET(0x1D9D58B0)
#define PNCFHJJNMBF_FKDBCIBKFFN_1_OFFSET UNITYSDK_OFFSET(0x1D9D5930)
#define PNCFHJJNMBF_FKDBCIBKFFN_OFFSET UNITYSDK_OFFSET(0x1D9D57C0)
#define PNCFHJJNMBF_HMNPAPBLFAI_OFFSET UNITYSDK_OFFSET(0x1D9D5A40)
#define PNCFHJJNMBF_OBBIJAPDBDO_OFFSET UNITYSDK_OFFSET(0x1D9D5AE0)
#define PNCFHJJNMBF__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9D5730)

inline static constexpr unsigned int PNCFHJJNMBF_TypeDefinitionIndex = 87597;

class PNCFHJJNMBF : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Type*, ::ENBJPBMGMMJ*>* HNAIEBMDILB; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNCFHJJNMBF__CTOR_OFFSET))(this);
	}

	::ENBJPBMGMMJ* FKDBCIBKFFN(::System::Type* LKDNICBNEHF)
	{
		return ((::ENBJPBMGMMJ*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + PNCFHJJNMBF_FKDBCIBKFFN_OFFSET))(this, LKDNICBNEHF);
	}

	::System::Collections::Generic::IEnumerable_1<::ENBJPBMGMMJ*>* COBGFBCIAAI()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::ENBJPBMGMMJ*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNCFHJJNMBF_COBGFBCIAAI_OFFSET))(this);
	}

	::ENBJPBMGMMJ* FKDBCIBKFFN_1(::HKLIHBEDIDE* JBNDFMJDFPB)
	{
		return ((::ENBJPBMGMMJ*(*)(::PVOID, ::HKLIHBEDIDE*))((::PBYTE)hIl2Cpp + PNCFHJJNMBF_FKDBCIBKFFN_1_OFFSET))(this, JBNDFMJDFPB);
	}

	::System::Void HMNPAPBLFAI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNCFHJJNMBF_HMNPAPBLFAI_OFFSET))(this);
	}

	::System::Void OBBIJAPDBDO(::HKLIHBEDIDE* CEGKJHBPBDI)
	{
		return ((::System::Void(*)(::PVOID, ::HKLIHBEDIDE*))((::PBYTE)hIl2Cpp + PNCFHJJNMBF_OBBIJAPDBDO_OFFSET))(this, CEGKJHBPBDI);
	}
};
