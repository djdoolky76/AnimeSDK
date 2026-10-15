#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TimeRewindCheckSetStateResult.h"
#include "unitysdk/System/Object.h"
class DBMDNNBIOAI;
class PBHELLCIICI_KOJADBJNOHG;
namespace ParticleRecorder { class BackwardParticlesInfoSO; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TimeRewindAttachEff; }
namespace System { class Object; }
namespace System { class String; }

#define PBHELLCIICI_ANNDOCAELGF_OFFSET UNITYSDK_OFFSET(0xBFE6510)
#define PBHELLCIICI_DDBOJKIHNBK_OFFSET UNITYSDK_OFFSET(0xBFE6450)
#define PBHELLCIICI_FGKCPNNMFOL_1_OFFSET UNITYSDK_OFFSET(0xBFE68F0)
#define PBHELLCIICI_FGKCPNNMFOL_OFFSET UNITYSDK_OFFSET(0xBFE65B0)
#define PBHELLCIICI_NLFFDCOOONG_OFFSET UNITYSDK_OFFSET(0xBFE6B40)

inline static constexpr unsigned int PBHELLCIICI_TypeDefinitionIndex = 60850;

	class PBHELLCIICI : public ::System::Object
	{
	public:
		static ::ParticleRecorder::BackwardParticlesInfoSO* DDBOJKIHNBK(::System::String* a1)
		{
			return ((::ParticleRecorder::BackwardParticlesInfoSO*(*)(::System::String*))((::PBYTE)hIl2Cpp + PBHELLCIICI_DDBOJKIHNBK_OFFSET))(a1);
		}

		static ::System::Void ANNDOCAELGF(::RPG::Client::TimeRewindCheckSetStateResult a1)
		{
			return ((::System::Void(*)(::RPG::Client::TimeRewindCheckSetStateResult))((::PBYTE)hIl2Cpp + PBHELLCIICI_ANNDOCAELGF_OFFSET))(a1);
		}

		static ::System::Void FGKCPNNMFOL(::RPG::GameCore::TimeRewindAttachEff* a1, ::DBMDNNBIOAI* a2, ::RPG::GameCore::GameEntity* a3, ::PBHELLCIICI_KOJADBJNOHG* a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::RPG::GameCore::TimeRewindAttachEff*, ::DBMDNNBIOAI*, ::RPG::GameCore::GameEntity*, ::PBHELLCIICI_KOJADBJNOHG*, ::System::Boolean))((::PBYTE)hIl2Cpp + PBHELLCIICI_FGKCPNNMFOL_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void FGKCPNNMFOL_1(::Il2CppArray<::RPG::GameCore::TimeRewindAttachEff*>* a1, ::System::Object* a2, ::RPG::GameCore::GameEntity* a3, ::PBHELLCIICI_KOJADBJNOHG* a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::Il2CppArray<::RPG::GameCore::TimeRewindAttachEff*>*, ::System::Object*, ::RPG::GameCore::GameEntity*, ::PBHELLCIICI_KOJADBJNOHG*, ::System::Boolean))((::PBYTE)hIl2Cpp + PBHELLCIICI_FGKCPNNMFOL_1_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void NLFFDCOOONG(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + PBHELLCIICI_NLFFDCOOONG_OFFSET))(a1);
		}

	};
