#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KPBPGBNIDOK.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GBKIDFBFPGP_GEDCOFEGFPI__CTOR_OFFSET UNITYSDK_OFFSET(0x14127500)

inline static constexpr unsigned int GBKIDFBFPGP_GEDCOFEGFPI_TypeDefinitionIndex = 58609;

class GBKIDFBFPGP_GEDCOFEGFPI : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* HJAGADJPPCA; // 0x10
	::MoleMole::Battle::Entity* KECKGDFIALJ; // 0x18
	::KPBPGBNIDOK KKOGCPPLPNJ; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBKIDFBFPGP_GEDCOFEGFPI__CTOR_OFFSET))(this);
	}
};
