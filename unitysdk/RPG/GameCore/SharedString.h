#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SharedValue.h"
#include "unitysdk/RPG/GameCore/SharedValueType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SharedString; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SHAREDSTRING_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAA33C0)
#define RPG_GAMECORE_SHAREDSTRING_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DAA34D0)
#define RPG_GAMECORE_SHAREDSTRING_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DAA3530)
#define RPG_GAMECORE_SHAREDSTRING_IMGLGAIIPCA_OFFSET UNITYSDK_OFFSET(0x1DAA34C0)
#define RPG_GAMECORE_SHAREDSTRING_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAA33D0)
#define RPG_GAMECORE_SHAREDSTRING_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAA3390)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SharedString_TypeDefinitionIndex = 18306;

	class SharedString : public ::RPG::GameCore::SharedValue
	{
	public:
		::System::String* Value; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHAREDSTRING_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SharedString* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SharedString*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHAREDSTRING_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SharedString* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SharedString*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHAREDSTRING_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		::RPG::GameCore::SharedValueType IMGLGAIIPCA()
		{
			return ((::RPG::GameCore::SharedValueType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHAREDSTRING_IMGLGAIIPCA_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHAREDSTRING_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHAREDSTRING_GETHASHCODE_OFFSET))(this);
		}

	};
}
