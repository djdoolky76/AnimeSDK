#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CNJMJICDKJI;
class KBLPEEHPHGG;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GHDMAEDNPAM_ANDDJPPFAFE_OFFSET UNITYSDK_OFFSET(0x189FEF10)
#define GHDMAEDNPAM_JIOLOAPKLMF_OFFSET UNITYSDK_OFFSET(0x189FF020)
#define GHDMAEDNPAM__CTOR_OFFSET UNITYSDK_OFFSET(0x189FEFA0)

inline static constexpr unsigned int GHDMAEDNPAM_TypeDefinitionIndex = 56188;

class GHDMAEDNPAM : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::CNJMJICDKJI*>* JDGCIAMFCOO; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHDMAEDNPAM__CTOR_OFFSET))(this);
	}

	::KBLPEEHPHGG* ANDDJPPFAFE(::CNJMJICDKJI*& JKONFJNDGDP)
	{
		return ((::KBLPEEHPHGG*(*)(::PVOID, ::CNJMJICDKJI*&))((::PBYTE)hIl2Cpp + GHDMAEDNPAM_ANDDJPPFAFE_OFFSET))(this, JKONFJNDGDP);
	}

	::KBLPEEHPHGG* JIOLOAPKLMF(::CNJMJICDKJI*& JKONFJNDGDP)
	{
		return ((::KBLPEEHPHGG*(*)(::PVOID, ::CNJMJICDKJI*&))((::PBYTE)hIl2Cpp + GHDMAEDNPAM_JIOLOAPKLMF_OFFSET))(this, JKONFJNDGDP);
	}
};
