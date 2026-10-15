#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueTournMode.h"
#include "unitysdk/System/Object.h"
class OHCMEPOMNOO;
namespace RPG::Client { class IRogueTournBuildRefDataItem; }
namespace RPG::Client { class RogueTournBuildRefShareCodeDataItem; }
namespace System { class Exception; }

#define DLHFAGBBOFJ_CLEAR_OFFSET UNITYSDK_OFFSET(0xF8A02D0)
#define DLHFAGBBOFJ_CTOR_OFFSET UNITYSDK_OFFSET(0xF8A0700)
#define DLHFAGBBOFJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF8A0320)
#define DLHFAGBBOFJ_DJMAKDCNPDA_OFFSET UNITYSDK_OFFSET(0xF8A0390)
#define DLHFAGBBOFJ_DNJPDFNBNOF_OFFSET UNITYSDK_OFFSET(0xF8A05C0)
#define DLHFAGBBOFJ_FENJPHODMLN_OFFSET UNITYSDK_OFFSET(0xF8A0180)
#define DLHFAGBBOFJ_GKGNFJCLEIL_OFFSET UNITYSDK_OFFSET(0xF8A0120)
#define DLHFAGBBOFJ_ONALLOC_OFFSET UNITYSDK_OFFSET(0xF8A0200)
#define DLHFAGBBOFJ_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0xF8A0250)

inline static constexpr unsigned int DLHFAGBBOFJ_TypeDefinitionIndex = 67558;

	class DLHFAGBBOFJ : public ::System::Object
	{
	public:
		::OHCMEPOMNOO* JDIFBABEMHJ; // 0x10
		::System::UInt32 ODCDFECAMAG; // 0x18
		::System::UInt32 JFFIFPGKDMD; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLHFAGBBOFJ_CTOR_OFFSET))(this);
		}

		::System::Void GKGNFJCLEIL(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + DLHFAGBBOFJ_GKGNFJCLEIL_OFFSET))(this, a1, a2);
		}

		::System::Void FENJPHODMLN(::RPG::GameCore::RogueTournMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueTournMode))((::PBYTE)hIl2Cpp + DLHFAGBBOFJ_FENJPHODMLN_OFFSET))(this, a1);
		}

		::System::Void OnAlloc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLHFAGBBOFJ_ONALLOC_OFFSET))(this);
		}

		::System::Void OnRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLHFAGBBOFJ_ONRECYCLE_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLHFAGBBOFJ_CLEAR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLHFAGBBOFJ_DISPOSE_OFFSET))(this);
		}

		::System::Boolean DJMAKDCNPDA(::RPG::Client::IRogueTournBuildRefDataItem* a1, ::System::Exception* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IRogueTournBuildRefDataItem*, ::System::Exception*))((::PBYTE)hIl2Cpp + DLHFAGBBOFJ_DJMAKDCNPDA_OFFSET))(this, a1, a2);
		}

		::System::Void DNJPDFNBNOF(::RPG::Client::RogueTournBuildRefShareCodeDataItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueTournBuildRefShareCodeDataItem*))((::PBYTE)hIl2Cpp + DLHFAGBBOFJ_DNJPDFNBNOF_OFFSET))(this, a1);
		}

	};
