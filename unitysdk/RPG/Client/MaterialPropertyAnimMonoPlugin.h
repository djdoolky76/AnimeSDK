#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client { class MaterialPropertyAnimBehavior_MaterialPropertyContent; }
namespace System { class String; }

#define RPG_CLIENT_MATERIALPROPERTYANIMMONOPLUGIN_CTOR_OFFSET UNITYSDK_OFFSET(0xD5D6020)
#define RPG_CLIENT_MATERIALPROPERTYANIMMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0xD5D5FD0)

namespace RPG::Client
{
	class MaterialPropertyAnimMonoPlugin
	{
	public:
		::RPG::Client::MaterialPropertyAnimBehavior_MaterialPropertyContent* PropertyContent0; // 0x30
		::System::Single Value0; // 0x38
		::System::Byte _padding0[0x4];
		::RPG::Client::MaterialPropertyAnimBehavior_MaterialPropertyContent* PropertyContent1; // 0x40
		::System::Single Value1; // 0x48
		::System::Byte _padding1[0x4];
		::RPG::Client::MaterialPropertyAnimBehavior_MaterialPropertyContent* PropertyContent2; // 0x50
		::System::Single Value2; // 0x58
		::System::Byte _padding2[0x4];
		::RPG::Client::MaterialPropertyAnimBehavior_MaterialPropertyContent* PropertyContent3; // 0x60
		::System::Single Value3; // 0x68
		::System::Byte _padding3[0x4];
		::RPG::Client::MaterialPropertyAnimBehavior_MaterialPropertyContent* PropertyContent4; // 0x70
		::System::Single Value4; // 0x78
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALPROPERTYANIMMONOPLUGIN_CTOR_OFFSET))(this);
		}

		::System::String* GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALPROPERTYANIMMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}

	};
}
