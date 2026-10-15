#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class LockPhotoIdentifyHint; }
namespace RPG::GameCore { class TaskContext; }

#define HKEOEKMBAAL_CTOR_OFFSET UNITYSDK_OFFSET(0x15D430A0)
#define HKEOEKMBAAL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15D430D0)

inline static constexpr unsigned int HKEOEKMBAAL_TypeDefinitionIndex = 52987;

	class HKEOEKMBAAL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::LockPhotoIdentifyHint* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::LockPhotoIdentifyHint*))((::PBYTE)hIl2Cpp + HKEOEKMBAAL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKEOEKMBAAL_ONTASKBEGIN_OFFSET))(this);
		}

	};
