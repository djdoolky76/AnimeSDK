#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AutoMappingAttachPointType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AutoMappingAttachPoint; }
namespace System { class String; }

#define RPG_GAMECORE_AUTOMAPPINGATTACHPOINT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D40A8D0)
#define RPG_GAMECORE_AUTOMAPPINGATTACHPOINT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D40A8E0)
#define RPG_GAMECORE_AUTOMAPPINGATTACHPOINT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D40A8A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AutoMappingAttachPoint_TypeDefinitionIndex = 23194;

	class AutoMappingAttachPoint : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::AutoMappingAttachPointType AutoType; // 0x18
		::System::Byte _padding0[0x4];
		::System::String* SourcePointName; // 0x20
		::System::String* MappingTo; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AUTOMAPPINGATTACHPOINT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AutoMappingAttachPoint* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AutoMappingAttachPoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AUTOMAPPINGATTACHPOINT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AutoMappingAttachPoint* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AutoMappingAttachPoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AUTOMAPPINGATTACHPOINT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
