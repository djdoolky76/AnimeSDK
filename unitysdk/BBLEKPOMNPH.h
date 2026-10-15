#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetTrackPhotoStandardSpeed; }
namespace RPG::GameCore { class TaskContext; }

#define BBLEKPOMNPH_CTOR_OFFSET UNITYSDK_OFFSET(0x15E83FF0)
#define BBLEKPOMNPH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15E84020)

inline static constexpr unsigned int BBLEKPOMNPH_TypeDefinitionIndex = 53257;

	class BBLEKPOMNPH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetTrackPhotoStandardSpeed* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetTrackPhotoStandardSpeed*))((::PBYTE)hIl2Cpp + BBLEKPOMNPH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBLEKPOMNPH_ONTASKBEGIN_OFFSET))(this);
		}

	};
