#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StageParamEntry; }
namespace System { class String; }

#define RPG_GAMECORE_STAGEPARAMENTRY_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB12FF0)
#define RPG_GAMECORE_STAGEPARAMENTRY_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DB12EB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StageParamEntry_TypeDefinitionIndex = 15143;

	class StageParamEntry : public ::System::Object
	{
	public:
		::System::String* Key; // 0x10
		::RPG::GameCore::FixPoint Value; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEPARAMENTRY_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::StageParamEntry* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StageParamEntry*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEPARAMENTRY_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
