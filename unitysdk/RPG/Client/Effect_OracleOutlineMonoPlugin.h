#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client::Prop { class OraclePuzzleItem; }
namespace System { class String; }
namespace UnityEngine { class Material; }

#define RPG_CLIENT_EFFECT_ORACLEOUTLINEMONOPLUGIN_CTOR_OFFSET UNITYSDK_OFFSET(0xCD44390)
#define RPG_CLIENT_EFFECT_ORACLEOUTLINEMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0xCD44340)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_OracleOutlineMonoPlugin_TypeDefinitionIndex = 70514;

	class Effect_OracleOutlineMonoPlugin
	{
	public:
		::System::Int32 ExampleProperty; // 0x30
		::System::Byte _padding0[0x4];
		::RPG::Client::Prop::OraclePuzzleItem* target; // 0x38
		::System::Int32 cutSlice; // 0x40
		::System::Byte _padding1[0x4];
		::UnityEngine::Material* mat; // 0x48
		::System::Single outlineWidth; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_ORACLEOUTLINEMONOPLUGIN_CTOR_OFFSET))(this);
		}

		::System::String* GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_ORACLEOUTLINEMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}

	};
}
