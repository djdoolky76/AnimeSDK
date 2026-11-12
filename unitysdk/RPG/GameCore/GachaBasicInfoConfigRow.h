#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GachaType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GachaBasicInfoConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_GACHABASICINFOCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E904380)
#define RPG_GAMECORE_GACHABASICINFOCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E903E90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GachaBasicInfoConfigRow_TypeDefinitionIndex = 13423;

	class GachaBasicInfoConfigRow : public ::System::Object
	{
	public:
		::System::String* EndTime; // 0x10
		::System::String* StartTime; // 0x18
		::System::String* PoolLabelIconSelected; // 0x20
		::System::String* PrefabPath; // 0x28
		::System::String* PoolLabelIcon; // 0x30
		::RPG::Client::TextID PoolDescFTC; // 0x38
		::RPG::Client::TextID PoolDesc; // 0x48
		::RPG::Client::TextID PoolName; // 0x58
		::RPG::Client::TextID TypeTitle; // 0x68
		::RPG::GameCore::GachaType GachaType; // 0x78
		::System::UInt32 SortID; // 0x7C
		::System::UInt32 GachaID; // 0x80
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GACHABASICINFOCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GachaBasicInfoConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GachaBasicInfoConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GACHABASICINFOCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
