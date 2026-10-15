#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MarblePhaseType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MarblePhaseRow; }

#define RPG_GAMECORE_MARBLEPHASEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D844210)
#define RPG_GAMECORE_MARBLEPHASEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D843BD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarblePhaseRow_TypeDefinitionIndex = 11867;

	class MarblePhaseRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID Name; // 0x10
		::RPG::GameCore::MarblePhaseType ID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEPHASEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarblePhaseRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarblePhaseRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEPHASEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
