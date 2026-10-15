#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SubMissionState.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::NavMap { class IMapDataSource; }

#define PLEODCMINJF___C__DISPLAYCLASS22_0_CTOR_OFFSET UNITYSDK_OFFSET(0xC2FEF40)
#define PLEODCMINJF___C__DISPLAYCLASS22_0___CHECKSUBMISSIONCONDITIONS_B__0_OFFSET UNITYSDK_OFFSET(0xC301B80)

	class PLEODCMINJF___c__DisplayClass22_0 : public ::System::Object
	{
	public:
		::RPG::Client::NavMap::IMapDataSource* mapData; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLEODCMINJF___C__DISPLAYCLASS22_0_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::SubMissionState __CheckSubMissionConditions_b__0(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::SubMissionState(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PLEODCMINJF___C__DISPLAYCLASS22_0___CHECKSUBMISSIONCONDITIONS_B__0_OFFSET))(this, a1);
		}

	};
