#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
class EKFMIDBJDIA;
class GELIALJDFBL;
namespace RPG::GameCore { class AdvSetupTrainCollectionSystem; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { class KeyValuePair; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OBFOPOMJDKN_CTOR_OFFSET UNITYSDK_OFFSET(0xBD3D650)
#define OBFOPOMJDKN_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBD3D6E0)
#define OBFOPOMJDKN_FJGBCGPLLDF_OFFSET UNITYSDK_OFFSET(0xBD3DA90)
#define OBFOPOMJDKN_ICEHMGOIMJA_OFFSET UNITYSDK_OFFSET(0xBD3E220)
#define OBFOPOMJDKN_KNKEOEJJAPH_OFFSET UNITYSDK_OFFSET(0xBD3DF80)
#define OBFOPOMJDKN_NIDABEMHCDI_OFFSET UNITYSDK_OFFSET(0xBD3E5F0)
#define OBFOPOMJDKN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBD3DCF0)
#define OBFOPOMJDKN_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBD3D730)
#define OBFOPOMJDKN_TICK_OFFSET UNITYSDK_OFFSET(0xBD3DD40)

	class OBFOPOMJDKN : public ::GELIALJDFBL
	{
	public:
		::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair*>* FNIKPKBOCJF; // 0x18
		::GELIALJDFBL* KJNAMCMFCPF; // 0x20
		::RPG::GameCore::AdvSetupTrainCollectionSystem* IGHAHBNLIJA; // 0x28
		::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair*>* KNOHBIGNCEL; // 0x30
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x38
		::GELIALJDFBL* FCFAFKDNHCJ; // 0x40
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
