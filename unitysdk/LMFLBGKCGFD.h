#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BMPICAPOOFD.h"
#include "unitysdk/RPG/Client/FateGameStateType.h"
class OFKKIMABHJD;
namespace RPG::Client { class UIController; }
namespace System { class Object; }

#define LMFLBGKCGFD_AHEEAFKFALM_OFFSET UNITYSDK_OFFSET(0xB7767F0)
#define LMFLBGKCGFD_CLJEBKODGHK_OFFSET UNITYSDK_OFFSET(0xB776690)
#define LMFLBGKCGFD_CTOR_OFFSET UNITYSDK_OFFSET(0xB776680)
#define LMFLBGKCGFD_OHINFDICPFI_OFFSET UNITYSDK_OFFSET(0xB7768D0)

inline static constexpr unsigned int LMFLBGKCGFD_TypeDefinitionIndex = 64047;

	class LMFLBGKCGFD : public ::BMPICAPOOFD
	{
	public:
		::RPG::Client::UIController* FAJFHDCOEGE; // 0x18
		::RPG::Client::UIController* NJGMENOFECG; // 0x20
		::System::Void _ctor(::OFKKIMABHJD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OFKKIMABHJD*))((::PBYTE)hIl2Cpp + LMFLBGKCGFD_CTOR_OFFSET))(this, a1);
		}

		::System::Void CLJEBKODGHK(::RPG::Client::FateGameStateType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateGameStateType))((::PBYTE)hIl2Cpp + LMFLBGKCGFD_CLJEBKODGHK_OFFSET))(this, a1);
		}

		::System::Void AHEEAFKFALM(::RPG::Client::FateGameStateType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateGameStateType))((::PBYTE)hIl2Cpp + LMFLBGKCGFD_AHEEAFKFALM_OFFSET))(this, a1);
		}

		::System::Void OHINFDICPFI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LMFLBGKCGFD_OHINFDICPFI_OFFSET))(this, a1);
		}

	};
