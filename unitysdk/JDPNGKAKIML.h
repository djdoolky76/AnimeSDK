#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ResetActionCountDown; }
namespace RPG::GameCore { class TaskContext; }

#define JDPNGKAKIML_CTOR_OFFSET UNITYSDK_OFFSET(0xB95AB60)
#define JDPNGKAKIML_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB95AB90)

inline static constexpr unsigned int JDPNGKAKIML_TypeDefinitionIndex = 55970;

	class JDPNGKAKIML
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ResetActionCountDown* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ResetActionCountDown*))((::PBYTE)hIl2Cpp + JDPNGKAKIML_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDPNGKAKIML_ONTASKBEGIN_OFFSET))(this);
		}

	};
