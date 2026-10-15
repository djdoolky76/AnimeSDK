#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client::ActivityIdleLive { class IdleLiveAvatarConfig; }

#define AMOMJMAMDBK_BHDNJEDHGMK_OFFSET UNITYSDK_OFFSET(0x1558D4C0)
#define AMOMJMAMDBK_CTOR_OFFSET UNITYSDK_OFFSET(0x1558C710)
#define AMOMJMAMDBK_LFIMGEAEBID_OFFSET UNITYSDK_OFFSET(0x1558C7B0)
#define AMOMJMAMDBK__CHECKNEEDREBUILD_OFFSET UNITYSDK_OFFSET(0x1558D510)
#define AMOMJMAMDBK__REBUILD_OFFSET UNITYSDK_OFFSET(0x1558C800)

inline static constexpr unsigned int AMOMJMAMDBK_TypeDefinitionIndex = 75119;

	class AMOMJMAMDBK
	{
	public:
		::RPG::Client::ActivityIdleLive::IdleLiveAvatarConfig* IGHAHBNLIJA; // 0x20
		::System::Int32 IACHHFMCKMC; // 0x28
		::System::Int32 CLPLIBODOGC; // 0x2C
		::System::Void _ctor(::RPG::Client::ActivityIdleLive::IdleLiveAvatarConfig* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveAvatarConfig*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + AMOMJMAMDBK_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LFIMGEAEBID(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AMOMJMAMDBK_LFIMGEAEBID_OFFSET))(this, a1);
		}

		::System::Void BHDNJEDHGMK(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AMOMJMAMDBK_BHDNJEDHGMK_OFFSET))(this, a1);
		}

		::System::Void _Rebuild()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMOMJMAMDBK__REBUILD_OFFSET))(this);
		}

		::System::Boolean _CheckNeedRebuild()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AMOMJMAMDBK__CHECKNEEDREBUILD_OFFSET))(this);
		}

	};
