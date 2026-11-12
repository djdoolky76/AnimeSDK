#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DepletablePoolContentRow; }

#define RPG_GAMECORE_DEPLETABLEPOOLCONTENTROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E80D610)
#define RPG_GAMECORE_DEPLETABLEPOOLCONTENTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E80D400)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DepletablePoolContentRow_TypeDefinitionIndex = 13199;

	class DepletablePoolContentRow : public ::System::Object
	{
	public:
		::System::Boolean IsGrandPrize; // 0x10
		::System::Byte _padding0[0x3];
		::System::UInt32 ItemNum; // 0x14
		::System::UInt32 ContentID; // 0x18
		::System::UInt32 ItemID; // 0x1C
		::System::UInt32 ContentGroupID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEPLETABLEPOOLCONTENTROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::DepletablePoolContentRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DepletablePoolContentRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEPLETABLEPOOLCONTENTROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
