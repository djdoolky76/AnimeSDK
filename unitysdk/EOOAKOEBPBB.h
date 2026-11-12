#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJDFGMMMCMI.h"
#include "unitysdk/RPG/Client/GridFightUpdateSummarizer.h"
class AOFOEOIJEHF;
namespace RPG::Client { class GridFightGameModifier; }
namespace RPG::Client { class GridFightPreparationEffectEvent; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define EOOAKOEBPBB_CTOR_OFFSET UNITYSDK_OFFSET(0x164DBC70)
#define EOOAKOEBPBB_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0x164DB9B0)
#define EOOAKOEBPBB_UPDATEADDITEM_OFFSET UNITYSDK_OFFSET(0x164DBB60)
#define EOOAKOEBPBB_UPDATEAFTER_OFFSET UNITYSDK_OFFSET(0x164DBC00)

inline static constexpr unsigned int EOOAKOEBPBB_TypeDefinitionIndex = 66902;

	class EOOAKOEBPBB : public ::RPG::Client::GridFightUpdateSummarizer
	{
	public:
		::RPG::Client::GridFightGameModifier* GAJHLFGLCCK; // 0x10
		::RPG::Client::GridFightPreparationEffectEvent* FEMHOGGGPIG; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOOAKOEBPBB_CTOR_OFFSET))(this);
		}

		::System::Boolean IsConcernedWith(::JJDFGMMMCMI a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::JJDFGMMMCMI, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + EOOAKOEBPBB_ISCONCERNEDWITH_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateAddItem(::AOFOEOIJEHF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AOFOEOIJEHF*))((::PBYTE)hIl2Cpp + EOOAKOEBPBB_UPDATEADDITEM_OFFSET))(this, a1);
		}

		::System::Void UpdateAfter(::JJDFGMMMCMI a1)
		{
			return ((::System::Void(*)(::PVOID, ::JJDFGMMMCMI))((::PBYTE)hIl2Cpp + EOOAKOEBPBB_UPDATEAFTER_OFFSET))(this, a1);
		}

	};
