#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NJKFOJJDGGG_CNIDCPENHML.h"
#include "unitysdk/RPG/Client/GridFightModifierEffectType.h"
#include "unitysdk/System/Object.h"
class NJKFOJJDGGG;
namespace RPG::Client { class GridFightGameModifier; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_GRIDFIGHTGAMEMODIFIER_CREATEMODIFIER_OFFSET UNITYSDK_OFFSET(0x1D693370)
#define RPG_CLIENT_GRIDFIGHTGAMEMODIFIER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D668440)
#define RPG_CLIENT_GRIDFIGHTGAMEMODIFIER_GET_EFFECTTYPE_OFFSET UNITYSDK_OFFSET(0x1D693C00)
#define RPG_CLIENT_GRIDFIGHTGAMEMODIFIER_GET_ISDEACTIVE_OFFSET UNITYSDK_OFFSET(0x1D693B60)
#define RPG_CLIENT_GRIDFIGHTGAMEMODIFIER_GET_MODIFIERCASE_OFFSET UNITYSDK_OFFSET(0x1D693BB0)
#define RPG_CLIENT_GRIDFIGHTGAMEMODIFIER_GET_UID_OFFSET UNITYSDK_OFFSET(0x1D693B10)
#define RPG_CLIENT_GRIDFIGHTGAMEMODIFIER_SET_EFFECTTYPE_OFFSET UNITYSDK_OFFSET(0x1D693C10)
#define RPG_CLIENT_GRIDFIGHTGAMEMODIFIER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1D693D00)
#define RPG_CLIENT_GRIDFIGHTGAMEMODIFIER__GETEFFECTTYPE_OFFSET UNITYSDK_OFFSET(0x1D693C20)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameModifier_TypeDefinitionIndex = 66594;

	class GridFightGameModifier : public ::System::Object
	{
	public:
		::NJKFOJJDGGG* _Info; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Object*, ::RPG::Client::GridFightModifierEffectType>* _EffectTypeMap; // 0x18
		::RPG::Client::GridFightModifierEffectType _EffectType_k__BackingField; // 0x20
		::System::Void _ctor(::NJKFOJJDGGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJKFOJJDGGG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEMODIFIER_CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::GridFightGameModifier* CreateModifier(::NJKFOJJDGGG* a1)
		{
			return ((::RPG::Client::GridFightGameModifier*(*)(::NJKFOJJDGGG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEMODIFIER_CREATEMODIFIER_OFFSET))(a1);
		}

		::System::UInt32 get_UID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEMODIFIER_GET_UID_OFFSET))(this);
		}

		::System::Boolean get_IsDeactive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEMODIFIER_GET_ISDEACTIVE_OFFSET))(this);
		}

		::NJKFOJJDGGG_CNIDCPENHML get_ModifierCase()
		{
			return ((::NJKFOJJDGGG_CNIDCPENHML(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEMODIFIER_GET_MODIFIERCASE_OFFSET))(this);
		}

		::RPG::Client::GridFightModifierEffectType get_EffectType()
		{
			return ((::RPG::Client::GridFightModifierEffectType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEMODIFIER_GET_EFFECTTYPE_OFFSET))(this);
		}

		::System::Void set_EffectType(::RPG::Client::GridFightModifierEffectType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightModifierEffectType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEMODIFIER_SET_EFFECTTYPE_OFFSET))(this, a1);
		}

		::System::Void Update(::NJKFOJJDGGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJKFOJJDGGG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEMODIFIER_UPDATE_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightModifierEffectType _GetEffectType(::NJKFOJJDGGG_CNIDCPENHML a1)
		{
			return ((::RPG::Client::GridFightModifierEffectType(*)(::PVOID, ::NJKFOJJDGGG_CNIDCPENHML))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEMODIFIER__GETEFFECTTYPE_OFFSET))(this, a1);
		}

	};
}
