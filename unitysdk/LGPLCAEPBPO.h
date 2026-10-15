#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LHJPMDPJPEC.h"
class JMOHKKCNCMA;
namespace RPG::GameCore { class MarbleByCheckSealLevel; }

#define LGPLCAEPBPO_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8E0860)
#define LGPLCAEPBPO_KHNFOOKHOJF_OFFSET UNITYSDK_OFFSET(0x1C8E0880)

inline static constexpr unsigned int LGPLCAEPBPO_TypeDefinitionIndex = 43154;

	class LGPLCAEPBPO : public ::LHJPMDPJPEC
	{
	public:
		::RPG::GameCore::MarbleByCheckSealLevel* IGHAHBNLIJA; // 0x30
		::System::Void _ctor(::RPG::GameCore::MarbleByCheckSealLevel* a1, ::JMOHKKCNCMA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleByCheckSealLevel*, ::JMOHKKCNCMA*))((::PBYTE)hIl2Cpp + LGPLCAEPBPO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean KHNFOOKHOJF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LGPLCAEPBPO_KHNFOOKHOJF_OFFSET))(this);
		}

	};
