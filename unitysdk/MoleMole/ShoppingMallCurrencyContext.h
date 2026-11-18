#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ShoppingMallBaseContextBase.h"

class NBDLJECLJJO;
namespace MoleMole { class MonoGamepadRegion; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_SHOPPINGMALLCURRENCYCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x198D2200)

namespace MoleMole
{
	inline static constexpr unsigned int ShoppingMallCurrencyContext_TypeDefinitionIndex = 49121;

	class ShoppingMallCurrencyContext : public ::MoleMole::ShoppingMallBaseContextBase
	{
	public:
		::System::Void _ctor(::System::Collections::Generic::List_1<::NBDLJECLJJO*>* goods, ::MoleMole::MonoGamepadRegion* region, ::System::Action_1<::System::Int32>* onClick)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::NBDLJECLJJO*>*, ::MoleMole::MonoGamepadRegion*, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOPPINGMALLCURRENCYCONTEXT__CTOR_OFFSET))(this, goods, region, onClick);
		}
	};
}
