#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IntroDataRow; }

#define RPG_GAMECORE_INTRODATAROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D75D790)
#define RPG_GAMECORE_INTRODATAROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D75D0A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IntroDataRow_TypeDefinitionIndex = 13829;

	class IntroDataRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID Desc_Os; // 0x10
		::RPG::Client::TextID Title; // 0x20
		::System::UInt32 ID; // 0x30
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID Desc; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INTRODATAROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::IntroDataRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::IntroDataRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INTRODATAROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
