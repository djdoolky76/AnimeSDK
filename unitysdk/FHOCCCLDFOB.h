#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class LockCamera; }
namespace RPG::GameCore { class TaskContext; }

#define FHOCCCLDFOB_CTOR_OFFSET UNITYSDK_OFFSET(0x15791B30)
#define FHOCCCLDFOB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15791B70)
#define FHOCCCLDFOB_FAHJECBKFBL_OFFSET UNITYSDK_OFFSET(0x15791C10)
#define FHOCCCLDFOB_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x15791B60)
#define FHOCCCLDFOB_ONSKIP_OFFSET UNITYSDK_OFFSET(0x15791BB0)
#define FHOCCCLDFOB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15791D90)

inline static constexpr unsigned int FHOCCCLDFOB_TypeDefinitionIndex = 52983;

	class FHOCCCLDFOB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::LockCamera* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::LockCamera*))((::PBYTE)hIl2Cpp + FHOCCCLDFOB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_ForceSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FHOCCCLDFOB_GET_FORCESKIP_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHOCCCLDFOB_DISPOSE_OFFSET))(this);
		}

		::System::Void OnSkip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHOCCCLDFOB_ONSKIP_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHOCCCLDFOB_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void FAHJECBKFBL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHOCCCLDFOB_FAHJECBKFBL_OFFSET))(this);
		}

	};
