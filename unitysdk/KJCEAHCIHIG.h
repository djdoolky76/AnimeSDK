#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define KJCEAHCIHIG_CTOR_OFFSET UNITYSDK_OFFSET(0xB43C970)
#define KJCEAHCIHIG_GET_DESC_OFFSET UNITYSDK_OFFSET(0xB43C950)
#define KJCEAHCIHIG_GET_NAME_OFFSET UNITYSDK_OFFSET(0xB43C930)
#define KJCEAHCIHIG_SET_DESC_OFFSET UNITYSDK_OFFSET(0xB43C960)
#define KJCEAHCIHIG_SET_NAME_OFFSET UNITYSDK_OFFSET(0xB43C940)

inline static constexpr unsigned int KJCEAHCIHIG_TypeDefinitionIndex = 80611;

	class KJCEAHCIHIG : public ::System::Object
	{
	public:
		::System::String* _Desc_k__BackingField; // 0x10
		::RPG::Client::TextID _Name_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJCEAHCIHIG_CTOR_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + KJCEAHCIHIG_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + KJCEAHCIHIG_SET_NAME_OFFSET))(this, a1);
		}

		::System::String* get_Desc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJCEAHCIHIG_GET_DESC_OFFSET))(this);
		}

		::System::Void set_Desc(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KJCEAHCIHIG_SET_DESC_OFFSET))(this, a1);
		}

	};
