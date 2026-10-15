#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class AssistWayPoint; }

#define JOINMAIDIOJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB2A0D00)
#define JOINMAIDIOJ_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xB2A0CB0)

inline static constexpr unsigned int JOINMAIDIOJ_TypeDefinitionIndex = 66128;

	class JOINMAIDIOJ : public ::System::Object
	{
	public:
		::RPG::GameCore::AssistWayPoint* NDLEBNGAIFH; // 0x10
		::RPG::GameCore::AssistWayPoint* JIAPCOBPBHO; // 0x18
		::System::Boolean OMEENINDLFC; // 0x20
		::System::Boolean GBDHIOOJNBE; // 0x21
		::System::Boolean KHGJLFPNJAJ; // 0x22
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOINMAIDIOJ_CTOR_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOINMAIDIOJ_KHGIKBFDLFB_OFFSET))(this);
		}

	};
