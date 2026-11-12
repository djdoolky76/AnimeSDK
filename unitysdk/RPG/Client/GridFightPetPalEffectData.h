#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJDFGMMMCMI.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightBonusResultData; }
namespace RPG::Client { class GridFightBonusSrcInfo; }
namespace RPG::Client { class GridFightGameModifier; }
namespace RPG::Client { class GridFightPetPalEffectConfig; }

#define RPG_CLIENT_GRIDFIGHTPETPALEFFECTDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xDC25630)
#define RPG_CLIENT_GRIDFIGHTPETPALEFFECTDATA_GET_PETPALEFFECTCONFIG_OFFSET UNITYSDK_OFFSET(0xDC25610)
#define RPG_CLIENT_GRIDFIGHTPETPALEFFECTDATA_SETEFFECTID_OFFSET UNITYSDK_OFFSET(0xDC258A0)
#define RPG_CLIENT_GRIDFIGHTPETPALEFFECTDATA_SET_PETPALEFFECTCONFIG_OFFSET UNITYSDK_OFFSET(0xDC25620)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightPetPalEffectData_TypeDefinitionIndex = 66730;

	class GridFightPetPalEffectData : public ::System::Object
	{
	public:
		::RPG::Client::GridFightGameModifier* Modifier; // 0x10
		::RPG::Client::GridFightBonusResultData* Bonus; // 0x18
		::RPG::Client::GridFightPetPalEffectConfig* _PetPalEffectConfig_k__BackingField; // 0x20
		::RPG::Client::GridFightBonusSrcInfo* SrcInfo; // 0x28
		::System::Boolean NeedToast; // 0x30
		::System::Void _ctor(::System::UInt32 a1, ::JJDFGMMMCMI a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::JJDFGMMMCMI))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPETPALEFFECTDATA_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::GridFightPetPalEffectConfig* get_PetPalEffectConfig()
		{
			return ((::RPG::Client::GridFightPetPalEffectConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPETPALEFFECTDATA_GET_PETPALEFFECTCONFIG_OFFSET))(this);
		}

		::System::Void set_PetPalEffectConfig(::RPG::Client::GridFightPetPalEffectConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightPetPalEffectConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPETPALEFFECTDATA_SET_PETPALEFFECTCONFIG_OFFSET))(this, a1);
		}

		::System::Void SetEffectID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPETPALEFFECTDATA_SETEFFECTID_OFFSET))(this, a1);
		}

	};
}
