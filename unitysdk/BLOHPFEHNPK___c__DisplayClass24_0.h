#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightFormationRole; }
namespace System::Collections::Generic { class KeyValuePair; }

#define BLOHPFEHNPK___C__DISPLAYCLASS24_0_CTOR_OFFSET UNITYSDK_OFFSET(0xBA80BD0)
#define BLOHPFEHNPK___C__DISPLAYCLASS24_0__CONTAINSROLEID_B__0_OFFSET UNITYSDK_OFFSET(0xBA81D40)

	class BLOHPFEHNPK___c__DisplayClass24_0 : public ::System::Object
	{
	public:
		::System::UInt32 roleID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLOHPFEHNPK___C__DISPLAYCLASS24_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _ContainsRoleID_b__0(::System::Collections::Generic::KeyValuePair* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair*))((::PBYTE)hIl2Cpp + BLOHPFEHNPK___C__DISPLAYCLASS24_0__CONTAINSROLEID_B__0_OFFSET))(this, a1);
		}

	};
