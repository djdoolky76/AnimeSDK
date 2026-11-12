#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector4.h"
namespace RPG::Client { class MaterialPropertyAnimBehavior_MaterialPropertyContent; }
namespace System { class String; }

#define RPG_CLIENT_MATERIALPROPERTYANIMMONOPLUGIN_CTOR_OFFSET UNITYSDK_OFFSET(0xE028AA0)
#define RPG_CLIENT_MATERIALPROPERTYANIMMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0xE028A50)

namespace RPG::Client
{
	inline static constexpr unsigned int MaterialPropertyAnimMonoPlugin_TypeDefinitionIndex = 72701;

	class MaterialPropertyAnimMonoPlugin
	{
	public:
		::RPG::Client::MaterialPropertyAnimBehavior_MaterialPropertyContent* PropertyContent0; // 0x30
		::System::Single Value0; // 0x38
		::UnityEngine::Vector4 VectorValue0; // 0x3C
		::System::Byte _padding0[0x4];
		::RPG::Client::MaterialPropertyAnimBehavior_MaterialPropertyContent* PropertyContent1; // 0x50
		::System::Single Value1; // 0x58
		::UnityEngine::Vector4 VectorValue1; // 0x5C
		::System::Byte _padding1[0x4];
		::RPG::Client::MaterialPropertyAnimBehavior_MaterialPropertyContent* PropertyContent2; // 0x70
		::System::Single Value2; // 0x78
		::UnityEngine::Vector4 VectorValue2; // 0x7C
		::System::Byte _padding2[0x4];
		::RPG::Client::MaterialPropertyAnimBehavior_MaterialPropertyContent* PropertyContent3; // 0x90
		::System::Single Value3; // 0x98
		::UnityEngine::Vector4 VectorValue3; // 0x9C
		::System::Byte _padding3[0x4];
		::RPG::Client::MaterialPropertyAnimBehavior_MaterialPropertyContent* PropertyContent4; // 0xB0
		::System::Single Value4; // 0xB8
		::UnityEngine::Vector4 VectorValue4; // 0xBC
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
