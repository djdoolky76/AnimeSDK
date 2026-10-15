#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AnimationZone; }

#define LLIAIIOKNFI_EJNKHBFPJMI_BKOKENLPBAD_OFFSET UNITYSDK_OFFSET(0x1A340)
#define LLIAIIOKNFI_EJNKHBFPJMI_CTOR_OFFSET UNITYSDK_OFFSET(0x1A330)

inline static constexpr unsigned int LLIAIIOKNFI_EJNKHBFPJMI_TypeDefinitionIndex = 55915;

	struct alignas(4) LLIAIIOKNFI_EJNKHBFPJMI
	{
		::System::Int32 EAJBNHGHPNM; // 0x10
		::System::Single LGJKMHKINMD; // 0x14
		::System::Void _ctor(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + LLIAIIOKNFI_EJNKHBFPJMI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean BKOKENLPBAD(::RPG::GameCore::AnimationZone* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AnimationZone*))((::PBYTE)hIl2Cpp + LLIAIIOKNFI_EJNKHBFPJMI_BKOKENLPBAD_OFFSET))(this, a1);
		}

	};
