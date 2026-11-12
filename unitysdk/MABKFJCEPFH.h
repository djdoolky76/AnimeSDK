#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CruiseSpeedSignType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class MABKFJCEPFH;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define MABKFJCEPFH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E32E430)
#define MABKFJCEPFH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E32E440)
#define MABKFJCEPFH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E32E3F0)

inline static constexpr unsigned int MABKFJCEPFH_TypeDefinitionIndex = 23289;

	class MABKFJCEPFH : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* ECHFEMAFJNN; // 0x18
		::RPG::GameCore::DynamicFloat* AEMCMEKJFAI; // 0x20
		::System::String* KDEFIJKLOFL; // 0x28
		::RPG::GameCore::DynamicFloat* JBBEGAPMLGH; // 0x30
		::RPG::GameCore::DynamicFloat* OKNPIGMFMHC; // 0x38
		::RPG::GameCore::TargetEvaluator* BPIBFOGDDHD; // 0x40
		::RPG::GameCore::CruiseSpeedSignType PDAKLJINMDD; // 0x48
		::System::Boolean EHPEBJEDEBH; // 0x4C
		::System::Boolean HFINICPGGNJ; // 0x4D
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MABKFJCEPFH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::MABKFJCEPFH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MABKFJCEPFH*))((::PBYTE)hIl2Cpp + MABKFJCEPFH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::MABKFJCEPFH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MABKFJCEPFH*))((::PBYTE)hIl2Cpp + MABKFJCEPFH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
