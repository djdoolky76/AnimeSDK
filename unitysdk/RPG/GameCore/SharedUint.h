#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SharedValue.h"
#include "unitysdk/RPG/GameCore/SharedValueType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SharedUint; }
namespace System { class Object; }

#define RPG_GAMECORE_SHAREDUINT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAD1180)
#define RPG_GAMECORE_SHAREDUINT_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DAD1280)
#define RPG_GAMECORE_SHAREDUINT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DAD12C0)
#define RPG_GAMECORE_SHAREDUINT_IMGLGAIIPCA_OFFSET UNITYSDK_OFFSET(0x1DAD1270)
#define RPG_GAMECORE_SHAREDUINT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAD1190)
#define RPG_GAMECORE_SHAREDUINT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAD1150)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SharedUint_TypeDefinitionIndex = 18304;

	class SharedUint : public ::RPG::GameCore::SharedValue
	{
	public:
		::System::UInt32 Value; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHAREDUINT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SharedUint* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SharedUint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHAREDUINT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SharedUint* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SharedUint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHAREDUINT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		::RPG::GameCore::SharedValueType IMGLGAIIPCA()
		{
			return ((::RPG::GameCore::SharedValueType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHAREDUINT_IMGLGAIIPCA_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHAREDUINT_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHAREDUINT_GETHASHCODE_OFFSET))(this);
		}

	};
}
