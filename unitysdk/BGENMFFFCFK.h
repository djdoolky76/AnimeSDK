#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/TeleportSelectionType.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Config { class ConfigTeleportSelectionTrait; }
namespace System { class String; }

#define BGENMFFFCFK_BJAEKIALDEA_OFFSET UNITYSDK_OFFSET(0x15075BD0)

inline static constexpr unsigned int BGENMFFFCFK_TypeDefinitionIndex = 90871;

struct alignas(8) BGENMFFFCFK
{
	::MoleMole::Config::TeleportSelectionType NOOLOILNGPL; // 0x10
	::System::Single AHBGMKJJAJA; // 0x14
	::System::Single KGFNJOIBCBB; // 0x18
	::System::Single IOEAFGAGGHJ; // 0x1C
	::System::Boolean ALKGIPIPKBF; // 0x20
	::System::Byte _padding0[0x7];
	::System::String* JOGOCJPBDHH; // 0x28
	::System::String* PLGCIEMGOOB; // 0x30

	/*
	static ::BGENMFFFCFK BJAEKIALDEA(::MoleMole::Config::ConfigTeleportSelectionTrait* CGMNNBDIGDJ)
	{
		return ((::BGENMFFFCFK(*)(::MoleMole::Config::ConfigTeleportSelectionTrait*))((::PBYTE)hIl2Cpp + BGENMFFFCFK_BJAEKIALDEA_OFFSET))(CGMNNBDIGDJ);
	}
	*/
};
