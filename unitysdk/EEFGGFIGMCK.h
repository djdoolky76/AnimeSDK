#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPGTools/Timeline/StoryLightCharacterGroup.h"
namespace RPG::Client { class PerformanceManager; }
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EEFGGFIGMCK_CTOR_OFFSET UNITYSDK_OFFSET(0x13A2B7B0)
#define EEFGGFIGMCK_FNJCDCFNBDB_OFFSET UNITYSDK_OFFSET(0x13A2C030)
#define EEFGGFIGMCK_IMCPOJIMBOC_OFFSET UNITYSDK_OFFSET(0x13A2B860)
#define EEFGGFIGMCK_KFCHLCHINDI_OFFSET UNITYSDK_OFFSET(0x13A2C220)

inline static constexpr unsigned int EEFGGFIGMCK_TypeDefinitionIndex = 60705;

	class EEFGGFIGMCK : public ::System::Object
	{
	public:
		::RPG::Client::PerformanceManager* CFKHNPGEAJA; // 0x10
		::System::Collections::Generic::HashSet_1<::RPG::GameCore::GameEntity*>* FDEFJJJNGKI; // 0x18
		::System::Void _ctor(::RPG::Client::PerformanceManager* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PerformanceManager*))((::PBYTE)hIl2Cpp + EEFGGFIGMCK_CTOR_OFFSET))(this, a1);
		}

		::System::Void IMCPOJIMBOC(::System::Boolean a1, ::System::Collections::Generic::List_1<::RPGTools::Timeline::StoryLightCharacterGroup>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Collections::Generic::List_1<::RPGTools::Timeline::StoryLightCharacterGroup>*))((::PBYTE)hIl2Cpp + EEFGGFIGMCK_IMCPOJIMBOC_OFFSET))(this, a1, a2);
		}

		::System::Void FNJCDCFNBDB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEFGGFIGMCK_FNJCDCFNBDB_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* KFCHLCHINDI(::RPGTools::Timeline::StoryLightCharacterGroup a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID, ::RPGTools::Timeline::StoryLightCharacterGroup))((::PBYTE)hIl2Cpp + EEFGGFIGMCK_KFCHLCHINDI_OFFSET))(this, a1);
		}

	};
