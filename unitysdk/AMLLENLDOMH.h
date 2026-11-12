#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LPCLNJFNJCL.h"
#include "unitysdk/RPG/GameCore/BodySize.h"
namespace RPG::Client { class CharacterRootMotionBakedData; }

#define AMLLENLDOMH_CTOR_OFFSET UNITYSDK_OFFSET(0x163F4330)
#define AMLLENLDOMH_KFNNNEBIFLL_OFFSET UNITYSDK_OFFSET(0x163F41C0)

inline static constexpr unsigned int AMLLENLDOMH_TypeDefinitionIndex = 54786;

	class AMLLENLDOMH : public ::LPCLNJFNJCL
	{
	public:
		::RPG::Client::CharacterRootMotionBakedData* APPIHABBCGK; // 0x48
		::System::Void _ctor(::RPG::GameCore::BodySize a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BodySize))((::PBYTE)hIl2Cpp + AMLLENLDOMH_CTOR_OFFSET))(this, a1);
		}

		::System::Single KFNNNEBIFLL()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLLENLDOMH_KFNNNEBIFLL_OFFSET))(this);
		}

	};
