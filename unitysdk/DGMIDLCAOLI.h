#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class UnlockMainStreamingSource; }

#define DGMIDLCAOLI_CTOR_OFFSET UNITYSDK_OFFSET(0xE84A0D0)
#define DGMIDLCAOLI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE84A100)

inline static constexpr unsigned int DGMIDLCAOLI_TypeDefinitionIndex = 58843;

	class DGMIDLCAOLI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::UnlockMainStreamingSource* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::UnlockMainStreamingSource*))((::PBYTE)hIl2Cpp + DGMIDLCAOLI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGMIDLCAOLI_ONTASKBEGIN_OFFSET))(this);
		}

	};
