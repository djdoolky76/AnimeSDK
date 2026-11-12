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

#define OBFOPOMJDKN_CTOR_OFFSET UNITYSDK_OFFSET(0xC6418A0)
#define OBFOPOMJDKN_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC641930)
#define OBFOPOMJDKN_FJGBCGPLLDF_OFFSET UNITYSDK_OFFSET(0xC641CE0)
#define OBFOPOMJDKN_ICEHMGOIMJA_OFFSET UNITYSDK_OFFSET(0xC6423C0)
#define OBFOPOMJDKN_KNKEOEJJAPH_OFFSET UNITYSDK_OFFSET(0xC642120)
#define OBFOPOMJDKN_NIDABEMHCDI_OFFSET UNITYSDK_OFFSET(0xC642790)
#define OBFOPOMJDKN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC641F40)
#define OBFOPOMJDKN_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC641980)
#define OBFOPOMJDKN_TICK_OFFSET UNITYSDK_OFFSET(0xC641F90)

inline static constexpr unsigned int OBFOPOMJDKN_TypeDefinitionIndex = 53614;

	class OBFOPOMJDKN : public ::GELIALJDFBL
	{
	public:
		::GELIALJDFBL* FCFAFKDNHCJ; // 0x18
		::GELIALJDFBL* KJNAMCMFCPF; // 0x20
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x28
		::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::GameCore::ELevelPerformanceType>>* KNOHBIGNCEL; // 0x30
		::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::GameCore::ELevelPerformanceType>>* FNIKPKBOCJF; // 0x38
		::RPG::GameCore::AdvSetupTrainCollectionSystem* IGHAHBNLIJA; // 0x40
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
