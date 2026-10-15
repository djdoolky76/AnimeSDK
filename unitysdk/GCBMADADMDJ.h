#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/RPG/GameCore/AIActionType.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define GCBMADADMDJ_CTOR_OFFSET UNITYSDK_OFFSET(0x159600A0)
#define GCBMADADMDJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0x159600B0)
#define GCBMADADMDJ_FPFPPFDFDEP_OFFSET UNITYSDK_OFFSET(0x159600F0)

	class GCBMADADMDJ : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::GameEntity* ICHEDAEHEBG; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Boolean MEPJIFHMCJF; // 0x28
		::System::Byte _padding0[0x3];
		::RPG::GameCore::AIActionType BCMKMNHPPPK; // 0x2C
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + GCBMADADMDJ_CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCBMADADMDJ_DISPOSE_OFFSET))(this);
		}

		::System::Boolean FPFPPFDFDEP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GCBMADADMDJ_FPFPPFDFDEP_OFFSET))(this);
		}

	};
