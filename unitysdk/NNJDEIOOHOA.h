#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ENEIHJJPNPI;
namespace RPG::Client::LittleGame::RoadRash { class RoadRashAbilityCoolDown; }
namespace RPG::Client::LittleGame::RoadRash { class RoadRashAbilityValueModifer; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class SortedSet_1; }

#define NNJDEIOOHOA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E054BD0)

inline static constexpr unsigned int NNJDEIOOHOA_TypeDefinitionIndex = 43864;

	class NNJDEIOOHOA : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::LittleGame::RoadRash::RoadRashAbilityCoolDown*>* BGBHAEAPIBP; // 0x10
		::ENEIHJJPNPI* KFKGOMIMNLD; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* NKCLBBFDEEI; // 0x20
		::System::Collections::Generic::SortedSet_1<::RPG::Client::LittleGame::RoadRash::RoadRashAbilityValueModifer*>* FPNOGCIHKLG; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* OLJCAJMFJPO; // 0x30
		::System::Single FNHKOMIHOLF; // 0x38
		::System::Single IBMIMOHECGC; // 0x3C
		::System::Single HDBNIPDGIHC; // 0x40
		::System::Single MHJLHGDCANC; // 0x44
		::System::Single DICIDOOEMOK; // 0x48
		::System::Single GCCDIAODEJP; // 0x4C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNJDEIOOHOA_CTOR_OFFSET))(this);
		}

	};
