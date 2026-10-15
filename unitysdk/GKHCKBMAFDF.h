#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TryStartConnectUltraSkillFrameCapture; }

#define GKHCKBMAFDF_CTOR_OFFSET UNITYSDK_OFFSET(0x15A97A40)
#define GKHCKBMAFDF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15A97A70)

inline static constexpr unsigned int GKHCKBMAFDF_TypeDefinitionIndex = 55772;

	class GKHCKBMAFDF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TryStartConnectUltraSkillFrameCapture* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TryStartConnectUltraSkillFrameCapture*))((::PBYTE)hIl2Cpp + GKHCKBMAFDF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKHCKBMAFDF_ONTASKBEGIN_OFFSET))(this);
		}

	};
