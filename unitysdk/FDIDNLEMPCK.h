#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/RPG/GameCore/ArrayPoolWrapper_1.h"
class HIOAMIPNLIN;
namespace RPG::GameCore { class RemoveModifier; }
namespace RPG::GameCore { class TaskContext; }

#define FDIDNLEMPCK_CTOR_OFFSET UNITYSDK_OFFSET(0x156D8F50)
#define FDIDNLEMPCK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x156D8F60)
#define FDIDNLEMPCK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x156D8FA0)
#define FDIDNLEMPCK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x156D95D0)
#define FDIDNLEMPCK_TICK_OFFSET UNITYSDK_OFFSET(0x156D9620)

inline static constexpr unsigned int FDIDNLEMPCK_TypeDefinitionIndex = 55310;

	class FDIDNLEMPCK : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::RemoveModifier* OFKGLJOAMLD; // 0x20
		::RPG::GameCore::ArrayPoolWrapper_1<::HIOAMIPNLIN*> HEJKAKEJCMP; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RemoveModifier* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RemoveModifier*))((::PBYTE)hIl2Cpp + FDIDNLEMPCK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDIDNLEMPCK_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDIDNLEMPCK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDIDNLEMPCK_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FDIDNLEMPCK_TICK_OFFSET))(this, a1);
		}

	};
