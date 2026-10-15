#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UI3DGame/MonopolyPlayerActionState.h"
#include "unitysdk/System/Object.h"
class FDPALAEIHPB;
class KGMBGMIGHOE;

#define CBOAHKAAECG_BKJGMFOKKKN_OFFSET UNITYSDK_OFFSET(0xC4AFDE0)
#define CBOAHKAAECG_CTOR_OFFSET UNITYSDK_OFFSET(0xC47EA20)
#define CBOAHKAAECG_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xC4AFE70)
#define CBOAHKAAECG_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0xC4AFE30)
#define CBOAHKAAECG_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xC4AFD40)
#define CBOAHKAAECG_LCKCABJFHEA_OFFSET UNITYSDK_OFFSET(0xC4AFDA0)

inline static constexpr unsigned int CBOAHKAAECG_TypeDefinitionIndex = 75793;

	class CBOAHKAAECG : public ::System::Object
	{
	public:
		::FDPALAEIHPB* FKINCGODJEP; // 0x10
		::KGMBGMIGHOE* IGHAHBNLIJA; // 0x18
		::RPG::Client::UI3DGame::MonopolyPlayerActionState DLNIGFGLPLJ; // 0x20
		::System::Void _ctor(::KGMBGMIGHOE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KGMBGMIGHOE*))((::PBYTE)hIl2Cpp + CBOAHKAAECG_CTOR_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CBOAHKAAECG_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::RPG::Client::UI3DGame::MonopolyPlayerActionState LCKCABJFHEA()
		{
			return ((::RPG::Client::UI3DGame::MonopolyPlayerActionState(*)(::PVOID))((::PBYTE)hIl2Cpp + CBOAHKAAECG_LCKCABJFHEA_OFFSET))(this);
		}

		::System::Void BKJGMFOKKKN(::FDPALAEIHPB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FDPALAEIHPB*))((::PBYTE)hIl2Cpp + CBOAHKAAECG_BKJGMFOKKKN_OFFSET))(this, a1);
		}

		::System::Void HKKFFCBJOKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBOAHKAAECG_HKKFFCBJOKM_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBOAHKAAECG_HADOHLNHHGB_OFFSET))(this);
		}

	};
