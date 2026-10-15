#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BOFJHGFAJBN;
namespace RPG::Client::Promises { class Promise; }

#define RPG_CLIENT_VERSIONUPDATECHECK___C__DISPLAYCLASS5_0_CTOR_OFFSET UNITYSDK_OFFSET(0xE443E40)
#define RPG_CLIENT_VERSIONUPDATECHECK___C__DISPLAYCLASS5_0__ISPSSUBPACKPROMISED_B__0_OFFSET UNITYSDK_OFFSET(0xE443E50)

namespace RPG::Client
{
	inline static constexpr unsigned int VersionUpdateCheck___c__DisplayClass5_0_TypeDefinitionIndex = 61262;

	class VersionUpdateCheck___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise* promise; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATECHECK___C__DISPLAYCLASS5_0_CTOR_OFFSET))(this);
		}

		::System::Void _IsPSSubpackPromised_b__0(::BOFJHGFAJBN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BOFJHGFAJBN*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATECHECK___C__DISPLAYCLASS5_0__ISPSSUBPACKPROMISED_B__0_OFFSET))(this, a1);
		}

	};
}
