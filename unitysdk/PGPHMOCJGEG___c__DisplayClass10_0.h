#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class LevelLittleGameInfo; }

#define PGPHMOCJGEG___C__DISPLAYCLASS10_0_CTOR_OFFSET UNITYSDK_OFFSET(0xC22E740)
#define PGPHMOCJGEG___C__DISPLAYCLASS10_0__CREATE_B__0_OFFSET UNITYSDK_OFFSET(0xC22EDC0)

inline static constexpr unsigned int PGPHMOCJGEG___c__DisplayClass10_0_TypeDefinitionIndex = 64207;

	class PGPHMOCJGEG___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::System::UInt32 containerInstanceID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGPHMOCJGEG___C__DISPLAYCLASS10_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _Create_b__0(::RPG::GameCore::LevelLittleGameInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::LevelLittleGameInfo*))((::PBYTE)hIl2Cpp + PGPHMOCJGEG___C__DISPLAYCLASS10_0__CREATE_B__0_OFFSET))(this, a1);
		}

	};
