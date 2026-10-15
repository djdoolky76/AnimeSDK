#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightOrbType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightOrbTypeRow; }
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTORBTYPEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D70A200)
#define RPG_GAMECORE_GRIDFIGHTORBTYPEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D70A080)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightOrbTypeRow_TypeDefinitionIndex = 13424;

	class GridFightOrbTypeRow : public ::System::Object
	{
	public:
		::System::String* PrefabPath; // 0x10
		::System::String* IconPath; // 0x18
		::RPG::GameCore::GridFightOrbType OrbType; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTORBTYPEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightOrbTypeRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightOrbTypeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTORBTYPEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
