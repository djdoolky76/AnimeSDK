#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class OpenTarotBookletPageForCharater; }
namespace RPG::GameCore { class TaskContext; }

#define HDLNFMINMBN_CTOR_OFFSET UNITYSDK_OFFSET(0x15C30B80)
#define HDLNFMINMBN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15C30BB0)

inline static constexpr unsigned int HDLNFMINMBN_TypeDefinitionIndex = 53330;

	class HDLNFMINMBN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::OpenTarotBookletPageForCharater* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::OpenTarotBookletPageForCharater*))((::PBYTE)hIl2Cpp + HDLNFMINMBN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDLNFMINMBN_ONTASKBEGIN_OFFSET))(this);
		}

	};
