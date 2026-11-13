#pragma once
#include "unitysdk/unitysdk.h"
class INFBEJJNIJO;
namespace RPG::GameCore { class ReplaceFrameCaptureUIByCondition; }
namespace RPG::GameCore { class TaskContext; }

#define JJKIOLKPCMF_CTOR_OFFSET UNITYSDK_OFFSET(0x17B08300)
#define JJKIOLKPCMF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17B08510)
#define JJKIOLKPCMF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17B086B0)

inline static constexpr unsigned int JJKIOLKPCMF_TypeDefinitionIndex = 57600;

	class JJKIOLKPCMF
	{
	public:
		::INFBEJJNIJO* HBKCICMELMM; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ReplaceFrameCaptureUIByCondition* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ReplaceFrameCaptureUIByCondition*))((::PBYTE)hIl2Cpp + JJKIOLKPCMF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJKIOLKPCMF_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJKIOLKPCMF_ONTASKBEGIN_OFFSET))(this);
		}

	};
