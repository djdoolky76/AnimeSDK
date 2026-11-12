#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UI3DGame/MonopolyPlayerActionState.h"
#include "unitysdk/System/Object.h"
class FDPALAEIHPB;
class KGMBGMIGHOE;

#define CBOAHKAAECG_BKJGMFOKKKN_OFFSET UNITYSDK_OFFSET(0xCE18DF0)
#define CBOAHKAAECG_CTOR_OFFSET UNITYSDK_OFFSET(0xCE18D40)
#define CBOAHKAAECG_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xCE18E80)
#define CBOAHKAAECG_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0xCE18E40)
#define CBOAHKAAECG_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xCE18D50)
#define CBOAHKAAECG_LCKCABJFHEA_OFFSET UNITYSDK_OFFSET(0xCE18DB0)

inline static constexpr unsigned int CBOAHKAAECG_TypeDefinitionIndex = 78120;

	class CBOAHKAAECG : public ::System::Object
	{
	public:
		::KGMBGMIGHOE* IGHAHBNLIJA; // 0x10
		::FDPALAEIHPB* FKINCGODJEP; // 0x18
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
