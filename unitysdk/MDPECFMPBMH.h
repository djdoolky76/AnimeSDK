#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class MDPECFMPBMH;
namespace RPG::GameCore { class DynamicFloat; }

#define MDPECFMPBMH_CTOR_OFFSET UNITYSDK_OFFSET(0x1D14CD70)
#define MDPECFMPBMH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D14CD80)
#define MDPECFMPBMH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D14CD30)

	class MDPECFMPBMH : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* AJHHCOHFIFA; // 0x18
		::RPG::GameCore::PropertyModifyFunction FKCKKFALPBK; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDPECFMPBMH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::MDPECFMPBMH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MDPECFMPBMH*))((::PBYTE)hIl2Cpp + MDPECFMPBMH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::MDPECFMPBMH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MDPECFMPBMH*))((::PBYTE)hIl2Cpp + MDPECFMPBMH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
