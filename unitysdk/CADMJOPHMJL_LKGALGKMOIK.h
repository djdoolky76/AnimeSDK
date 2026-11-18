#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BDCKHDEBKKK;
class CADMJOPHMJL;
class HBPNIMFGKBK;
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define CADMJOPHMJL_LKGALGKMOIK_DFAOCCFPPJO_OFFSET UNITYSDK_OFFSET(0x14522BD0)
#define CADMJOPHMJL_LKGALGKMOIK__CTOR_OFFSET UNITYSDK_OFFSET(0x1451FBB0)

inline static constexpr unsigned int CADMJOPHMJL_LKGALGKMOIK_TypeDefinitionIndex = 41235;

class CADMJOPHMJL_LKGALGKMOIK : public ::System::Object
{
public:
	::System::Action_1<::System::Collections::Generic::IList_1<::BDCKHDEBKKK*>*>* EDNJGMKPFHG; // 0x10
	::CADMJOPHMJL* KLHPEBKNIFB; // 0x18
	::System::UInt32 FHEIMLOCHJJ; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CADMJOPHMJL_LKGALGKMOIK__CTOR_OFFSET))(this);
	}

	::System::Void DFAOCCFPPJO(::HBPNIMFGKBK* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::HBPNIMFGKBK*))((::PBYTE)hIl2Cpp + CADMJOPHMJL_LKGALGKMOIK_DFAOCCFPPJO_OFFSET))(this, GLAOEHCGCFO);
	}
};
