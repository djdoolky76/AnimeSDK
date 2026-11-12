#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightPetPalConfig; }
namespace RPG::Client { class GridFightPetPalEffectConfig; }

#define RPG_CLIENT_GRIDFIGHTPETPALEFFECT_ACTIVATE_OFFSET UNITYSDK_OFFSET(0xDC242A0)
#define RPG_CLIENT_GRIDFIGHTPETPALEFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0xDC24060)
#define RPG_CLIENT_GRIDFIGHTPETPALEFFECT_GET_EFFECTCONFIG_OFFSET UNITYSDK_OFFSET(0xDC24020)
#define RPG_CLIENT_GRIDFIGHTPETPALEFFECT_GET_EFFID_OFFSET UNITYSDK_OFFSET(0xDC23EE0)
#define RPG_CLIENT_GRIDFIGHTPETPALEFFECT_GET_ISACTIVATED_OFFSET UNITYSDK_OFFSET(0xDC24040)
#define RPG_CLIENT_GRIDFIGHTPETPALEFFECT_GET_PETPALCONFIG_OFFSET UNITYSDK_OFFSET(0xDC24000)
#define RPG_CLIENT_GRIDFIGHTPETPALEFFECT_GET_PETPALID_OFFSET UNITYSDK_OFFSET(0xDC23E70)
#define RPG_CLIENT_GRIDFIGHTPETPALEFFECT_SET_EFFECTCONFIG_OFFSET UNITYSDK_OFFSET(0xDC24030)
#define RPG_CLIENT_GRIDFIGHTPETPALEFFECT_SET_ISACTIVATED_OFFSET UNITYSDK_OFFSET(0xDC24050)
#define RPG_CLIENT_GRIDFIGHTPETPALEFFECT_SET_PETPALCONFIG_OFFSET UNITYSDK_OFFSET(0xDC24010)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightPetPalEffect_TypeDefinitionIndex = 66726;

	class GridFightPetPalEffect : public ::System::Object
	{
	public:
		::RPG::Client::GridFightPetPalConfig* _PetPalConfig_k__BackingField; // 0x10
		::RPG::Client::GridFightPetPalEffectConfig* _EffectConfig_k__BackingField; // 0x18
		::System::Boolean _IsActivated_k__BackingField; // 0x20
		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPETPALEFFECT_CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_PetPalID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPETPALEFFECT_GET_PETPALID_OFFSET))(this);
		}

		::System::UInt32 get_EffID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPETPALEFFECT_GET_EFFID_OFFSET))(this);
		}

		::RPG::Client::GridFightPetPalConfig* get_PetPalConfig()
		{
			return ((::RPG::Client::GridFightPetPalConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPETPALEFFECT_GET_PETPALCONFIG_OFFSET))(this);
		}

		::System::Void set_PetPalConfig(::RPG::Client::GridFightPetPalConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightPetPalConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPETPALEFFECT_SET_PETPALCONFIG_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightPetPalEffectConfig* get_EffectConfig()
		{
			return ((::RPG::Client::GridFightPetPalEffectConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPETPALEFFECT_GET_EFFECTCONFIG_OFFSET))(this);
		}

		::System::Void set_EffectConfig(::RPG::Client::GridFightPetPalEffectConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightPetPalEffectConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPETPALEFFECT_SET_EFFECTCONFIG_OFFSET))(this, a1);
		}

		::System::Boolean get_IsActivated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPETPALEFFECT_GET_ISACTIVATED_OFFSET))(this);
		}

		::System::Void set_IsActivated(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPETPALEFFECT_SET_ISACTIVATED_OFFSET))(this, a1);
		}

		::System::Void Activate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPETPALEFFECT_ACTIVATE_OFFSET))(this);
		}

	};
}
