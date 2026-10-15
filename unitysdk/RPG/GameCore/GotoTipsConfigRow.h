#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ConditionType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GotoTipsConfigRow; }

#define RPG_GAMECORE_GOTOTIPSCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D722800)
#define RPG_GAMECORE_GOTOTIPSCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D7221C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GotoTipsConfigRow_TypeDefinitionIndex = 13333;

	class GotoTipsConfigRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID Name; // 0x10
		::RPG::GameCore::ConditionType ID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GOTOTIPSCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GotoTipsConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GotoTipsConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GOTOTIPSCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
