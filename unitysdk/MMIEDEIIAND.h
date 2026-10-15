#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinHouguOwnerType.h"
#include "unitysdk/RPG/GameCore/GenderType.h"
#include "unitysdk/System/Object.h"
class CEKGGHILKPC;
class JJNNAGMLCIC;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client::FateRin::Logging { class ILogger; }
namespace RPG::Client::FateRin::Logging { class ILoggerFactory; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MMIEDEIIAND_CTOR_OFFSET UNITYSDK_OFFSET(0xB9C98C0)
#define MMIEDEIIAND_DDGKJNMINPL_1_OFFSET UNITYSDK_OFFSET(0xB9CA330)
#define MMIEDEIIAND_DDGKJNMINPL_OFFSET UNITYSDK_OFFSET(0xB9C9D30)
#define MMIEDEIIAND_HIPMAGHGNBK_OFFSET UNITYSDK_OFFSET(0xB9CA660)
#define MMIEDEIIAND_OOCGNGDBNNN_1_OFFSET UNITYSDK_OFFSET(0xB9C9FB0)
#define MMIEDEIIAND_OOCGNGDBNNN_OFFSET UNITYSDK_OFFSET(0xB9C99A0)
#define MMIEDEIIAND_PGCJBDEHIHO_OFFSET UNITYSDK_OFFSET(0xB9CA9A0)

inline static constexpr unsigned int MMIEDEIIAND_TypeDefinitionIndex = 81216;

	class MMIEDEIIAND : public ::System::Object
	{
	public:
		::RPG::Client::FateRin::Logging::ILogger* JKCNFDEAMDJ; // 0x10
		::JJNNAGMLCIC* HEJEGOGBFMP; // 0x18
		::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* JKMKALIDPJH; // 0x20
		::System::Void _ctor(::JJNNAGMLCIC* a1, ::RPG::Client::FateRin::Logging::ILoggerFactory* a2)
		{
			return ((::System::Void(*)(::PVOID, ::JJNNAGMLCIC*, ::RPG::Client::FateRin::Logging::ILoggerFactory*))((::PBYTE)hIl2Cpp + MMIEDEIIAND_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::AvatarSystem::IAvatar* OOCGNGDBNNN(::RPG::GameCore::FateRinHouguOwnerType a1)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::RPG::GameCore::FateRinHouguOwnerType))((::PBYTE)hIl2Cpp + MMIEDEIIAND_OOCGNGDBNNN_OFFSET))(this, a1);
		}

		::RPG::AvatarSystem::IAvatar* OOCGNGDBNNN_1(::RPG::GameCore::FateRinHouguOwnerType a1, ::RPG::GameCore::GenderType a2)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::RPG::GameCore::FateRinHouguOwnerType, ::RPG::GameCore::GenderType))((::PBYTE)hIl2Cpp + MMIEDEIIAND_OOCGNGDBNNN_1_OFFSET))(this, a1, a2);
		}

		::RPG::AvatarSystem::IAvatar* HIPMAGHGNBK(::System::UInt32 a1)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MMIEDEIIAND_HIPMAGHGNBK_OFFSET))(this, a1);
		}

		::RPG::AvatarSystem::IAvatar* PGCJBDEHIHO(::System::UInt32 a1)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MMIEDEIIAND_PGCJBDEHIHO_OFFSET))(this, a1);
		}

		static ::CEKGGHILKPC* DDGKJNMINPL(::RPG::GameCore::FateRinHouguOwnerType a1)
		{
			return ((::CEKGGHILKPC*(*)(::RPG::GameCore::FateRinHouguOwnerType))((::PBYTE)hIl2Cpp + MMIEDEIIAND_DDGKJNMINPL_OFFSET))(a1);
		}

		static ::CEKGGHILKPC* DDGKJNMINPL_1(::RPG::GameCore::FateRinHouguOwnerType a1, ::RPG::GameCore::GenderType a2)
		{
			return ((::CEKGGHILKPC*(*)(::RPG::GameCore::FateRinHouguOwnerType, ::RPG::GameCore::GenderType))((::PBYTE)hIl2Cpp + MMIEDEIIAND_DDGKJNMINPL_1_OFFSET))(a1, a2);
		}

	};
