#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class ItemConfig; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define RPG_CLIENT_GROWTHMODULE___C__DISPLAYCLASS34_0_CTOR_OFFSET UNITYSDK_OFFSET(0xDD135B0)
#define RPG_CLIENT_GROWTHMODULE___C__DISPLAYCLASS34_0___SORTANDCLEAN_B__0_OFFSET UNITYSDK_OFFSET(0xDD165F0)

namespace RPG::Client
{
	inline static constexpr unsigned int GrowthModule___c__DisplayClass34_0_TypeDefinitionIndex = 67522;

	class GrowthModule___c__DisplayClass34_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* removeMaterials; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHMODULE___C__DISPLAYCLASS34_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __SortAndClean_b__0(::RPG::GameCore::ItemConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHMODULE___C__DISPLAYCLASS34_0___SORTANDCLEAN_B__0_OFFSET))(this, a1);
		}

	};
}
