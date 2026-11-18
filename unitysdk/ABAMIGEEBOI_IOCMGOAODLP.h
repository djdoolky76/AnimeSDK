#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }

#define ABAMIGEEBOI_IOCMGOAODLP_DHDDJKKHOGA_OFFSET UNITYSDK_OFFSET(0x11B85900)
#define ABAMIGEEBOI_IOCMGOAODLP__CTOR_OFFSET UNITYSDK_OFFSET(0x11B858F0)

inline static constexpr unsigned int ABAMIGEEBOI_IOCMGOAODLP_TypeDefinitionIndex = 39926;

class ABAMIGEEBOI_IOCMGOAODLP : public ::System::Object
{
public:
	::System::Int32 MPKKKJFNLIJ; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABAMIGEEBOI_IOCMGOAODLP__CTOR_OFFSET))(this);
	}

	::System::Void DHDDJKKHOGA(::MoleMole::Battle::Entity* NFFNEFLKPDG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + ABAMIGEEBOI_IOCMGOAODLP_DHDDJKKHOGA_OFFSET))(this, NFFNEFLKPDG);
	}
};
