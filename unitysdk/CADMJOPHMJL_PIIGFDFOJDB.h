#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FBHPDPBIGPK;
class IDGDIFDMIDP;
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CADMJOPHMJL_PIIGFDFOJDB_JHFNIAFDMHF_OFFSET UNITYSDK_OFFSET(0x14F0C340)
#define CADMJOPHMJL_PIIGFDFOJDB_KMGOHDIDEPA_OFFSET UNITYSDK_OFFSET(0x14F0C480)
#define CADMJOPHMJL_PIIGFDFOJDB__CTOR_OFFSET UNITYSDK_OFFSET(0x14F0C330)

inline static constexpr unsigned int CADMJOPHMJL_PIIGFDFOJDB_TypeDefinitionIndex = 41240;

class CADMJOPHMJL_PIIGFDFOJDB : public ::System::Object
{
public:
	::System::Action_1<::System::Collections::Generic::List_1<::FBHPDPBIGPK*>*>* DLMJCFBENGB; // 0x10
	::IDGDIFDMIDP* GGODNFDLEGE; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CADMJOPHMJL_PIIGFDFOJDB__CTOR_OFFSET))(this);
	}

	::System::Void JHFNIAFDMHF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CADMJOPHMJL_PIIGFDFOJDB_JHFNIAFDMHF_OFFSET))(this);
	}

	::System::Void KMGOHDIDEPA(::System::Collections::Generic::List_1<::FBHPDPBIGPK*>* DJLOKMMLFJC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::FBHPDPBIGPK*>*))((::PBYTE)hIl2Cpp + CADMJOPHMJL_PIIGFDFOJDB_KMGOHDIDEPA_OFFSET))(this, DJLOKMMLFJC);
	}
};
