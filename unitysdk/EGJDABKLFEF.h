#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingFesCellType.h"
#include "unitysdk/RPG/GameCore/ChenLingFesDirection.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class ChenLingFesPosition; }

#define EGJDABKLFEF_AALCCPJCBME_OFFSET UNITYSDK_OFFSET(0x1DC13C00)
#define EGJDABKLFEF_CDFLBJGENDB_OFFSET UNITYSDK_OFFSET(0x1DC13BB0)
#define EGJDABKLFEF_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC13C50)

inline static constexpr unsigned int EGJDABKLFEF_TypeDefinitionIndex = 44783;

	class EGJDABKLFEF : public ::System::Object
	{
	public:
		::RPG::GameCore::ChenLingFesPosition* FOCNBOANONM; // 0x10
		::System::UInt32 PHFMCACHFIJ; // 0x18
		::RPG::GameCore::ChenLingFesCellType GDIGGOLJIBJ; // 0x1C
		::RPG::GameCore::ChenLingFesDirection PDMOFFGHMJF; // 0x20
		::System::Int32 DJCOAFFJAID; // 0x24
		::System::UInt32 CENIOCNLPCC; // 0x28
		::System::Boolean MNBBCAMDGDI; // 0x2C
		::System::Boolean DPKBLOIGNHD; // 0x2D
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
