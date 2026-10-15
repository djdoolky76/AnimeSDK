#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingFesCellType.h"
#include "unitysdk/RPG/GameCore/ChenLingFesDirection.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class ChenLingFesPosition; }

#define EGJDABKLFEF_AALCCPJCBME_OFFSET UNITYSDK_OFFSET(0x1CA503A0)
#define EGJDABKLFEF_CDFLBJGENDB_OFFSET UNITYSDK_OFFSET(0x1CA50350)
#define EGJDABKLFEF_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA503F0)

	class EGJDABKLFEF : public ::System::Object
	{
	public:
		::RPG::GameCore::ChenLingFesPosition* FOCNBOANONM; // 0x10
		::System::UInt32 CENIOCNLPCC; // 0x18
		::System::Int32 DJCOAFFJAID; // 0x1C
		::RPG::GameCore::ChenLingFesDirection PDMOFFGHMJF; // 0x20
		::System::Boolean MNBBCAMDGDI; // 0x24
		::System::Boolean DPKBLOIGNHD; // 0x25
		::System::Byte _padding0[0x2];
		::System::UInt32 PHFMCACHFIJ; // 0x28
		::RPG::GameCore::ChenLingFesCellType GDIGGOLJIBJ; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGJDABKLFEF_CTOR_OFFSET))(this);
		}

		::System::Boolean CDFLBJGENDB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EGJDABKLFEF_CDFLBJGENDB_OFFSET))(this);
		}

		::System::Boolean AALCCPJCBME()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EGJDABKLFEF_AALCCPJCBME_OFFSET))(this);
		}

	};
