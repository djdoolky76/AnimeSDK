#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftConditionType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class JBAPFPNFAIE;

#define HIEDHBNDAAE_CTOR_OFFSET UNITYSDK_OFFSET(0x15CE26C0)
#define HIEDHBNDAAE_GET_CACHEKEY_OFFSET UNITYSDK_OFFSET(0x15CE2690)
#define HIEDHBNDAAE_GET_DESC_OFFSET UNITYSDK_OFFSET(0x15CE26B0)
#define HIEDHBNDAAE_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x15CE26A0)

inline static constexpr unsigned int HIEDHBNDAAE_TypeDefinitionIndex = 80092;

	class HIEDHBNDAAE : public ::System::Object
	{
	public:
		::RPG::Client::MechCraft::MechCraftConditionType _Type_k__BackingField; // 0x10
		::System::Int32 _CacheKey_k__BackingField; // 0x14
		::RPG::Client::TextID _Desc_k__BackingField; // 0x18
		::System::Void _ctor(::JBAPFPNFAIE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JBAPFPNFAIE*))((::PBYTE)hIl2Cpp + HIEDHBNDAAE_CTOR_OFFSET))(this, a1);
		}

		::System::Int32 get_CacheKey()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIEDHBNDAAE_GET_CACHEKEY_OFFSET))(this);
		}

		::RPG::Client::MechCraft::MechCraftConditionType get_Type()
		{
			return ((::RPG::Client::MechCraft::MechCraftConditionType(*)(::PVOID))((::PBYTE)hIl2Cpp + HIEDHBNDAAE_GET_TYPE_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + HIEDHBNDAAE_GET_DESC_OFFSET))(this);
		}

	};
