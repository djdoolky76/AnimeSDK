#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class LockPlayerControl; }
namespace RPG::GameCore { class TaskContext; }

#define MFDJOHFILED_CTOR_OFFSET UNITYSDK_OFFSET(0xC1A3110)
#define MFDJOHFILED_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC1A3150)
#define MFDJOHFILED_EODFKPDEHNI_OFFSET UNITYSDK_OFFSET(0xC1A31E0)
#define MFDJOHFILED_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xC1A3140)
#define MFDJOHFILED_ONSKIP_OFFSET UNITYSDK_OFFSET(0xC1A3190)
#define MFDJOHFILED_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC1A3440)

inline static constexpr unsigned int MFDJOHFILED_TypeDefinitionIndex = 54147;

	class MFDJOHFILED
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::LockPlayerControl* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::LockPlayerControl*))((::PBYTE)hIl2Cpp + MFDJOHFILED_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_ForceSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MFDJOHFILED_GET_FORCESKIP_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFDJOHFILED_DISPOSE_OFFSET))(this);
		}

		::System::Void OnSkip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFDJOHFILED_ONSKIP_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFDJOHFILED_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void EODFKPDEHNI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFDJOHFILED_EODFKPDEHNI_OFFSET))(this);
		}

	};
