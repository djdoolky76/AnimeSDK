#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class PamSkinData; }
namespace RPG::GameCore { class PamSkinConfigRow; }
namespace System { class String; }

#define RPG_CLIENT_PAMSKINDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xE4C5B60)
#define RPG_CLIENT_PAMSKINDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xE4C5BC0)
#define RPG_CLIENT_PAMSKINDATA_GET_CONFIGENTITYPATH_OFFSET UNITYSDK_OFFSET(0xE4C5D60)
#define RPG_CLIENT_PAMSKINDATA_GET_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0xE4C5C20)
#define RPG_CLIENT_PAMSKINDATA_GET_JSONPATH_OFFSET UNITYSDK_OFFSET(0xE4C5E00)
#define RPG_CLIENT_PAMSKINDATA_GET_MANIKINPREFABPATH_OFFSET UNITYSDK_OFFSET(0xE4C5EA0)
#define RPG_CLIENT_PAMSKINDATA_GET_SKINICON_OFFSET UNITYSDK_OFFSET(0xE4C5C60)
#define RPG_CLIENT_PAMSKINDATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0xE4C5D00)
#define RPG_CLIENT_PAMSKINDATA_SETUNLOCK_OFFSET UNITYSDK_OFFSET(0xE4C5BD0)

namespace RPG::Client
{
	inline static constexpr unsigned int PamSkinData_TypeDefinitionIndex = 68367;

	class PamSkinData : public ::System::Object
	{
	public:
		::System::Boolean _IsUnlock; // 0x10
		::System::Byte _padding0[0x3];
		::System::UInt32 SkinID; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMSKINDATA_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::PamSkinData* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::PamSkinData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMSKINDATA_CREATE_OFFSET))(a1);
		}

		::System::Void SetUnlock(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMSKINDATA_SETUNLOCK_OFFSET))(this, a1);
		}

		::System::Boolean get_IsUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMSKINDATA_GET_ISUNLOCK_OFFSET))(this);
		}

		::System::String* get_SkinIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMSKINDATA_GET_SKINICON_OFFSET))(this);
		}

		::System::String* get_ConfigEntityPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMSKINDATA_GET_CONFIGENTITYPATH_OFFSET))(this);
		}

		::System::String* get_JsonPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMSKINDATA_GET_JSONPATH_OFFSET))(this);
		}

		::System::String* get_ManikinPrefabPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMSKINDATA_GET_MANIKINPREFABPATH_OFFSET))(this);
		}

		::RPG::GameCore::PamSkinConfigRow* get__Row()
		{
			return ((::RPG::GameCore::PamSkinConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMSKINDATA_GET__ROW_OFFSET))(this);
		}

	};
}
