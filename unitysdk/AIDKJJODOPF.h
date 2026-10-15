#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class RefreshFrameCapture; }
namespace RPG::GameCore { class TaskContext; }

#define AIDKJJODOPF_CTOR_OFFSET UNITYSDK_OFFSET(0xEB9C540)
#define AIDKJJODOPF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xEB9C570)

inline static constexpr unsigned int AIDKJJODOPF_TypeDefinitionIndex = 55291;

	class AIDKJJODOPF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RefreshFrameCapture* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RefreshFrameCapture*))((::PBYTE)hIl2Cpp + AIDKJJODOPF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIDKJJODOPF_ONTASKBEGIN_OFFSET))(this);
		}

	};
