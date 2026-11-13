#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
class EKFMIDBJDIA;
class GELIALJDFBL;
namespace RPG::GameCore { class AdvSetupTrainCollectionSystem; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OBFOPOMJDKN_CTOR_OFFSET UNITYSDK_OFFSET(0x1AB7D770)
#define OBFOPOMJDKN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AB7D800)
#define OBFOPOMJDKN_FJGBCGPLLDF_OFFSET UNITYSDK_OFFSET(0x1AB7DBB0)
#define OBFOPOMJDKN_ICEHMGOIMJA_OFFSET UNITYSDK_OFFSET(0x1AB7E290)
#define OBFOPOMJDKN_KNKEOEJJAPH_OFFSET UNITYSDK_OFFSET(0x1AB7DFF0)
#define OBFOPOMJDKN_NIDABEMHCDI_OFFSET UNITYSDK_OFFSET(0x1AB7E660)
#define OBFOPOMJDKN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1AB7DE10)
#define OBFOPOMJDKN_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1AB7D850)
#define OBFOPOMJDKN_TICK_OFFSET UNITYSDK_OFFSET(0x1AB7DE60)

inline static constexpr unsigned int OBFOPOMJDKN_TypeDefinitionIndex = 53614;

	class OBFOPOMJDKN : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x18
		::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::GameCore::ELevelPerformanceType>>* KNOHBIGNCEL; // 0x20
		::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::GameCore::ELevelPerformanceType>>* FNIKPKBOCJF; // 0x28
		::RPG::GameCore::AdvSetupTrainCollectionSystem* IGHAHBNLIJA; // 0x30
		::GELIALJDFBL* FCFAFKDNHCJ; // 0x38
		::GELIALJDFBL* KJNAMCMFCPF; // 0x40
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvSetupTrainCollectionSystem* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvSetupTrainCollectionSystem*))((::PBYTE)hIl2Cpp + OBFOPOMJDKN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBFOPOMJDKN_DISPOSE_OFFSET))(this);
		}

		::System::Void FJGBCGPLLDF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBFOPOMJDKN_FJGBCGPLLDF_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBFOPOMJDKN_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBFOPOMJDKN_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OBFOPOMJDKN_TICK_OFFSET))(this, a1);
		}

		::System::Void KNKEOEJJAPH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBFOPOMJDKN_KNKEOEJJAPH_OFFSET))(this);
		}

		::System::Void ICEHMGOIMJA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBFOPOMJDKN_ICEHMGOIMJA_OFFSET))(this);
		}

		::System::Void NIDABEMHCDI(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + OBFOPOMJDKN_NIDABEMHCDI_OFFSET))(this, a1);
		}

	};
