#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ConstValueFantasticStoryRow; }
namespace System { class String; }

#define RPG_GAMECORE_CONSTVALUEFANTASTICSTORYROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5D9840)
#define RPG_GAMECORE_CONSTVALUEFANTASTICSTORYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D5D92C0)

namespace RPG::GameCore
{
	class ConstValueFantasticStoryRow : public ::System::Object
	{
	public:
		::System::String* Value; // 0x10
		::System::String* ConstValueName; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSTVALUEFANTASTICSTORYROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ConstValueFantasticStoryRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ConstValueFantasticStoryRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSTVALUEFANTASTICSTORYROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
