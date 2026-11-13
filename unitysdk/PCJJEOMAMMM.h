#pragma once
#include "unitysdk/unitysdk.h"
class GELIALJDFBL;
namespace RPG::GameCore { class RefreshMapRotationVolumeUsable; }
namespace RPG::GameCore { class TaskContext; }

#define PCJJEOMAMMM_CTOR_OFFSET UNITYSDK_OFFSET(0x1AAD27B0)
#define PCJJEOMAMMM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AAD27E0)
#define PCJJEOMAMMM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1AAD28B0)

inline static constexpr unsigned int PCJJEOMAMMM_TypeDefinitionIndex = 54156;

	class PCJJEOMAMMM
	{
	public:
		::GELIALJDFBL* FCOLIHKCCLG; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RefreshMapRotationVolumeUsable* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RefreshMapRotationVolumeUsable*))((::PBYTE)hIl2Cpp + PCJJEOMAMMM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCJJEOMAMMM_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCJJEOMAMMM_ONTASKBEGIN_OFFSET))(this);
		}

	};
