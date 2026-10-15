#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/SwordTrainingPerformanceType.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KMFDPCOPGGC_CTOR_OFFSET UNITYSDK_OFFSET(0xB552920)
#define KMFDPCOPGGC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB552930)

inline static constexpr unsigned int KMFDPCOPGGC_TypeDefinitionIndex = 61940;

	class KMFDPCOPGGC : public ::System::Object
	{
	public:
		::System::Action* NKHBIAGFFFC; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* GOJCJPGDBCD; // 0x18
		::RPG::Client::SwordTrainingPerformanceType DNGFHOEACBI; // 0x20
		::System::Void _ctor(::RPG::Client::SwordTrainingPerformanceType a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingPerformanceType, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Action*))((::PBYTE)hIl2Cpp + KMFDPCOPGGC_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMFDPCOPGGC_DISPOSE_OFFSET))(this);
		}

	};
