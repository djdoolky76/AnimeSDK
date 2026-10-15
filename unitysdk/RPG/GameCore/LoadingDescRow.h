#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/LoadingDescGroup.h"
#include "unitysdk/System/Object.h"
class CKAPDOPHKJB;
class FCOEMCEDLNL;
namespace RPG::GameCore { class LoadingDescRow; }

#define RPG_GAMECORE_LOADINGDESCROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7EB970)
#define RPG_GAMECORE_LOADINGDESCROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D7EAF80)

namespace RPG::GameCore
{
	class LoadingDescRow : public ::System::Object
	{
	public:
		::Il2CppArray<::CKAPDOPHKJB*>* UnlockParam; // 0x10
		::Il2CppArray<::CKAPDOPHKJB*>* UnlockParamForOr; // 0x18
		::Il2CppArray<::CKAPDOPHKJB*>* LockParam; // 0x20
		::Il2CppArray<::CKAPDOPHKJB*>* ForceParamForOr; // 0x28
		::Il2CppArray<::CKAPDOPHKJB*>* LockParamForOr; // 0x30
		::Il2CppArray<::CKAPDOPHKJB*>* ForceParam; // 0x38
		::System::UInt32 ID; // 0x40
		::System::UInt32 Weight; // 0x44
		::RPG::Client::TextID TitleTextmapID; // 0x48
		::System::UInt32 MinLevel; // 0x58
		::RPG::GameCore::LoadingDescGroup Group; // 0x5C
		::System::UInt32 ImageID; // 0x60
		::System::UInt32 MinWorldLevel; // 0x64
		::System::UInt32 MaxLevel; // 0x68
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID DescTextmapID; // 0x70
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOADINGDESCROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::LoadingDescRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LoadingDescRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOADINGDESCROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
