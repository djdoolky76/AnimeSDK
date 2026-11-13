#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BMPICAPOOFD.h"
#include "unitysdk/RPG/Client/FateGameStateType.h"
class OFKKIMABHJD;
namespace RPG::Client { class UIController; }
namespace System { class Object; }

#define LMFLBGKCGFD_AHEEAFKFALM_OFFSET UNITYSDK_OFFSET(0x1AFC6A60)
#define LMFLBGKCGFD_CLJEBKODGHK_OFFSET UNITYSDK_OFFSET(0x1AFC6900)
#define LMFLBGKCGFD_CTOR_OFFSET UNITYSDK_OFFSET(0x1AFC68F0)
#define LMFLBGKCGFD_OHINFDICPFI_OFFSET UNITYSDK_OFFSET(0x1AFC6B40)

inline static constexpr unsigned int LMFLBGKCGFD_TypeDefinitionIndex = 65492;

	class LMFLBGKCGFD : public ::BMPICAPOOFD
	{
	public:
		::RPG::Client::UIController* NJGMENOFECG; // 0x18
		::RPG::Client::UIController* FAJFHDCOEGE; // 0x20
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
