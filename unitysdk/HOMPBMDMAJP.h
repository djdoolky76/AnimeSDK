#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ForceFiveDimLoadModel; }
namespace RPG::GameCore { class TaskContext; }

#define HOMPBMDMAJP_CTOR_OFFSET UNITYSDK_OFFSET(0x15DB0880)
#define HOMPBMDMAJP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15DB08B0)
#define HOMPBMDMAJP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15DB08F0)
#define HOMPBMDMAJP_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15DB0D70)

inline static constexpr unsigned int HOMPBMDMAJP_TypeDefinitionIndex = 52899;

	class HOMPBMDMAJP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ForceFiveDimLoadModel* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ForceFiveDimLoadModel*))((::PBYTE)hIl2Cpp + HOMPBMDMAJP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOMPBMDMAJP_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOMPBMDMAJP_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOMPBMDMAJP_ONTASKRESET_OFFSET))(this);
		}

	};
