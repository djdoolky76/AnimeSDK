#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ComicDessertIllustrationRow; }
namespace System { class String; }

#define RPG_GAMECORE_COMICDESSERTILLUSTRATIONROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7DCA10)
#define RPG_GAMECORE_COMICDESSERTILLUSTRATIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E7DC7C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComicDessertIllustrationRow_TypeDefinitionIndex = 11243;

	class ComicDessertIllustrationRow : public ::System::Object
	{
	public:
		::System::String* ComicPath; // 0x10
		::RPG::Client::TextID ComicTitle_Brief; // 0x18
		::System::UInt32 ID; // 0x28
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID ComicTitle_Full; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMICDESSERTILLUSTRATIONROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ComicDessertIllustrationRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ComicDessertIllustrationRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMICDESSERTILLUSTRATIONROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
