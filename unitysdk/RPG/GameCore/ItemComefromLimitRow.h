#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComefromOpenType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ItemComefromLimitRow; }

#define RPG_GAMECORE_ITEMCOMEFROMLIMITROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7631E0)
#define RPG_GAMECORE_ITEMCOMEFROMLIMITROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D7623B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ItemComefromLimitRow_TypeDefinitionIndex = 13867;

	class ItemComefromLimitRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* OpenParaList; // 0x10
		::System::UInt32 ComefromID; // 0x18
		::RPG::GameCore::ComefromOpenType OpenType; // 0x1C
		::System::UInt32 ID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCOMEFROMLIMITROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ItemComefromLimitRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ItemComefromLimitRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCOMEFROMLIMITROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
