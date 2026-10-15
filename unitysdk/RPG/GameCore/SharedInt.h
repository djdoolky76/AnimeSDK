#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SharedValue.h"
#include "unitysdk/RPG/GameCore/SharedValueType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SharedInt; }
namespace System { class Object; }

#define RPG_GAMECORE_SHAREDINT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAD0830)
#define RPG_GAMECORE_SHAREDINT_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DAD0960)
#define RPG_GAMECORE_SHAREDINT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DAD09A0)
#define RPG_GAMECORE_SHAREDINT_IMGLGAIIPCA_OFFSET UNITYSDK_OFFSET(0x1DAD0950)
#define RPG_GAMECORE_SHAREDINT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAD0840)
#define RPG_GAMECORE_SHAREDINT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAD0800)

namespace RPG::GameCore
{
	class SharedInt : public ::RPG::GameCore::SharedValue
	{
	public:
		::System::Int32 Value; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHAREDINT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SharedInt* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SharedInt*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHAREDINT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SharedInt* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SharedInt*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHAREDINT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		::RPG::GameCore::SharedValueType IMGLGAIIPCA()
		{
			return ((::RPG::GameCore::SharedValueType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHAREDINT_IMGLGAIIPCA_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHAREDINT_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHAREDINT_GETHASHCODE_OFFSET))(this);
		}

	};
}
