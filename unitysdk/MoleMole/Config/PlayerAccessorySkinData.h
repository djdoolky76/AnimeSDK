#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class PlayerAccessoryTabData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_PLAYERACCESSORYSKINDATA_EDFPDIFGJMJ_OFFSET UNITYSDK_OFFSET(0x1C6E9F80)
#define MOLEMOLE_CONFIG_PLAYERACCESSORYSKINDATA_NPAHAPEAPPP_OFFSET UNITYSDK_OFFSET(0x1C6E9DF0)
#define MOLEMOLE_CONFIG_PLAYERACCESSORYSKINDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6E9DE0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int PlayerAccessorySkinData_TypeDefinitionIndex = 84929;

	class PlayerAccessorySkinData : public ::System::Object
	{
	public:
		::System::Int32 AvatarID; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* Tips; // 0x18
		::Il2CppArray<::MoleMole::Config::PlayerAccessoryTabData*>* TabConfigs; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::PlayerAccessoryTabData*>* TabCfgDict; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PLAYERACCESSORYSKINDATA__CTOR_OFFSET))(this);
		}

		::System::Void NPAHAPEAPPP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PLAYERACCESSORYSKINDATA_NPAHAPEAPPP_OFFSET))(this);
		}

		::System::Boolean EDFPDIFGJMJ(::System::Int32 ABEFOPGDDBL, ::MoleMole::Config::PlayerAccessoryTabData*& DJCNCELJPOM)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MoleMole::Config::PlayerAccessoryTabData*&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PLAYERACCESSORYSKINDATA_EDFPDIFGJMJ_OFFSET))(this, ABEFOPGDDBL, DJCNCELJPOM);
		}
	};
}
