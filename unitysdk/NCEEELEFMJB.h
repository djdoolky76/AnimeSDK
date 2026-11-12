#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KDEKNFKEEMB.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PropState.h"
#include "unitysdk/System/Object.h"
class EKFMIDBJDIA;
class NCEEELEFMJB;
namespace RPG::Client::NavMap { class IMapDataSource; }
namespace RPG::GameCore { class LevelNavNodeConditionInfo; }
namespace System { class String; }

#define NCEEELEFMJB_BGANFBOIKAK_OFFSET UNITYSDK_OFFSET(0xC3905F0)
#define NCEEELEFMJB_BJMNKLGEMPM_OFFSET UNITYSDK_OFFSET(0xC390850)
#define NCEEELEFMJB_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xC38FFF0)
#define NCEEELEFMJB_CIIPKBIMLLD_OFFSET UNITYSDK_OFFSET(0xC3901F0)
#define NCEEELEFMJB_CTOR_OFFSET UNITYSDK_OFFSET(0xC3900B0)
#define NCEEELEFMJB_IFCNMIBPBOI_OFFSET UNITYSDK_OFFSET(0xC390710)
#define NCEEELEFMJB_LKOOPEDINED_OFFSET UNITYSDK_OFFSET(0xC3900C0)
#define NCEEELEFMJB_OKPLPEELPBC_OFFSET UNITYSDK_OFFSET(0xC390320)

inline static constexpr unsigned int NCEEELEFMJB_TypeDefinitionIndex = 68305;

	class NCEEELEFMJB : public ::System::Object
	{
	public:
		::System::String* GIDAEFPOGHI; // 0x10
		::RPG::Client::NavMap::IMapDataSource* PBDGDLLLHMA; // 0x18
		::RPG::GameCore::CompareType HALJJEPLFAE; // 0x20
		::System::Boolean JLJGEJHCLMP; // 0x24
		::System::Byte _padding0[0x3];
		::RPG::GameCore::PropState BCFAEFDMCGH; // 0x28
		::KDEKNFKEEMB OIHCGLCOADP; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCEEELEFMJB_CTOR_OFFSET))(this);
		}

		static ::NCEEELEFMJB* BPLPBPMEODA(::RPG::Client::NavMap::IMapDataSource* a1, ::RPG::GameCore::LevelNavNodeConditionInfo* a2)
		{
			return ((::NCEEELEFMJB*(*)(::RPG::Client::NavMap::IMapDataSource*, ::RPG::GameCore::LevelNavNodeConditionInfo*))((::PBYTE)hIl2Cpp + NCEEELEFMJB_BPLPBPMEODA_OFFSET))(a1, a2);
		}

		::System::Void LKOOPEDINED()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCEEELEFMJB_LKOOPEDINED_OFFSET))(this);
		}

		::System::Boolean OKPLPEELPBC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NCEEELEFMJB_OKPLPEELPBC_OFFSET))(this);
		}

		::System::Void CIIPKBIMLLD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCEEELEFMJB_CIIPKBIMLLD_OFFSET))(this);
		}

		::System::Void BGANFBOIKAK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCEEELEFMJB_BGANFBOIKAK_OFFSET))(this);
		}

		::System::Void IFCNMIBPBOI(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + NCEEELEFMJB_IFCNMIBPBOI_OFFSET))(this, a1);
		}

		::System::Void BJMNKLGEMPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCEEELEFMJB_BJMNKLGEMPM_OFFSET))(this);
		}

	};
