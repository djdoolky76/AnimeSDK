#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ICHIALIFCIJ.h"
class DCCEKONOPCK;
namespace RPG::GameCore { class GameEntity; }

#define OLOBOACDIIL_CJBALLGMNAA_OFFSET UNITYSDK_OFFSET(0xBF14690)
#define OLOBOACDIIL_CTOR_OFFSET UNITYSDK_OFFSET(0xBF14950)
#define OLOBOACDIIL_IPAOOLDOOIN_OFFSET UNITYSDK_OFFSET(0xBF14820)
#define OLOBOACDIIL_KADCICGJFLJ_OFFSET UNITYSDK_OFFSET(0xBF144F0)

inline static constexpr unsigned int OLOBOACDIIL_TypeDefinitionIndex = 80829;

	class OLOBOACDIIL : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLOBOACDIIL_CTOR_OFFSET))(this);
		}

		::System::Void KADCICGJFLJ(::DCCEKONOPCK* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::DCCEKONOPCK*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + OLOBOACDIIL_KADCICGJFLJ_OFFSET))(this, a1, a2);
		}

		::System::Void CJBALLGMNAA(::DCCEKONOPCK* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::DCCEKONOPCK*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + OLOBOACDIIL_CJBALLGMNAA_OFFSET))(this, a1, a2);
		}

		::System::Void IPAOOLDOOIN(::DCCEKONOPCK* a1, ::ICHIALIFCIJ a2)
		{
			return ((::System::Void(*)(::PVOID, ::DCCEKONOPCK*, ::ICHIALIFCIJ))((::PBYTE)hIl2Cpp + OLOBOACDIIL_IPAOOLDOOIN_OFFSET))(this, a1, a2);
		}

	};
