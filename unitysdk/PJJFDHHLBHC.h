#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class AdvDestroyEntityAsync; }
namespace RPG::GameCore { class GroupEntityDestroyConfig; }
namespace RPG::GameCore { class RuntimeGroupInfo; }
namespace RPG::GameCore { class TaskContext; }

#define PJJFDHHLBHC_CALCFPLIKDM_OFFSET UNITYSDK_OFFSET(0xC28E350)
#define PJJFDHHLBHC_CTOR_OFFSET UNITYSDK_OFFSET(0xC28D610)
#define PJJFDHHLBHC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC28D620)
#define PJJFDHHLBHC_FGOEBAIECBN_OFFSET UNITYSDK_OFFSET(0xC28DE70)
#define PJJFDHHLBHC_FMGGDEPEIGH_OFFSET UNITYSDK_OFFSET(0xC28DB80)
#define PJJFDHHLBHC_IJOLENBNDDC_OFFSET UNITYSDK_OFFSET(0xC28DCB0)
#define PJJFDHHLBHC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC28D730)
#define PJJFDHHLBHC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC28D680)
#define PJJFDHHLBHC_TICK_OFFSET UNITYSDK_OFFSET(0xC28D6D0)

inline static constexpr unsigned int PJJFDHHLBHC_TypeDefinitionIndex = 52346;

	class PJJFDHHLBHC : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::AdvDestroyEntityAsync* OFKGLJOAMLD; // 0x20
		::System::Boolean IPIONBMLJEJ; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvDestroyEntityAsync* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvDestroyEntityAsync*))((::PBYTE)hIl2Cpp + PJJFDHHLBHC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJJFDHHLBHC_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PJJFDHHLBHC_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJJFDHHLBHC_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJJFDHHLBHC_ONTASKRESET_OFFSET))(this);
		}

		::System::Void FMGGDEPEIGH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PJJFDHHLBHC_FMGGDEPEIGH_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* FGOEBAIECBN(::RPG::GameCore::RuntimeGroupInfo* a1, ::RPG::GameCore::GroupEntityDestroyConfig* a2)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID, ::RPG::GameCore::RuntimeGroupInfo*, ::RPG::GameCore::GroupEntityDestroyConfig*))((::PBYTE)hIl2Cpp + PJJFDHHLBHC_FGOEBAIECBN_OFFSET))(this, a1, a2);
		}

		::System::Void IJOLENBNDDC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + PJJFDHHLBHC_IJOLENBNDDC_OFFSET))(this, a1, a2);
		}

		::System::Void CALCFPLIKDM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJJFDHHLBHC_CALCFPLIKDM_OFFSET))(this);
		}

	};
