#pragma once
#include "unitysdk/unitysdk.h"
class FHKIKPOPLPJ;
namespace RPG::GameCore { class MapRotationVolumeSlotConfigBase; }
namespace RPG::GameCore { class SetupMapRotationVolume; }
namespace RPG::GameCore { class TaskContext; }

#define BBGBCENMNGA_CTOR_OFFSET UNITYSDK_OFFSET(0x16D0C140)
#define BBGBCENMNGA_LOBKCNBCINM_OFFSET UNITYSDK_OFFSET(0x16D0C6E0)
#define BBGBCENMNGA_OEPMOCIMANP_OFFSET UNITYSDK_OFFSET(0x16D0C890)
#define BBGBCENMNGA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16D0C170)

inline static constexpr unsigned int BBGBCENMNGA_TypeDefinitionIndex = 54161;

	class BBGBCENMNGA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetupMapRotationVolume* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetupMapRotationVolume*))((::PBYTE)hIl2Cpp + BBGBCENMNGA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBGBCENMNGA_ONTASKBEGIN_OFFSET))(this);
		}

		::Il2CppArray<::FHKIKPOPLPJ*>* LOBKCNBCINM()
		{
			return ((::Il2CppArray<::FHKIKPOPLPJ*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBGBCENMNGA_LOBKCNBCINM_OFFSET))(this);
		}

		::FHKIKPOPLPJ* OEPMOCIMANP(::RPG::GameCore::MapRotationVolumeSlotConfigBase* a1)
		{
			return ((::FHKIKPOPLPJ*(*)(::PVOID, ::RPG::GameCore::MapRotationVolumeSlotConfigBase*))((::PBYTE)hIl2Cpp + BBGBCENMNGA_OEPMOCIMANP_OFFSET))(this, a1);
		}

	};
