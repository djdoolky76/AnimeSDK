#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/HeliobusPostType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HeliobusPostTypeConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_HELIOBUSPOSTTYPECONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA84E20)
#define RPG_GAMECORE_HELIOBUSPOSTTYPECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EA84750)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HeliobusPostTypeConfigRow_TypeDefinitionIndex = 13912;

	class HeliobusPostTypeConfigRow : public ::System::Object
	{
	public:
		::System::String* PostTypeIconPath; // 0x10
		::System::String* PostTypeIconPathUnselected; // 0x18
		::RPG::GameCore::HeliobusPostType PostType; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID PostTypeName; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSPOSTTYPECONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::HeliobusPostTypeConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HeliobusPostTypeConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSPOSTTYPECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
