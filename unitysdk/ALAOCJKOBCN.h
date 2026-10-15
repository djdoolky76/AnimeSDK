#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftConditionType.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define ALAOCJKOBCN_CTOR_OFFSET UNITYSDK_OFFSET(0x12CDCBC0)
#define ALAOCJKOBCN_GET_DESCSTRING_OFFSET UNITYSDK_OFFSET(0x12CDCBA0)
#define ALAOCJKOBCN_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x12CDCB80)
#define ALAOCJKOBCN_SET_DESCSTRING_OFFSET UNITYSDK_OFFSET(0x12CDCBB0)
#define ALAOCJKOBCN_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x12CDCB90)

inline static constexpr unsigned int ALAOCJKOBCN_TypeDefinitionIndex = 79419;

	class ALAOCJKOBCN : public ::System::Object
	{
	public:
		::System::String* _DescString_k__BackingField; // 0x10
		::RPG::Client::MechCraft::MechCraftConditionType _Type_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALAOCJKOBCN_CTOR_OFFSET))(this);
		}

		::RPG::Client::MechCraft::MechCraftConditionType get_Type()
		{
			return ((::RPG::Client::MechCraft::MechCraftConditionType(*)(::PVOID))((::PBYTE)hIl2Cpp + ALAOCJKOBCN_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::RPG::Client::MechCraft::MechCraftConditionType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::MechCraftConditionType))((::PBYTE)hIl2Cpp + ALAOCJKOBCN_SET_TYPE_OFFSET))(this, a1);
		}

		::System::String* get_DescString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALAOCJKOBCN_GET_DESCSTRING_OFFSET))(this);
		}

		::System::Void set_DescString(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ALAOCJKOBCN_SET_DESCSTRING_OFFSET))(this, a1);
		}

	};
