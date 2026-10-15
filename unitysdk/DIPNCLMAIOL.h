#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PAJHIBDCGDG.h"
namespace RPG::GameCore { class AdventureHitConfig; }

#define DIPNCLMAIOL_CTOR_OFFSET UNITYSDK_OFFSET(0xF225EB0)

inline static constexpr unsigned int DIPNCLMAIOL_TypeDefinitionIndex = 57039;

	class DIPNCLMAIOL : public ::PAJHIBDCGDG
	{
	public:
		::RPG::GameCore::AdventureHitConfig* MBOFOKEJDDE; // 0x10
		::System::Single IODDGOBACDE; // 0x18
		::System::Single NAJMFEEKEJN; // 0x1C
		::System::Single AHEFMJDBGOL; // 0x20
		::System::Single AIGMFDHCBCD; // 0x24
		::System::Single GNFOONMKHMM; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIPNCLMAIOL_CTOR_OFFSET))(this);
		}

	};
