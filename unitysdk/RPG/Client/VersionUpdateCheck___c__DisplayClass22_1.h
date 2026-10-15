#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }

#define RPG_CLIENT_VERSIONUPDATECHECK___C__DISPLAYCLASS22_1_CTOR_OFFSET UNITYSDK_OFFSET(0xE4435D0)
#define RPG_CLIENT_VERSIONUPDATECHECK___C__DISPLAYCLASS22_1__STARTLOCALASSETVERIFY_B__2_OFFSET UNITYSDK_OFFSET(0xE443D50)

namespace RPG::Client
{
	inline static constexpr unsigned int VersionUpdateCheck___c__DisplayClass22_1_TypeDefinitionIndex = 61260;

	template <typename T>
	class VersionUpdateCheck___c__DisplayClass22_1 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals1; // 0x10
		::System::String* message; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATECHECK___C__DISPLAYCLASS22_1_CTOR_OFFSET))(this);
		}

		::System::Void _StartLocalAssetVerify_b__2(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATECHECK___C__DISPLAYCLASS22_1__STARTLOCALASSETVERIFY_B__2_OFFSET))(this, a1);
		}

	};
}
