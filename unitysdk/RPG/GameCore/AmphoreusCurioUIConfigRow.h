#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AmphoreusCurioUIConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_AMPHOREUSCURIOUICONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3F2370)
#define RPG_GAMECORE_AMPHOREUSCURIOUICONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D3F1AE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AmphoreusCurioUIConfigRow_TypeDefinitionIndex = 11967;

	class AmphoreusCurioUIConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::Client::TextID>* TextmapIDList; // 0x10
		::Il2CppArray<::System::UInt32>* ReplyIDList; // 0x18
		::System::String* IconPath; // 0x20
		::System::UInt32 Tag; // 0x28
		::System::UInt32 ID; // 0x2C
		::RPG::Client::TextID Name; // 0x30
		::RPG::Client::TextID NameAfter; // 0x40
		::RPG::Client::TextID Desc; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AMPHOREUSCURIOUICONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::AmphoreusCurioUIConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AmphoreusCurioUIConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AMPHOREUSCURIOUICONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
