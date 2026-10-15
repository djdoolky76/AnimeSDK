#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftChipTraitType.h"
#include "unitysdk/System/Object.h"
class DGKFMEELDNN_JBMAEFHONHA;
class EEFEDNHNOJO;
class PJPPGJEDCOG;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyCollection_1; }

#define DGKFMEELDNN_JBMAEFHONHA___C__DISPLAYCLASS9_0_CTOR_OFFSET UNITYSDK_OFFSET(0xE844080)
#define DGKFMEELDNN_JBMAEFHONHA___C__DISPLAYCLASS9_0___CREATETRAITITEMS_B__0_OFFSET UNITYSDK_OFFSET(0xE844420)

inline static constexpr unsigned int DGKFMEELDNN_JBMAEFHONHA___c__DisplayClass9_0_TypeDefinitionIndex = 79526;

	class DGKFMEELDNN_JBMAEFHONHA___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::IReadOnlyCollection_1<::RPG::Client::MechCraft::MechCraftChipTraitType>* selectedTraitTypes; // 0x10
		::System::Collections::Generic::HashSet_1<::RPG::Client::MechCraft::MechCraftChipTraitType>* availableTypes; // 0x18
		::DGKFMEELDNN_JBMAEFHONHA* __4__this; // 0x20
		::PJPPGJEDCOG* requirementConfig; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGKFMEELDNN_JBMAEFHONHA___C__DISPLAYCLASS9_0_CTOR_OFFSET))(this);
		}

		::EEFEDNHNOJO* __CreateTraitItems_b__0(::RPG::Client::MechCraft::MechCraftChipTraitType a1)
		{
			return ((::EEFEDNHNOJO*(*)(::PVOID, ::RPG::Client::MechCraft::MechCraftChipTraitType))((::PBYTE)hIl2Cpp + DGKFMEELDNN_JBMAEFHONHA___C__DISPLAYCLASS9_0___CREATETRAITITEMS_B__0_OFFSET))(this, a1);
		}

	};
