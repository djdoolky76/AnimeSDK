#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class RtAttackData; }
namespace RPG::GameCore { class TaskContext; }

#define NOKJBIHAOCM_CTOR_OFFSET UNITYSDK_OFFSET(0xBCEBF30)
#define NOKJBIHAOCM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBCEBF80)

inline static constexpr unsigned int NOKJBIHAOCM_TypeDefinitionIndex = 53845;

	class NOKJBIHAOCM : public ::System::Object
	{
	public:
		::RPG::GameCore::RtAttackData* FHEPHLNLKJL; // 0x10
		::RPG::GameCore::AttackDamageType ECBKGBGGLEO; // 0x18
		::RPG::GameCore::AttackDamageType MFLCOOMNPLA; // 0x1C
		::System::Void _ctor(::RPG::GameCore::RtAttackData* a1, ::RPG::GameCore::TaskContext* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtAttackData*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + NOKJBIHAOCM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOKJBIHAOCM_DISPOSE_OFFSET))(this);
		}

	};
