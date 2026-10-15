#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightRole; }

#define BOIKIMJHDHK___C__DISPLAYCLASS1_0_CTOR_OFFSET UNITYSDK_OFFSET(0xC191130)
#define BOIKIMJHDHK___C__DISPLAYCLASS1_0___GETROLEBYID_B__0_OFFSET UNITYSDK_OFFSET(0xC191250)

inline static constexpr unsigned int BOIKIMJHDHK___c__DisplayClass1_0_TypeDefinitionIndex = 64932;

	class BOIKIMJHDHK___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::System::UInt32 roleID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOIKIMJHDHK___C__DISPLAYCLASS1_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __GetRoleByID_b__0(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + BOIKIMJHDHK___C__DISPLAYCLASS1_0___GETROLEBYID_B__0_OFFSET))(this, a1);
		}

	};
