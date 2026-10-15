#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
class CALKKONBGNM;
namespace RPG::GameCore { class TaskContext; }

#define IEEDNKMEFOF_CTOR_OFFSET UNITYSDK_OFFSET(0x15EE46E0)
#define IEEDNKMEFOF_DBDEDIOMFLC_OFFSET UNITYSDK_OFFSET(0x15EE4820)
#define IEEDNKMEFOF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15EE47B0)
#define IEEDNKMEFOF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15EE4AF0)

inline static constexpr unsigned int IEEDNKMEFOF_TypeDefinitionIndex = 53645;

	class IEEDNKMEFOF
	{
	public:
		::RPG::GameCore::StringHash FHJCMJMGKDP; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::CALKKONBGNM* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::CALKKONBGNM*))((::PBYTE)hIl2Cpp + IEEDNKMEFOF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEEDNKMEFOF_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEEDNKMEFOF_ONTASKRESET_OFFSET))(this);
		}

		::System::Void DBDEDIOMFLC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEEDNKMEFOF_DBDEDIOMFLC_OFFSET))(this);
		}

	};
