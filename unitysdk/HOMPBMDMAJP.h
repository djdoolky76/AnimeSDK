#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ForceFiveDimLoadModel; }
namespace RPG::GameCore { class TaskContext; }

#define HOMPBMDMAJP_CTOR_OFFSET UNITYSDK_OFFSET(0x1AF2A400)
#define HOMPBMDMAJP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AF2A430)
#define HOMPBMDMAJP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1AF2A470)
#define HOMPBMDMAJP_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1AF2A8F0)

inline static constexpr unsigned int HOMPBMDMAJP_TypeDefinitionIndex = 54055;

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
