#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class FreeStyleState; }
namespace System { class String; }

#define AINLAHLFEII_PONAMNMPCJJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x2305D00)
#define AINLAHLFEII_PONAMNMPCJJ_CTOR_2_OFFSET UNITYSDK_OFFSET(0x2305D10)
#define AINLAHLFEII_PONAMNMPCJJ_CTOR_OFFSET UNITYSDK_OFFSET(0x2305CE0)

inline static constexpr unsigned int AINLAHLFEII_PONAMNMPCJJ_TypeDefinitionIndex = 57281;

	struct alignas(8) AINLAHLFEII_PONAMNMPCJJ
	{
		::System::Boolean EPAOGCJLFHJ; // 0x10
		::System::Byte _padding0[0x3];
		::System::Int32 NOIIIOKMIIN; // 0x14
		::Il2CppArray<::System::UInt32>* ADACNDMHECC; // 0x18
		::RPG::GameCore::FreeStyleState* LFHLPEJAMLE; // 0x20
		::System::Void _ctor(::RPG::GameCore::FreeStyleState* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FreeStyleState*))((::PBYTE)hIl2Cpp + AINLAHLFEII_PONAMNMPCJJ_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + AINLAHLFEII_PONAMNMPCJJ_CTOR_1_OFFSET))(this, a1, a2);
		}

		/*
		::System::Void _ctor_2(::AINLAHLFEII_PONAMNMPCJJ a1, ::Il2CppArray<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::AINLAHLFEII_PONAMNMPCJJ, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + AINLAHLFEII_PONAMNMPCJJ_CTOR_2_OFFSET))(this, a1, a2);
		}
		*/

	};
