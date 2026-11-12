#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class GHPLBJPHBED;
namespace RPG::GameCore { class TaskContext; }

#define NIIKEKCHGAG_CTOR_OFFSET UNITYSDK_OFFSET(0xC4CFA30)
#define NIIKEKCHGAG_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC4CFA40)
#define NIIKEKCHGAG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC4CFA90)
#define NIIKEKCHGAG_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC4CFB10)
#define NIIKEKCHGAG_TICK_OFFSET UNITYSDK_OFFSET(0xC4CFB60)

inline static constexpr unsigned int NIIKEKCHGAG_TypeDefinitionIndex = 54235;

	class NIIKEKCHGAG : public ::GELIALJDFBL
	{
	public:
		::GHPLBJPHBED* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::GHPLBJPHBED* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::GHPLBJPHBED*))((::PBYTE)hIl2Cpp + NIIKEKCHGAG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIIKEKCHGAG_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIIKEKCHGAG_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIIKEKCHGAG_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NIIKEKCHGAG_TICK_OFFSET))(this, a1);
		}

	};
