#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StageInfiniteGroupRow; }

#define RPG_GAMECORE_STAGEINFINITEGROUPROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1ED20210)
#define RPG_GAMECORE_STAGEINFINITEGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1ED20100)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StageInfiniteGroupRow_TypeDefinitionIndex = 15305;

	class StageInfiniteGroupRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* WaveIDList; // 0x10
		::System::UInt32 WaveGroupID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEINFINITEGROUPROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::StageInfiniteGroupRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StageInfiniteGroupRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEINFINITEGROUPROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
