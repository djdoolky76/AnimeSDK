#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BCFKBFFLFGH;
class HHOAEGLFKJO;
class NBDEOHKBODI;
class PHHIMLDMBFD;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EGEIEOHIADL_KKFNPONHGEM_OFFSET UNITYSDK_OFFSET(0x1E232660)
#define EGEIEOHIADL_KNDMMHPDPIB_OFFSET UNITYSDK_OFFSET(0x1E232480)
#define EGEIEOHIADL__CTOR_OFFSET UNITYSDK_OFFSET(0x1E2323F0)

inline static constexpr unsigned int EGEIEOHIADL_TypeDefinitionIndex = 94254;

class EGEIEOHIADL : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::HHOAEGLFKJO*>* MLIDEPEBEGD; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGEIEOHIADL__CTOR_OFFSET))(this);
	}

	::System::Void KNDMMHPDPIB(::NBDEOHKBODI* CBNHBKHFEKJ, ::BCFKBFFLFGH* JMDHBJMNBCP, ::PHHIMLDMBFD* CCLNAMEBADF, ::NBDEOHKBODI* LHFNIMCNAEG)
	{
		return ((::System::Void(*)(::PVOID, ::NBDEOHKBODI*, ::BCFKBFFLFGH*, ::PHHIMLDMBFD*, ::NBDEOHKBODI*))((::PBYTE)hIl2Cpp + EGEIEOHIADL_KNDMMHPDPIB_OFFSET))(this, CBNHBKHFEKJ, JMDHBJMNBCP, CCLNAMEBADF, LHFNIMCNAEG);
	}

	::System::Void KKFNPONHGEM(::HHOAEGLFKJO* AOKHOHCJNFJ)
	{
		return ((::System::Void(*)(::PVOID, ::HHOAEGLFKJO*))((::PBYTE)hIl2Cpp + EGEIEOHIADL_KKFNPONHGEM_OFFSET))(this, AOKHOHCJNFJ);
	}
};
