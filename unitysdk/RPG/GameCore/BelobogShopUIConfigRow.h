#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BelobogShopUIConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_BELOBOGSHOPUICONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF447F0)
#define RPG_GAMECORE_BELOBOGSHOPUICONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DF44040)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BelobogShopUIConfigRow_TypeDefinitionIndex = 12022;

	class BelobogShopUIConfigRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::Il2CppArray<::System::UInt32>* ReplyIDList; // 0x18
		::System::String* ImgPath; // 0x20
		::RPG::Client::TextID Name; // 0x28
		::RPG::Client::TextID Desc; // 0x38
		::System::UInt32 ID; // 0x48
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
