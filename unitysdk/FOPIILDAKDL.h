#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class VCameraNoiseChange; }

#define FOPIILDAKDL_CTOR_OFFSET UNITYSDK_OFFSET(0x15909400)
#define FOPIILDAKDL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15909410)
#define FOPIILDAKDL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15909450)
#define FOPIILDAKDL_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15909730)
#define FOPIILDAKDL_TICK_OFFSET UNITYSDK_OFFSET(0x15909780)

inline static constexpr unsigned int FOPIILDAKDL_TypeDefinitionIndex = 55799;

	class FOPIILDAKDL : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::VCameraNoiseChange* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::VCameraNoiseChange* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::VCameraNoiseChange*))((::PBYTE)hIl2Cpp + FOPIILDAKDL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOPIILDAKDL_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOPIILDAKDL_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOPIILDAKDL_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FOPIILDAKDL_TICK_OFFSET))(this, a1);
		}

	};
