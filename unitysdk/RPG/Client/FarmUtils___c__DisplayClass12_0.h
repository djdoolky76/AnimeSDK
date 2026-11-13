#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class ItemConfig; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_FARMUTILS___C__DISPLAYCLASS12_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1CBAC940)
#define RPG_CLIENT_FARMUTILS___C__DISPLAYCLASS12_0__ISDROPPINGONEOF_B__0_OFFSET UNITYSDK_OFFSET(0x1CBAC970)

namespace RPG::Client
{
	inline static constexpr unsigned int FarmUtils___c__DisplayClass12_0_TypeDefinitionIndex = 65429;

	class FarmUtils___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::IEnumerable_1<::System::UInt32>* materials; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMUTILS___C__DISPLAYCLASS12_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _IsDroppingOneOf_b__0(::RPG::GameCore::ItemConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMUTILS___C__DISPLAYCLASS12_0__ISDROPPINGONEOF_B__0_OFFSET))(this, a1);
		}

	};
}
