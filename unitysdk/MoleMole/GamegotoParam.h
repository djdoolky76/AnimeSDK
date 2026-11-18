#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_GAMEGOTOPARAM_EJGCJJLJPCJ_OFFSET UNITYSDK_OFFSET(0x14AEB6A0)
#define MOLEMOLE_GAMEGOTOPARAM_MIBGCLBFJKE_OFFSET UNITYSDK_OFFSET(0x14AEB540)
#define MOLEMOLE_GAMEGOTOPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x14AEB530)

namespace MoleMole
{
	inline static constexpr unsigned int GamegotoParam_TypeDefinitionIndex = 61540;

	class GamegotoParam : public ::System::Object
	{
	public:
		// static const ::System::String* JumpConfigKey; // 0x0
		// static const ::System::String* JumpConfigValue; // 0x0
		// static const ::System::String* JumpTipsKey; // 0x0
		::System::Int32 openType; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* arg; // 0x18
		::System::Int64 startTime; // 0x20
		::System::Int64 endTime; // 0x28
		::System::String* activityAccess; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEGOTOPARAM__CTOR_OFFSET))(this);
		}

		static ::MoleMole::GamegotoParam* MIBGCLBFJKE(::System::String* BHDNBGLCNOM)
		{
			return ((::MoleMole::GamegotoParam*(*)(::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEGOTOPARAM_MIBGCLBFJKE_OFFSET))(BHDNBGLCNOM);
		}

		::System::Void EJGCJJLJPCJ(::System::String* PCDADGKIPML)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEGOTOPARAM_EJGCJJLJPCJ_OFFSET))(this, PCDADGKIPML);
		}
	};
}
