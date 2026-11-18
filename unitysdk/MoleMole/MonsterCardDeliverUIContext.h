#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class CCBGGAFNBHM;
namespace MoleMole { class PopMonsterCardDeliverShow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_MONSTERCARDDELIVERUICONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A710EE0)

namespace MoleMole
{
	inline static constexpr unsigned int MonsterCardDeliverUIContext_TypeDefinitionIndex = 42336;

	class MonsterCardDeliverUIContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::CCBGGAFNBHM*>* CardList; // 0x28
		::MoleMole::PopMonsterCardDeliverShow* showObj; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTERCARDDELIVERUICONTEXT__CTOR_OFFSET))(this);
		}
	};
}
