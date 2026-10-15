#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/SharedValueType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SharedValue; }
namespace System { class String; }

#define RPG_GAMECORE_SHAREDVALUE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAD0450)
#define RPG_GAMECORE_SHAREDVALUE_IMGLGAIIPCA_OFFSET UNITYSDK_OFFSET(0x1DAD17C0)
#define RPG_GAMECORE_SHAREDVALUE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAD1720)
#define RPG_GAMECORE_SHAREDVALUE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAD12D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SharedValue_TypeDefinitionIndex = 18302;

	class SharedValue : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Key; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHAREDVALUE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SharedValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SharedValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHAREDVALUE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SharedValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SharedValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHAREDVALUE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		::RPG::GameCore::SharedValueType IMGLGAIIPCA()
		{
			return ((::RPG::GameCore::SharedValueType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHAREDVALUE_IMGLGAIIPCA_OFFSET))(this);
		}

	};
}
