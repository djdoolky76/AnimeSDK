#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

#define FNINJACLJOH_CTOR_OFFSET UNITYSDK_OFFSET(0x15873E50)

inline static constexpr unsigned int FNINJACLJOH_TypeDefinitionIndex = 53975;

	class FNINJACLJOH : public ::System::Object
	{
	public:
		::RPG::GameCore::FixPoint CCAOGMEFNLB; // 0x10
		::System::Int32 NOIIIOKMIIN; // 0x18
		::System::Boolean BNIMJJNOLAI; // 0x1C
		::System::Byte _padding0[0x3];
		::RPG::GameCore::FixPoint MENJMMPPBNM; // 0x20
		::RPG::GameCore::FixPoint GCJMFBKLGHI; // 0x28
		::RPG::GameCore::FixPoint CNGOBEKKLPO; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNINJACLJOH_CTOR_OFFSET))(this);
		}

	};
