#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GJPFGOGOLBI.h"
#include "unitysdk/RPG/GameCore/AntiLockHPStrength.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RtModifierBehaviorLifeBinding.h"
namespace System { class String; }

#define EDOELGFAKAL_CTOR_OFFSET UNITYSDK_OFFSET(0x1332E0E0)
#define EDOELGFAKAL_DADCFBHGLOH_OFFSET UNITYSDK_OFFSET(0x1332DF10)
#define EDOELGFAKAL_DAMDMJJKLON_OFFSET UNITYSDK_OFFSET(0x1332DD90)
#define EDOELGFAKAL_EFKLLLLPAJH_OFFSET UNITYSDK_OFFSET(0x1332DD80)
#define EDOELGFAKAL_NLBNJGKAMII_OFFSET UNITYSDK_OFFSET(0x1332DDD0)

	class EDOELGFAKAL : public ::GJPFGOGOLBI
	{
	public:
		::System::String* JNJCCHFBKPB; // 0x18
		::System::Boolean IHFLEJFHICI; // 0x20
		::System::Byte _padding0[0x3];
		::RPG::GameCore::AntiLockHPStrength AIDNPNEBLII; // 0x24
		::RPG::GameCore::FixPoint GELAMLPPBKE; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDOELGFAKAL_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::RtModifierBehaviorLifeBinding EFKLLLLPAJH()
		{
			return ((::RPG::GameCore::RtModifierBehaviorLifeBinding(*)(::PVOID))((::PBYTE)hIl2Cpp + EDOELGFAKAL_EFKLLLLPAJH_OFFSET))(this);
		}

		::System::Void DAMDMJJKLON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDOELGFAKAL_DAMDMJJKLON_OFFSET))(this);
		}

		::System::Void NLBNJGKAMII()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDOELGFAKAL_NLBNJGKAMII_OFFSET))(this);
		}

		::System::Void DADCFBHGLOH(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::AntiLockHPStrength a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::AntiLockHPStrength, ::System::String*))((::PBYTE)hIl2Cpp + EDOELGFAKAL_DADCFBHGLOH_OFFSET))(this, a1, a2, a3);
		}

	};
