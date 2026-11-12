#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class BaseModifierInstance; }
namespace System { class String; }

#define LJNDFBIACLJ_CLEAR_OFFSET UNITYSDK_OFFSET(0xBFBF990)
#define LJNDFBIACLJ_CTOR_OFFSET UNITYSDK_OFFSET(0xBFBFD00)
#define LJNDFBIACLJ_DLAILGNMFGI_OFFSET UNITYSDK_OFFSET(0xBFBF9F0)
#define LJNDFBIACLJ_GET_COUNT_OFFSET UNITYSDK_OFFSET(0xBFBFCE0)
#define LJNDFBIACLJ_GET_MODIFIERACTUALCASTERENTITYID_OFFSET UNITYSDK_OFFSET(0xBFBFCC0)
#define LJNDFBIACLJ_GET_MODIFIERCASTERENTITYID_OFFSET UNITYSDK_OFFSET(0xBFBFCA0)
#define LJNDFBIACLJ_GET_MODIFIERNAME_OFFSET UNITYSDK_OFFSET(0xBFBFC60)
#define LJNDFBIACLJ_GET_MODIFIEROWNERENTITYID_OFFSET UNITYSDK_OFFSET(0xBFBFC80)
#define LJNDFBIACLJ_SET_COUNT_OFFSET UNITYSDK_OFFSET(0xBFBFCF0)
#define LJNDFBIACLJ_SET_MODIFIERACTUALCASTERENTITYID_OFFSET UNITYSDK_OFFSET(0xBFBFCD0)
#define LJNDFBIACLJ_SET_MODIFIERCASTERENTITYID_OFFSET UNITYSDK_OFFSET(0xBFBFCB0)
#define LJNDFBIACLJ_SET_MODIFIERNAME_OFFSET UNITYSDK_OFFSET(0xBFBFC70)
#define LJNDFBIACLJ_SET_MODIFIEROWNERENTITYID_OFFSET UNITYSDK_OFFSET(0xBFBFC90)

inline static constexpr unsigned int LJNDFBIACLJ_TypeDefinitionIndex = 55605;

	class LJNDFBIACLJ : public ::System::Object
	{
	public:
		::System::String* _ModifierName_k__BackingField; // 0x10
		::RPG::GameCore::FixPoint _Count_k__BackingField; // 0x18
		::System::UInt32 _ModifierCasterEntityID_k__BackingField; // 0x20
		::System::UInt32 _ModifierOwnerEntityID_k__BackingField; // 0x24
		::System::UInt32 _ModifierActualCasterEntityID_k__BackingField; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJNDFBIACLJ_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJNDFBIACLJ_CLEAR_OFFSET))(this);
		}

		::System::Void DLAILGNMFGI(::RPG::GameCore::BaseModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BaseModifierInstance*))((::PBYTE)hIl2Cpp + LJNDFBIACLJ_DLAILGNMFGI_OFFSET))(this, a1);
		}

		::System::String* get_ModifierName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJNDFBIACLJ_GET_MODIFIERNAME_OFFSET))(this);
		}

		::System::Void set_ModifierName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LJNDFBIACLJ_SET_MODIFIERNAME_OFFSET))(this, a1);
		}

		::System::UInt32 get_ModifierOwnerEntityID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LJNDFBIACLJ_GET_MODIFIEROWNERENTITYID_OFFSET))(this);
		}

		::System::Void set_ModifierOwnerEntityID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LJNDFBIACLJ_SET_MODIFIEROWNERENTITYID_OFFSET))(this, a1);
		}

		::System::UInt32 get_ModifierCasterEntityID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LJNDFBIACLJ_GET_MODIFIERCASTERENTITYID_OFFSET))(this);
		}

		::System::Void set_ModifierCasterEntityID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LJNDFBIACLJ_SET_MODIFIERCASTERENTITYID_OFFSET))(this, a1);
		}

		::System::UInt32 get_ModifierActualCasterEntityID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LJNDFBIACLJ_GET_MODIFIERACTUALCASTERENTITYID_OFFSET))(this);
		}

		::System::Void set_ModifierActualCasterEntityID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LJNDFBIACLJ_SET_MODIFIERACTUALCASTERENTITYID_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_Count()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + LJNDFBIACLJ_GET_COUNT_OFFSET))(this);
		}

		::System::Void set_Count(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + LJNDFBIACLJ_SET_COUNT_OFFSET))(this, a1);
		}

	};
