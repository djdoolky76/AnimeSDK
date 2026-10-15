#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FDJHLKGICBK;
class HPPGIADOJBF;
namespace System { class String; }

#define RPG_CLIENT_VERSIONUPDATEMGR___C__DISPLAYCLASS9_0_CTOR_OFFSET UNITYSDK_OFFSET(0xE43B0D0)
#define RPG_CLIENT_VERSIONUPDATEMGR___C__DISPLAYCLASS9_0___CALCBLOCKHPATCHDOWNLOADINFOSCORE_B__2_OFFSET UNITYSDK_OFFSET(0xE440790)
#define RPG_CLIENT_VERSIONUPDATEMGR___C__DISPLAYCLASS9_0___CALCBLOCKHPATCHDOWNLOADINFOSCORE_B__3_OFFSET UNITYSDK_OFFSET(0xE440810)

namespace RPG::Client
{
	inline static constexpr unsigned int VersionUpdateMgr___c__DisplayClass9_0_TypeDefinitionIndex = 61283;

	class VersionUpdateMgr___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::System::String* rootPath; // 0x10
		::FDJHLKGICBK* index; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEMGR___C__DISPLAYCLASS9_0_CTOR_OFFSET))(this);
		}

		::HPPGIADOJBF* __CalcBlockHPatchDownloadInfosCore_b__2(::System::UInt32 a1)
		{
			return ((::HPPGIADOJBF*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEMGR___C__DISPLAYCLASS9_0___CALCBLOCKHPATCHDOWNLOADINFOSCORE_B__2_OFFSET))(this, a1);
		}

		::System::Boolean __CalcBlockHPatchDownloadInfosCore_b__3(::HPPGIADOJBF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HPPGIADOJBF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEMGR___C__DISPLAYCLASS9_0___CALCBLOCKHPATCHDOWNLOADINFOSCORE_B__3_OFFSET))(this, a1);
		}

	};
}
