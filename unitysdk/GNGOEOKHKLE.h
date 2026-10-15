#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AvatarComparerBase.h"
namespace RPG::AvatarSystem { class IAvatar; }

#define GNGOEOKHKLE_CTOR_OFFSET UNITYSDK_OFFSET(0x15B086E0)
#define GNGOEOKHKLE_DAPFIKFKOFG_OFFSET UNITYSDK_OFFSET(0x15B08430)
#define GNGOEOKHKLE_GET_ISLEVELFIRST_OFFSET UNITYSDK_OFFSET(0x15B08380)
#define GNGOEOKHKLE_KBAJGGONICJ_OFFSET UNITYSDK_OFFSET(0x15B08640)
#define GNGOEOKHKLE_SET_ISLEVELFIRST_OFFSET UNITYSDK_OFFSET(0x15B08370)
#define GNGOEOKHKLE__COMPAREIMPL_OFFSET UNITYSDK_OFFSET(0x15B08390)

	class GNGOEOKHKLE : public ::RPG::Client::AvatarComparerBase
	{
	public:
		::System::Boolean _IsLevelFirst_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNGOEOKHKLE_CTOR_OFFSET))(this);
		}

		::System::Void set_IsLevelFirst(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GNGOEOKHKLE_SET_ISLEVELFIRST_OFFSET))(this, a1);
		}

		::System::Boolean get_IsLevelFirst()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GNGOEOKHKLE_GET_ISLEVELFIRST_OFFSET))(this);
		}

		::System::Int32 _CompareImpl(::RPG::AvatarSystem::IAvatar* a1, ::RPG::AvatarSystem::IAvatar* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + GNGOEOKHKLE__COMPAREIMPL_OFFSET))(this, a1, a2);
		}

		static ::System::Int32 DAPFIKFKOFG(::RPG::AvatarSystem::IAvatar* a1, ::RPG::AvatarSystem::IAvatar* a2)
		{
			return ((::System::Int32(*)(::RPG::AvatarSystem::IAvatar*, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + GNGOEOKHKLE_DAPFIKFKOFG_OFFSET))(a1, a2);
		}

		static ::System::Int32 KBAJGGONICJ(::RPG::AvatarSystem::IAvatar* a1, ::RPG::AvatarSystem::IAvatar* a2)
		{
			return ((::System::Int32(*)(::RPG::AvatarSystem::IAvatar*, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + GNGOEOKHKLE_KBAJGGONICJ_OFFSET))(a1, a2);
		}

	};
