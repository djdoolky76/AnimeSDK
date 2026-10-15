#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PreAvatarTextmapConfigRow; }

#define RPG_GAMECORE_PREAVATARTEXTMAPCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D910D50)
#define RPG_GAMECORE_PREAVATARTEXTMAPCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D910BD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PreAvatarTextmapConfigRow_TypeDefinitionIndex = 14560;

	class PreAvatarTextmapConfigRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID PreAvatarName; // 0x10
		::System::UInt32 PreAvatarID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PREAVATARTEXTMAPCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PreAvatarTextmapConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PreAvatarTextmapConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PREAVATARTEXTMAPCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
