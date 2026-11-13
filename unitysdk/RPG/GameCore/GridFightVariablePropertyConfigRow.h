#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightVariablePropertyConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTVARIABLEPROPERTYCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA6AEA0)
#define RPG_GAMECORE_GRIDFIGHTVARIABLEPROPERTYCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EA6AC90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightVariablePropertyConfigRow_TypeDefinitionIndex = 13666;

	class GridFightVariablePropertyConfigRow : public ::System::Object
	{
	public:
		::System::String* VariableName; // 0x10
		::System::String* IconPath; // 0x18
		::System::String* MiniIconPath; // 0x20
		::RPG::Client::TextID Name; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTVARIABLEPROPERTYCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightVariablePropertyConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightVariablePropertyConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTVARIABLEPROPERTYCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
