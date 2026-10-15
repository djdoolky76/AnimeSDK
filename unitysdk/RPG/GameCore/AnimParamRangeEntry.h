#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AnimParamRangeEntry; }
namespace System { class String; }

#define RPG_GAMECORE_ANIMPARAMRANGEENTRY_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3F2B40)
#define RPG_GAMECORE_ANIMPARAMRANGEENTRY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3F29F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AnimParamRangeEntry_TypeDefinitionIndex = 16289;

	class AnimParamRangeEntry : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* ParameterKey; // 0x10
		::System::Single MinValue; // 0x18
		::System::Single MaxValue; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANIMPARAMRANGEENTRY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AnimParamRangeEntry* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AnimParamRangeEntry*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANIMPARAMRANGEENTRY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
