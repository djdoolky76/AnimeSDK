#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvSetHoyoGroupNpcAnimSpeedRatio; }
namespace RPG::GameCore { class TaskContext; }

#define LGJJNBBKLBI_CTOR_OFFSET UNITYSDK_OFFSET(0xB692ED0)
#define LGJJNBBKLBI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB692F00)

inline static constexpr unsigned int LGJJNBBKLBI_TypeDefinitionIndex = 52495;

	class LGJJNBBKLBI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvSetHoyoGroupNpcAnimSpeedRatio* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvSetHoyoGroupNpcAnimSpeedRatio*))((::PBYTE)hIl2Cpp + LGJJNBBKLBI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGJJNBBKLBI_ONTASKBEGIN_OFFSET))(this);
		}

	};
