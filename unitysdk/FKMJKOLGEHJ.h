#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::PixAir { class PixAirEquipInfoViewModel; }

#define FKMJKOLGEHJ_CTOR_OFFSET UNITYSDK_OFFSET(0x15810BB0)
#define FKMJKOLGEHJ_GET_EQUIPINFOVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x15810BC0)
#define FKMJKOLGEHJ_SET_EQUIPINFOVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x15810BD0)

	class FKMJKOLGEHJ : public ::System::Object
	{
	public:
		::RPG::Client::PixAir::PixAirEquipInfoViewModel* _EquipInfoViewModel_k__BackingField; // 0x10
		::System::Void _ctor(::RPG::Client::PixAir::PixAirEquipInfoViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PixAir::PixAirEquipInfoViewModel*))((::PBYTE)hIl2Cpp + FKMJKOLGEHJ_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::PixAir::PixAirEquipInfoViewModel* get_EquipInfoViewModel()
		{
			return ((::RPG::Client::PixAir::PixAirEquipInfoViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKMJKOLGEHJ_GET_EQUIPINFOVIEWMODEL_OFFSET))(this);
		}

		::System::Void set_EquipInfoViewModel(::RPG::Client::PixAir::PixAirEquipInfoViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PixAir::PixAirEquipInfoViewModel*))((::PBYTE)hIl2Cpp + FKMJKOLGEHJ_SET_EQUIPINFOVIEWMODEL_OFFSET))(this, a1);
		}

	};
