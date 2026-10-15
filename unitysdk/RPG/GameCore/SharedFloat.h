#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SharedValue.h"
#include "unitysdk/RPG/GameCore/SharedValueType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SharedFloat; }
namespace System { class Object; }

#define RPG_GAMECORE_SHAREDFLOAT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAA2DE0)
#define RPG_GAMECORE_SHAREDFLOAT_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DAA2EF0)
#define RPG_GAMECORE_SHAREDFLOAT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DAA2F40)
#define RPG_GAMECORE_SHAREDFLOAT_IMGLGAIIPCA_OFFSET UNITYSDK_OFFSET(0x1DAA2EE0)
#define RPG_GAMECORE_SHAREDFLOAT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAA2DF0)
#define RPG_GAMECORE_SHAREDFLOAT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAA2DB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SharedFloat_TypeDefinitionIndex = 18303;

	class SharedFloat : public ::RPG::GameCore::SharedValue
	{
	public:
		::System::Single Value; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHAREDFLOAT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SharedFloat* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SharedFloat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHAREDFLOAT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SharedFloat* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SharedFloat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHAREDFLOAT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		::RPG::GameCore::SharedValueType IMGLGAIIPCA()
		{
			return ((::RPG::GameCore::SharedValueType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHAREDFLOAT_IMGLGAIIPCA_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHAREDFLOAT_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHAREDFLOAT_GETHASHCODE_OFFSET))(this);
		}

	};
}
