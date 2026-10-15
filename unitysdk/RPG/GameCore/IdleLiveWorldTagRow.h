#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveWorldTagRow; }
namespace System { class String; }

#define RPG_GAMECORE_IDLELIVEWORLDTAGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D754250)
#define RPG_GAMECORE_IDLELIVEWORLDTAGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D7540B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveWorldTagRow_TypeDefinitionIndex = 11774;

	class IdleLiveWorldTagRow : public ::System::Object
	{
	public:
		::System::String* Icon; // 0x10
		::RPG::Client::TextID WorldTag; // 0x18
		::System::UInt32 WorldTagID; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEWORLDTAGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::IdleLiveWorldTagRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::IdleLiveWorldTagRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEWORLDTAGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
