#pragma once
#include "unitysdk/unitysdk.h"

class AIOCMKJMBMA;
class EHGPNGPADCB;
class MCONJOMJABJ;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GKOJAOLHJLH_JNEOOIBEGBE_OFFSET UNITYSDK_OFFSET(0x16CCFBC0)
#define GKOJAOLHJLH_NHDKLGLBGPG_OFFSET UNITYSDK_OFFSET(0x16CCFA20)
#define GKOJAOLHJLH__CTOR_OFFSET UNITYSDK_OFFSET(0x16CCF760)

inline static constexpr unsigned int GKOJAOLHJLH_TypeDefinitionIndex = 50850;

class GKOJAOLHJLH
{
public:
	::AIOCMKJMBMA* LHPFMGBDFPN; // 0x30
	::System::Collections::Generic::List_1<::MCONJOMJABJ*>* NDMAKMFHLAI; // 0x38

	::System::Void _ctor(::EHGPNGPADCB* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::EHGPNGPADCB*))((::PBYTE)hIl2Cpp + GKOJAOLHJLH__CTOR_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NHDKLGLBGPG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKOJAOLHJLH_NHDKLGLBGPG_OFFSET))(this);
	}

	::System::Void JNEOOIBEGBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKOJAOLHJLH_JNEOOIBEGBE_OFFSET))(this);
	}
};
