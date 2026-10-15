#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HGANMGEOOCC;
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PIIGDBJFNCP_PDIJKMHNMNP_CTOR_OFFSET UNITYSDK_OFFSET(0xC2681F0)
#define PIIGDBJFNCP_PDIJKMHNMNP_GETHPPROGRESS_OFFSET UNITYSDK_OFFSET(0xC268D10)
#define PIIGDBJFNCP_PDIJKMHNMNP_GETKILLPROGRESS_OFFSET UNITYSDK_OFFSET(0xC268CC0)
#define PIIGDBJFNCP_PDIJKMHNMNP_GETREDIRECTINFO_OFFSET UNITYSDK_OFFSET(0xC268FA0)
#define PIIGDBJFNCP_PDIJKMHNMNP_IKKHEEOPKKL_OFFSET UNITYSDK_OFFSET(0xC268DC0)

	class PIIGDBJFNCP_PDIJKMHNMNP : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* JNAJEHBCCJP; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIIGDBJFNCP_PDIJKMHNMNP_CTOR_OFFSET))(this);
		}

		::System::UInt32 GetKillProgress(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PIIGDBJFNCP_PDIJKMHNMNP_GETKILLPROGRESS_OFFSET))(this, a1);
		}

		::System::UInt32 GetHPProgress(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PIIGDBJFNCP_PDIJKMHNMNP_GETHPPROGRESS_OFFSET))(this, a1);
		}

		::System::UInt32 IKKHEEOPKKL(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PIIGDBJFNCP_PDIJKMHNMNP_IKKHEEOPKKL_OFFSET))(this, a1);
		}

		::HGANMGEOOCC* GetRedirectInfo(::RPG::GameCore::GameEntity* a1)
		{
			return ((::HGANMGEOOCC*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + PIIGDBJFNCP_PDIJKMHNMNP_GETREDIRECTINFO_OFFSET))(this, a1);
		}

	};
