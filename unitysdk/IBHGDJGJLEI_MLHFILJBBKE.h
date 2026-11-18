#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { template <typename T> class Action_1; }

#define IBHGDJGJLEI_MLHFILJBBKE_IIHFFJLPBCA_OFFSET UNITYSDK_OFFSET(0x1A3945C0)
#define IBHGDJGJLEI_MLHFILJBBKE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3945B0)

inline static constexpr unsigned int IBHGDJGJLEI_MLHFILJBBKE_TypeDefinitionIndex = 55794;

class IBHGDJGJLEI_MLHFILJBBKE : public ::System::Object
{
public:
	::System::Action_1<::System::Boolean>* EDNJGMKPFHG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBHGDJGJLEI_MLHFILJBBKE__CTOR_OFFSET))(this);
	}

	::System::Void IIHFFJLPBCA(::OAEFGCLEHHO* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + IBHGDJGJLEI_MLHFILJBBKE_IIHFFJLPBCA_OFFSET))(this, LJBPECKCCEA);
	}
};
