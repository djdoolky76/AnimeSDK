#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ShaderPropertyConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_SHADERPROPERTYCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DACE810)
#define RPG_GAMECORE_SHADERPROPERTYCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DACE5A0)

namespace RPG::GameCore
{
	class ShaderPropertyConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* ShaderPropertyKeywordMap; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* CharacterShaderPropertyKeywordMap; // 0x18
		::Il2CppArray<::System::String*>* SharedKeywordList; // 0x20
		::Il2CppArray<::System::String*>* ShaderLUTNameList; // 0x28
		::Il2CppArray<::System::String*>* CharacterLUTParameterList; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHADERPROPERTYCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShaderPropertyConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShaderPropertyConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHADERPROPERTYCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
