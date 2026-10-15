#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BelobogShopUIConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_BELOBOGSHOPUICONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D46B540)
#define RPG_GAMECORE_BELOBOGSHOPUICONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D46AD90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BelobogShopUIConfigRow_TypeDefinitionIndex = 11965;

	class BelobogShopUIConfigRow : public ::System::Object
	{
	public:
		::System::String* ImgPath; // 0x10
		::System::String* IconPath; // 0x18
		::Il2CppArray<::System::UInt32>* ReplyIDList; // 0x20
		::System::UInt32 ID; // 0x28
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID Desc; // 0x30
		::RPG::Client::TextID Name; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BELOBOGSHOPUICONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::BelobogShopUIConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BelobogShopUIConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BELOBOGSHOPUICONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
