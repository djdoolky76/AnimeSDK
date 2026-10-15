#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

#define PHOJHPMLBCJ_CTOR_OFFSET UNITYSDK_OFFSET(0xC250C50)
#define PHOJHPMLBCJ_GET_DESC_OFFSET UNITYSDK_OFFSET(0xC250C30)
#define PHOJHPMLBCJ_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xC250BF0)
#define PHOJHPMLBCJ_GET_NAME_OFFSET UNITYSDK_OFFSET(0xC250C10)
#define PHOJHPMLBCJ_SET_DESC_OFFSET UNITYSDK_OFFSET(0xC250C40)
#define PHOJHPMLBCJ_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0xC250C00)
#define PHOJHPMLBCJ_SET_NAME_OFFSET UNITYSDK_OFFSET(0xC250C20)

inline static constexpr unsigned int PHOJHPMLBCJ_TypeDefinitionIndex = 80748;

	class PHOJHPMLBCJ : public ::System::Object
	{
	public:
		::RPG::Client::TextID _Name_k__BackingField; // 0x10
		::RPG::Client::TextID _Desc_k__BackingField; // 0x20
		::System::UInt32 _Level_k__BackingField; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHOJHPMLBCJ_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PHOJHPMLBCJ_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PHOJHPMLBCJ_SET_LEVEL_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + PHOJHPMLBCJ_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + PHOJHPMLBCJ_SET_NAME_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + PHOJHPMLBCJ_GET_DESC_OFFSET))(this);
		}

		::System::Void set_Desc(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + PHOJHPMLBCJ_SET_DESC_OFFSET))(this, a1);
		}

	};
