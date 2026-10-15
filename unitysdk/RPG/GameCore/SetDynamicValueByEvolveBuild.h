#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/EvolveBuildPropertyType.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetDynamicValueByEvolveBuild; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYEVOLVEBUILD_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA76920)
#define RPG_GAMECORE_SETDYNAMICVALUEBYEVOLVEBUILD_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1DA76B10)
#define RPG_GAMECORE_SETDYNAMICVALUEBYEVOLVEBUILD_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA76930)
#define RPG_GAMECORE_SETDYNAMICVALUEBYEVOLVEBUILD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA768F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByEvolveBuild_TypeDefinitionIndex = 23098;

	class SetDynamicValueByEvolveBuild : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::System::String* DynamicKey; // 0x18
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x20
		::RPG::GameCore::EvolveBuildPropertyType ValueType; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYEVOLVEBUILD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByEvolveBuild* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByEvolveBuild*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYEVOLVEBUILD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByEvolveBuild* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByEvolveBuild*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYEVOLVEBUILD_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYEVOLVEBUILD_GETDYNAMICKEY_OFFSET))(this);
		}

	};
}
