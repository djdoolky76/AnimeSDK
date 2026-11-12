#pragma once
#include "unitysdk/unitysdk.h"
class NFBKGADNBBO;
namespace RPG::GameCore { class SkillData; }

#define PEGEIFMEAKB_CTOR_OFFSET UNITYSDK_OFFSET(0x2CB90)
#define PEGEIFMEAKB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x2CBA0)

inline static constexpr unsigned int PEGEIFMEAKB_TypeDefinitionIndex = 58900;

	struct alignas(8) PEGEIFMEAKB
	{
		::NFBKGADNBBO* IEGBIPMGBPA; // 0x10
		::System::Void _ctor(::RPG::GameCore::SkillData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + PEGEIFMEAKB_CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEGEIFMEAKB_DISPOSE_OFFSET))(this);
		}

	};
