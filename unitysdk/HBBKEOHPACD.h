#pragma once
#include "unitysdk/unitysdk.h"
class FCCIDFIMONC;
namespace RPG::GameCore { class TaskContext; }

#define HBBKEOHPACD_CTOR_OFFSET UNITYSDK_OFFSET(0x15BD94C0)
#define HBBKEOHPACD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15BD94F0)

inline static constexpr unsigned int HBBKEOHPACD_TypeDefinitionIndex = 55257;

	class HBBKEOHPACD
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::FCCIDFIMONC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::FCCIDFIMONC*))((::PBYTE)hIl2Cpp + HBBKEOHPACD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBBKEOHPACD_ONTASKBEGIN_OFFSET))(this);
		}

	};
