#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class PlayTarotBookTalk; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define JNLJBBDDJDA_CTOR_OFFSET UNITYSDK_OFFSET(0xB2854D0)
#define JNLJBBDDJDA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB285690)
#define JNLJBBDDJDA_IEPEPJBGIMM_OFFSET UNITYSDK_OFFSET(0xB285750)
#define JNLJBBDDJDA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB2854E0)
#define JNLJBBDDJDA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB2855E0)
#define JNLJBBDDJDA_TICK_OFFSET UNITYSDK_OFFSET(0xB285630)

inline static constexpr unsigned int JNLJBBDDJDA_TypeDefinitionIndex = 58287;

	class JNLJBBDDJDA : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::PlayTarotBookTalk* OFKGLJOAMLD; // 0x18
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PlayTarotBookTalk* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PlayTarotBookTalk*))((::PBYTE)hIl2Cpp + JNLJBBDDJDA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNLJBBDDJDA_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNLJBBDDJDA_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JNLJBBDDJDA_TICK_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNLJBBDDJDA_DISPOSE_OFFSET))(this);
		}

		::System::Void IEPEPJBGIMM(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JNLJBBDDJDA_IEPEPJBGIMM_OFFSET))(this, a1);
		}

	};
