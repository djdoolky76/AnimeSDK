#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMDGENIGNMG.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JBEDANFJICI_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x18727150)
#define JBEDANFJICI__CTOR_OFFSET UNITYSDK_OFFSET(0x18726FC0)

inline static constexpr unsigned int JBEDANFJICI_TypeDefinitionIndex = 65362;

class JBEDANFJICI : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Single>* CKIGGKJOGCJ; // 0x10
	::System::Collections::Generic::List_1<::System::Boolean>* LMGFEDEMDJP; // 0x18
	::System::Collections::Generic::List_1<::System::Single>* OLANMJDNBFN; // 0x20
	::System::Collections::Generic::List_1<::CMDGENIGNMG>* MGGEFFHNDLC; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* GKIGEBNGPNL; // 0x30
	::System::Int32 ACCLCHGENDK; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBEDANFJICI__CTOR_OFFSET))(this);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBEDANFJICI_NPOLNFDBOOD_OFFSET))(this);
	}
};
