#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_STRINGHASH_BIIMDAFMJNF_OFFSET UNITYSDK_OFFSET(0x1DB2BA70)
#define RPG_GAMECORE_STRINGHASH_BMKDGGNDCCJ_OFFSET UNITYSDK_OFFSET(0x3C22040)
#define RPG_GAMECORE_STRINGHASH_CTOR_OFFSET UNITYSDK_OFFSET(0x3C40560)
#define RPG_GAMECORE_STRINGHASH_DLDBLNNPHKE_OFFSET UNITYSDK_OFFSET(0x1DB2BB60)
#define RPG_GAMECORE_STRINGHASH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xAF50)
#define RPG_GAMECORE_STRINGHASH_EQUALS_OFFSET UNITYSDK_OFFSET(0x3C40620)
#define RPG_GAMECORE_STRINGHASH_FEIIDFFOICL_OFFSET UNITYSDK_OFFSET(0x1DB2BB40)
#define RPG_GAMECORE_STRINGHASH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xE620)
#define RPG_GAMECORE_STRINGHASH_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0xF64B0)
#define RPG_GAMECORE_STRINGHASH_OOLFPHJOOGG_OFFSET UNITYSDK_OFFSET(0x1DB2BB30)

namespace RPG::GameCore
{
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
