#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class UnLockPlayerControl; }

#define AACJOABDDHH_CTOR_OFFSET UNITYSDK_OFFSET(0xB0C1810)
#define AACJOABDDHH_EJIMKKKBODI_OFFSET UNITYSDK_OFFSET(0xB0C1890)
#define AACJOABDDHH_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xB0C1800)
#define AACJOABDDHH_JBKBBNFJAKN_OFFSET UNITYSDK_OFFSET(0xB0C1AE0)
#define AACJOABDDHH_ONSKIP_OFFSET UNITYSDK_OFFSET(0xB0C1B30)
#define AACJOABDDHH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB0C1840)

inline static constexpr unsigned int AACJOABDDHH_TypeDefinitionIndex = 53459;

	class AACJOABDDHH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::UnLockPlayerControl* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::UnLockPlayerControl*))((::PBYTE)hIl2Cpp + AACJOABDDHH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_ForceSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AACJOABDDHH_GET_FORCESKIP_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AACJOABDDHH_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void JBKBBNFJAKN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AACJOABDDHH_JBKBBNFJAKN_OFFSET))(this);
		}

		::System::Void OnSkip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AACJOABDDHH_ONSKIP_OFFSET))(this);
		}

		::System::Void EJIMKKKBODI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AACJOABDDHH_EJIMKKKBODI_OFFSET))(this);
		}

	};
