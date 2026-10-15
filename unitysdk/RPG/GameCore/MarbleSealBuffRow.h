#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MarbleSealBuffRow; }
namespace System { class String; }

#define RPG_GAMECORE_MARBLESEALBUFFROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D846E20)
#define RPG_GAMECORE_MARBLESEALBUFFROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D846830)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleSealBuffRow_TypeDefinitionIndex = 11849;

	class MarbleSealBuffRow : public ::System::Object
	{
	public:
		::System::String* AssetsPath; // 0x10
		::System::UInt32 ID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLESEALBUFFROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleSealBuffRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleSealBuffRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLESEALBUFFROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
