#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PlayVideoQTEStage.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define PPJCPPLOBKP_CTOR_OFFSET UNITYSDK_OFFSET(0xCCC15E0)
#define PPJCPPLOBKP_GET_ONSEQUENCECOMPLETED_OFFSET UNITYSDK_OFFSET(0xCCC1600)
#define PPJCPPLOBKP_GET_ONSEQUENCEFAILED_OFFSET UNITYSDK_OFFSET(0xCCC1610)
#define PPJCPPLOBKP_GET_ONSTAGESTARTED_OFFSET UNITYSDK_OFFSET(0xCCC15F0)

inline static constexpr unsigned int PPJCPPLOBKP_TypeDefinitionIndex = 74947;

	class PPJCPPLOBKP : public ::System::Object
	{
	public:
		::System::Action* _OnSequenceFailed_k__BackingField; // 0x10
		::System::Action_1<::RPG::Client::PlayVideoQTEStage>* _OnStageStarted_k__BackingField; // 0x18
		::System::Action* _OnSequenceCompleted_k__BackingField; // 0x20
		::System::Void _ctor(::System::Action_1<::RPG::Client::PlayVideoQTEStage>* a1, ::System::Action* a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::PlayVideoQTEStage>*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + PPJCPPLOBKP_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Action_1<::RPG::Client::PlayVideoQTEStage>* get_OnStageStarted()
		{
			return ((::System::Action_1<::RPG::Client::PlayVideoQTEStage>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPJCPPLOBKP_GET_ONSTAGESTARTED_OFFSET))(this);
		}

		::System::Action* get_OnSequenceCompleted()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPJCPPLOBKP_GET_ONSEQUENCECOMPLETED_OFFSET))(this);
		}

		::System::Action* get_OnSequenceFailed()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPJCPPLOBKP_GET_ONSEQUENCEFAILED_OFFSET))(this);
		}

	};
