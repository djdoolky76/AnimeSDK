#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class ECNEEKNHIOE;

#define AOMPIIKDCFH_CTOR_OFFSET UNITYSDK_OFFSET(0x158B8170)

inline static constexpr unsigned int AOMPIIKDCFH_TypeDefinitionIndex = 80565;

	class AOMPIIKDCFH : public ::System::Object
	{
	public:
		::ECNEEKNHIOE* HNEOOKPBCNK; // 0x10
		::RPG::GameCore::FixPoint DDFGEIEMAJK; // 0x18
		::System::UInt32 JGEBKHNJHNJ; // 0x20
		::System::Void _ctor(::ECNEEKNHIOE* a1, ::System::UInt32 a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::System::Void(*)(::PVOID, ::ECNEEKNHIOE*, ::System::UInt32, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + AOMPIIKDCFH_CTOR_OFFSET))(this, a1, a2, a3);
		}

	};
