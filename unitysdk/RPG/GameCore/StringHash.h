#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_STRINGHASH_BIIMDAFMJNF_OFFSET UNITYSDK_OFFSET(0x1E66DE50)
#define RPG_GAMECORE_STRINGHASH_BMKDGGNDCCJ_OFFSET UNITYSDK_OFFSET(0x3F2F050)
#define RPG_GAMECORE_STRINGHASH_CTOR_OFFSET UNITYSDK_OFFSET(0x3F2EF70)
#define RPG_GAMECORE_STRINGHASH_DLDBLNNPHKE_OFFSET UNITYSDK_OFFSET(0x1E66DF40)
#define RPG_GAMECORE_STRINGHASH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3EE9440)
#define RPG_GAMECORE_STRINGHASH_EQUALS_OFFSET UNITYSDK_OFFSET(0x3F2F030)
#define RPG_GAMECORE_STRINGHASH_FEIIDFFOICL_OFFSET UNITYSDK_OFFSET(0x1E66DF20)
#define RPG_GAMECORE_STRINGHASH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7CED80)
#define RPG_GAMECORE_STRINGHASH_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x3D1D240)
#define RPG_GAMECORE_STRINGHASH_OOLFPHJOOGG_OFFSET UNITYSDK_OFFSET(0x1E66DF10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StringHash_TypeDefinitionIndex = 10891;

	struct alignas(4) StringHash
	{
		::System::Int32 Hash; // 0x10
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STRINGHASH_CTOR_OFFSET))(this, a1);
		}

		/*
		static ::RPG::GameCore::StringHash BIIMDAFMJNF(::System::String* a1)
		{
			return ((::RPG::GameCore::StringHash(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STRINGHASH_BIIMDAFMJNF_OFFSET))(a1);
		}
		*/

		/*
		static ::RPG::GameCore::StringHash OOLFPHJOOGG(::System::Int32 a1)
		{
			return ((::RPG::GameCore::StringHash(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STRINGHASH_OOLFPHJOOGG_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Boolean FEIIDFFOICL(::RPG::GameCore::StringHash a1, ::RPG::GameCore::StringHash a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::StringHash, ::RPG::GameCore::StringHash))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STRINGHASH_FEIIDFFOICL_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean DLDBLNNPHKE(::RPG::GameCore::StringHash a1, ::RPG::GameCore::StringHash a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::StringHash, ::RPG::GameCore::StringHash))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STRINGHASH_DLDBLNNPHKE_OFFSET))(a1, a2);
		}
		*/

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STRINGHASH_EQUALS_OFFSET))(this, a1);
		}

		/*
		::System::Boolean Equals_1(::RPG::GameCore::StringHash a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::StringHash))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STRINGHASH_EQUALS_1_OFFSET))(this, a1);
		}
		*/

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STRINGHASH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* BMKDGGNDCCJ()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STRINGHASH_BMKDGGNDCCJ_OFFSET))(this);
		}

		::System::Boolean get_IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STRINGHASH_GET_ISEMPTY_OFFSET))(this);
		}

	};
}
