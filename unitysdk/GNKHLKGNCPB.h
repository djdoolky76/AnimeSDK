#pragma once
#include "unitysdk/unitysdk.h"
class LHLGEKFHPHA;
namespace RPG::GameCore { class TaskContext; }

#define GNKHLKGNCPB_CTOR_OFFSET UNITYSDK_OFFSET(0x15B150F0)
#define GNKHLKGNCPB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15B15120)
#define GNKHLKGNCPB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15B15170)
#define GNKHLKGNCPB_TICK_OFFSET UNITYSDK_OFFSET(0x15B151C0)

inline static constexpr unsigned int GNKHLKGNCPB_TypeDefinitionIndex = 52141;

	class GNKHLKGNCPB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::LHLGEKFHPHA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::LHLGEKFHPHA*))((::PBYTE)hIl2Cpp + GNKHLKGNCPB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNKHLKGNCPB_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNKHLKGNCPB_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GNKHLKGNCPB_TICK_OFFSET))(this, a1);
		}

	};
