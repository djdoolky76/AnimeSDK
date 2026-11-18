#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ShoppingMallBaseContextBase.h"

class LGINJIKKBJA;
class NBDLJECLJJO;
namespace MoleMole { class MonoGamepadRegion; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_SHOPPINGMALLSKINCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x13A06F20)

namespace MoleMole
{
	inline static constexpr unsigned int ShoppingMallSkinContext_TypeDefinitionIndex = 62141;

	class ShoppingMallSkinContext : public ::MoleMole::ShoppingMallBaseContextBase
	{
	public:
		::LGINJIKKBJA* Down_DetailBtn; // 0x58

		::System::Void _ctor(::System::Collections::Generic::List_1<::NBDLJECLJJO*>* goods, ::MoleMole::MonoGamepadRegion* region, ::LGINJIKKBJA* Down_DetailBtn, ::System::Action_1<::System::Int32>* onClick)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::NBDLJECLJJO*>*, ::MoleMole::MonoGamepadRegion*, ::LGINJIKKBJA*, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOPPINGMALLSKINCONTEXT__CTOR_OFFSET))(this, goods, region, Down_DetailBtn, onClick);
		}
	};
}
