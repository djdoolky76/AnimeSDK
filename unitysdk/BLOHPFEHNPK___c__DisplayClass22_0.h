#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightFormationRole; }

#define BLOHPFEHNPK___C__DISPLAYCLASS22_0_CTOR_OFFSET UNITYSDK_OFFSET(0xBA7D4C0)
#define BLOHPFEHNPK___C__DISPLAYCLASS22_0__GETROLEBYID_B__0_OFFSET UNITYSDK_OFFSET(0xBA7E780)

inline static constexpr unsigned int BLOHPFEHNPK___c__DisplayClass22_0_TypeDefinitionIndex = 64686;

	class BLOHPFEHNPK___c__DisplayClass22_0 : public ::System::Object
	{
	public:
		::System::UInt32 roleID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLOHPFEHNPK___C__DISPLAYCLASS22_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetRoleByID_b__0(::RPG::Client::GridFightFormationRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightFormationRole*))((::PBYTE)hIl2Cpp + BLOHPFEHNPK___C__DISPLAYCLASS22_0__GETROLEBYID_B__0_OFFSET))(this, a1);
		}

	};
