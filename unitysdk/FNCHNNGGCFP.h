#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FLFDIKKIGJI;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FNCHNNGGCFP_DHJFONOHDAO_OFFSET UNITYSDK_OFFSET(0x1322A960)
#define FNCHNNGGCFP__CTOR_OFFSET UNITYSDK_OFFSET(0x1322A950)

inline static constexpr unsigned int FNCHNNGGCFP_TypeDefinitionIndex = 91164;

class FNCHNNGGCFP : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::FLFDIKKIGJI*>* _IIAOAIBBOAF_k__BackingField; // 0x10

	::System::Void _ctor(::System::Collections::Generic::List_1<::FLFDIKKIGJI*>* PILELGPBCLL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::FLFDIKKIGJI*>*))((::PBYTE)hIl2Cpp + FNCHNNGGCFP__CTOR_OFFSET))(this, PILELGPBCLL);
	}

	::System::Collections::Generic::List_1<::FLFDIKKIGJI*>* DHJFONOHDAO()
	{
		return ((::System::Collections::Generic::List_1<::FLFDIKKIGJI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNCHNNGGCFP_DHJFONOHDAO_OFFSET))(this);
	}
};
