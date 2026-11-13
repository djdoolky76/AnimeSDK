#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/LoadingDescGroup.h"
#include "unitysdk/System/Object.h"
class CKAPDOPHKJB;
class FCOEMCEDLNL;
namespace RPG::GameCore { class LoadingDescRow; }

#define RPG_GAMECORE_LOADINGDESCROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1F0704D0)
#define RPG_GAMECORE_LOADINGDESCROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1F06FAE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LoadingDescRow_TypeDefinitionIndex = 14140;

	class LoadingDescRow : public ::System::Object
	{
	public:
		::Il2CppArray<::CKAPDOPHKJB*>* ForceParam; // 0x10
		::Il2CppArray<::CKAPDOPHKJB*>* UnlockParam; // 0x18
		::Il2CppArray<::CKAPDOPHKJB*>* UnlockParamForOr; // 0x20
		::Il2CppArray<::CKAPDOPHKJB*>* LockParamForOr; // 0x28
		::Il2CppArray<::CKAPDOPHKJB*>* ForceParamForOr; // 0x30
		::Il2CppArray<::CKAPDOPHKJB*>* LockParam; // 0x38
		::RPG::GameCore::LoadingDescGroup Group; // 0x40
		::System::UInt32 ImageID; // 0x44
		::System::UInt32 MaxLevel; // 0x48
		::System::UInt32 MinLevel; // 0x4C
		::System::UInt32 Weight; // 0x50
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID TitleTextmapID; // 0x58
		::RPG::Client::TextID DescTextmapID; // 0x68
		::System::UInt32 ID; // 0x78
		::System::UInt32 MinWorldLevel; // 0x7C
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
