#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class CIFBOKELGMC;
class JFLPIHAJLOA;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_EXPEDITIONBUDDYSELECTCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x130C35E0)

namespace MoleMole
{
	inline static constexpr unsigned int ExpeditionBuddySelectContext_TypeDefinitionIndex = 89962;

	class ExpeditionBuddySelectContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::CIFBOKELGMC* LayerData; // 0x28
		::System::Collections::Generic::List_1<::JFLPIHAJLOA*>* MemberSlots; // 0x30
		::System::Int32 selectIndex; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EXPEDITIONBUDDYSELECTCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
