#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
namespace RPG::GameCore { class GameEntity; }

#define KKBKKOEIEEG_CGDNPIJGNNK_OFFSET UNITYSDK_OFFSET(0xB4B4FA0)
#define KKBKKOEIEEG_CTOR_OFFSET UNITYSDK_OFFSET(0xB4B4FE0)
#define KKBKKOEIEEG_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0xB4B4E30)
#define KKBKKOEIEEG_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0xB4B4EC0)
#define KKBKKOEIEEG_NIJJPBOIGBI_OFFSET UNITYSDK_OFFSET(0xB4B4F00)
#define KKBKKOEIEEG__ONBIND_OFFSET UNITYSDK_OFFSET(0xB4B4CD0)
#define KKBKKOEIEEG__ONTICK_OFFSET UNITYSDK_OFFSET(0xB4B4F40)

inline static constexpr unsigned int KKBKKOEIEEG_TypeDefinitionIndex = 71480;

	class KKBKKOEIEEG : public ::FMPCODLIOLG
	{
	public:
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x60
		// static const ::System::String* DJCBDJMACFH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKBKKOEIEEG_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKBKKOEIEEG__ONBIND_OFFSET))(this);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + KKBKKOEIEEG_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKBKKOEIEEG_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void NIJJPBOIGBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKBKKOEIEEG_NIJJPBOIGBI_OFFSET))(this);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KKBKKOEIEEG__ONTICK_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* CGDNPIJGNNK()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKBKKOEIEEG_CGDNPIJGNNK_OFFSET))(this);
		}

	};
