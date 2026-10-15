#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixVec3.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class CENEFPOMFKG;
class KAOOFGPIBGF;
namespace RPG::GameCore { class GameEntity; }

#define EICKJNMDHOC_CTOR_OFFSET UNITYSDK_OFFSET(0x154BCF70)
#define EICKJNMDHOC_JDEKJLHMPLG_OFFSET UNITYSDK_OFFSET(0x154BCD30)
#define EICKJNMDHOC_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0x154BCE00)

inline static constexpr unsigned int EICKJNMDHOC_TypeDefinitionIndex = 54305;

	class EICKJNMDHOC : public ::System::Object
	{
	public:
		::KAOOFGPIBGF* NELGDHJKAJJ; // 0x10
		::RPG::GameCore::FixVec3 OIHKCJLEKOA; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EICKJNMDHOC_CTOR_OFFSET))(this);
		}

		::System::Void JDEKJLHMPLG(::CENEFPOMFKG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CENEFPOMFKG*))((::PBYTE)hIl2Cpp + EICKJNMDHOC_JDEKJLHMPLG_OFFSET))(this, a1);
		}

		::System::Boolean KFGJEKJHIMB(::CENEFPOMFKG* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::CENEFPOMFKG*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + EICKJNMDHOC_KFGJEKJHIMB_OFFSET))(this, a1, a2, a3);
		}

	};
