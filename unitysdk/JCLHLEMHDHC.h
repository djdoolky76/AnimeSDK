#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class CameraFollowEntityTimeScale; }
namespace RPG::GameCore { class TaskContext; }

#define JCLHLEMHDHC_CTOR_OFFSET UNITYSDK_OFFSET(0x169662A0)
#define JCLHLEMHDHC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x169662D0)

inline static constexpr unsigned int JCLHLEMHDHC_TypeDefinitionIndex = 56082;

	class JCLHLEMHDHC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CameraFollowEntityTimeScale* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CameraFollowEntityTimeScale*))((::PBYTE)hIl2Cpp + JCLHLEMHDHC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCLHLEMHDHC_ONTASKBEGIN_OFFSET))(this);
		}

	};
