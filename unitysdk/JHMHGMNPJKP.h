#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/SwordTrainingPerformanceType.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class LevelGraphComponent; }
namespace RPG::GameCore { class PerformanceIDPair; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JHMHGMNPJKP_EGENFIKENLL_OFFSET UNITYSDK_OFFSET(0xB1BE8A0)
#define JHMHGMNPJKP_ELPMPOGCFKJ_OFFSET UNITYSDK_OFFSET(0xB1BE930)
#define JHMHGMNPJKP_HKAFCEIDMDO_1_OFFSET UNITYSDK_OFFSET(0xB1BEB80)
#define JHMHGMNPJKP_HKAFCEIDMDO_OFFSET UNITYSDK_OFFSET(0xB1BEA50)

	class JHMHGMNPJKP : public ::System::Object
	{
	public:
		// static const ::System::String* KHGMBLINPMP; // 0x0
		static ::RPG::GameCore::LevelGraphComponent* EGENFIKENLL(::RPG::Client::SwordTrainingPerformanceType a1, ::System::Collections::Generic::List_1<::RPG::GameCore::PerformanceIDPair*>* a2, ::System::Action* a3)
		{
			return ((::RPG::GameCore::LevelGraphComponent*(*)(::RPG::Client::SwordTrainingPerformanceType, ::System::Collections::Generic::List_1<::RPG::GameCore::PerformanceIDPair*>*, ::System::Action*))((::PBYTE)hIl2Cpp + JHMHGMNPJKP_EGENFIKENLL_OFFSET))(a1, a2, a3);
		}

		static ::System::Collections::Generic::List_1<::RPG::GameCore::PerformanceIDPair*>* HKAFCEIDMDO(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::PerformanceIDPair*>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + JHMHGMNPJKP_HKAFCEIDMDO_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::RPG::GameCore::PerformanceIDPair*>* HKAFCEIDMDO_1(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::PerformanceIDPair*>*(*)(::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + JHMHGMNPJKP_HKAFCEIDMDO_1_OFFSET))(a1);
		}

		static ::RPG::GameCore::LevelGraphComponent* ELPMPOGCFKJ(::System::Collections::Generic::List_1<::RPG::GameCore::PerformanceIDPair*>* a1, ::System::Action* a2)
		{
			return ((::RPG::GameCore::LevelGraphComponent*(*)(::System::Collections::Generic::List_1<::RPG::GameCore::PerformanceIDPair*>*, ::System::Action*))((::PBYTE)hIl2Cpp + JHMHGMNPJKP_ELPMPOGCFKJ_OFFSET))(a1, a2);
		}

	};
