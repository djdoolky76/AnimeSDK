#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SummonerEnergyBarType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class DotBarTypeConfig; }
namespace RPG::GameCore { class NumBarTypeConfig; }
namespace RPG::GameCore { class ProgressBarTypeConfig; }

#define ALNGMHIJEKN_CTOR_OFFSET UNITYSDK_OFFSET(0x155712E0)

inline static constexpr unsigned int ALNGMHIJEKN_TypeDefinitionIndex = 55572;

	class ALNGMHIJEKN : public ::System::Object
	{
	public:
		::RPG::GameCore::ProgressBarTypeConfig* JJOBGHGHNPJ; // 0x10
		::RPG::GameCore::DotBarTypeConfig* CEPLINKFOHN; // 0x18
		::RPG::GameCore::NumBarTypeConfig* HOEEFFGDHOI; // 0x20
		::System::Nullable_1<::RPG::GameCore::SummonerEnergyBarType> OPFMFGGBAKC; // 0x28
		::System::Nullable_1<::System::Int32> HOCMHABKLGJ; // 0x30
		::System::Nullable_1<::System::Int32> JADMAPDKLKL; // 0x38
		::System::Nullable_1<::System::Int32> KMDEBAKFJML; // 0x40
		::System::Nullable_1<::System::Boolean> CAGCHKJHMPD; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALNGMHIJEKN_CTOR_OFFSET))(this);
		}

	};
