#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinHouguOwnerType.h"
#include "unitysdk/System/Object.h"
class BOKKFAJCOLI;
class LJGLKFAABMN;
namespace RPG::AvatarSystem { class IAvatar; }

#define FEIPLKMMIOI_CTOR_OFFSET UNITYSDK_OFFSET(0x130C8970)
#define FEIPLKMMIOI_HIPMAGHGNBK_OFFSET UNITYSDK_OFFSET(0x130C8AF0)
#define FEIPLKMMIOI_OOCGNGDBNNN_OFFSET UNITYSDK_OFFSET(0x130C8A20)
#define FEIPLKMMIOI_PGCJBDEHIHO_OFFSET UNITYSDK_OFFSET(0x130C8B50)

inline static constexpr unsigned int FEIPLKMMIOI_TypeDefinitionIndex = 83982;

	class FEIPLKMMIOI : public ::System::Object
	{
	public:
		::BOKKFAJCOLI* BNIJMCMIILO; // 0x10
		::LJGLKFAABMN* KANLOKJNAEB; // 0x18
		::System::Void _ctor(::LJGLKFAABMN* a1, ::BOKKFAJCOLI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::LJGLKFAABMN*, ::BOKKFAJCOLI*))((::PBYTE)hIl2Cpp + FEIPLKMMIOI_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::AvatarSystem::IAvatar* OOCGNGDBNNN(::RPG::GameCore::FateRinHouguOwnerType a1)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::RPG::GameCore::FateRinHouguOwnerType))((::PBYTE)hIl2Cpp + FEIPLKMMIOI_OOCGNGDBNNN_OFFSET))(this, a1);
		}

		::RPG::AvatarSystem::IAvatar* HIPMAGHGNBK(::System::UInt32 a1)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FEIPLKMMIOI_HIPMAGHGNBK_OFFSET))(this, a1);
		}

		::RPG::AvatarSystem::IAvatar* PGCJBDEHIHO(::System::UInt32 a1)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FEIPLKMMIOI_PGCJBDEHIHO_OFFSET))(this, a1);
		}

	};
