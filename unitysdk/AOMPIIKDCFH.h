#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class ECNEEKNHIOE;

#define AOMPIIKDCFH_CTOR_OFFSET UNITYSDK_OFFSET(0x158C3E70)

	class AOMPIIKDCFH : public ::System::Object
	{
	public:
		::ECNEEKNHIOE* HNEOOKPBCNK; // 0x10
		::System::UInt32 JGEBKHNJHNJ; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::GameCore::FixPoint DDFGEIEMAJK; // 0x20
		::System::Void _ctor(::ECNEEKNHIOE* a1, ::System::UInt32 a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::System::Void(*)(::PVOID, ::ECNEEKNHIOE*, ::System::UInt32, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + AOMPIIKDCFH_CTOR_OFFSET))(this, a1, a2, a3);
		}

	};
