#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RecordRefreshType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RecordRefreshRow; }

#define RPG_GAMECORE_RECORDREFRESHROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D974EB0)
#define RPG_GAMECORE_RECORDREFRESHROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D974800)

namespace RPG::GameCore
{
	class RecordRefreshRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* RefreshTime; // 0x10
		::RPG::GameCore::RecordRefreshType RefreshType; // 0x18
		::System::Boolean IsInteract; // 0x1C
		::System::Byte _padding0[0x3];
		::System::UInt32 RefreshID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECORDREFRESHROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RecordRefreshRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RecordRefreshRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECORDREFRESHROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
