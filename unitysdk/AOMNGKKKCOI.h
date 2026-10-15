#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class AOMNGKKKCOI;
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }

#define AOMNGKKKCOI_CTOR_OFFSET UNITYSDK_OFFSET(0x1CCEA860)
#define AOMNGKKKCOI_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CCEA870)
#define AOMNGKKKCOI_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CCEA820)

	class AOMNGKKKCOI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* HOCMHABKLGJ; // 0x18
		::RPG::GameCore::DynamicFloat* KMDEBAKFJML; // 0x20
		::System::Boolean GNDCCBNILML; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOMNGKKKCOI_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::AOMNGKKKCOI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::AOMNGKKKCOI*))((::PBYTE)hIl2Cpp + AOMNGKKKCOI_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::AOMNGKKKCOI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::AOMNGKKKCOI*))((::PBYTE)hIl2Cpp + AOMNGKKKCOI_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
