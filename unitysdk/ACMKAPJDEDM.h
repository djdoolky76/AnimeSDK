#pragma once
#include "unitysdk/unitysdk.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class AttachAvatarChange; }
namespace RPG::GameCore { class AvatarChangeTemplate; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System { template <typename T> class Action_1; }

#define ACMKAPJDEDM_CTOR_OFFSET UNITYSDK_OFFSET(0xB78AC70)
#define ACMKAPJDEDM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB78B0D0)
#define ACMKAPJDEDM_FFGAENEJAOC_OFFSET UNITYSDK_OFFSET(0xB78C2D0)
#define ACMKAPJDEDM_NLEKBHGAGOL_OFFSET UNITYSDK_OFFSET(0xB78C1B0)
#define ACMKAPJDEDM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB78B4A0)

inline static constexpr unsigned int ACMKAPJDEDM_TypeDefinitionIndex = 56008;

	class ACMKAPJDEDM
	{
	public:
		::System::Action_1<::RPG::GameCore::GameEntity*>* LLHCINBIBMJ; // 0x28
		::KFELGAIGHAP* FEINADIKCAB; // 0x30
		::KFELGAIGHAP* FGKOGMMBNFG; // 0x38
		::RPG::GameCore::AvatarChangeTemplate* JILGFHGMAAC; // 0x40
		::System::Action_1<::RPG::GameCore::GameEntity*>* CLOMEGLHGOE; // 0x48
		::KFELGAIGHAP* IEEKLAMGHKI; // 0x50
		::KFELGAIGHAP* IOIINLJHFHH; // 0x58
		::KFELGAIGHAP* KBLLLKLEIOD; // 0x60
		::KFELGAIGHAP* OMBIIGIJFIA; // 0x68
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AttachAvatarChange* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AttachAvatarChange*))((::PBYTE)hIl2Cpp + ACMKAPJDEDM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACMKAPJDEDM_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACMKAPJDEDM_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void NLEKBHGAGOL(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + ACMKAPJDEDM_NLEKBHGAGOL_OFFSET))(this, a1);
		}

		::System::Void FFGAENEJAOC(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + ACMKAPJDEDM_FFGAENEJAOC_OFFSET))(this, a1);
		}

	};
