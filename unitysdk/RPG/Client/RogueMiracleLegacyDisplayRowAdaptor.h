#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
namespace RPG::GameCore { class RogueMiracleDisplayRow; }
namespace RPG::GameCore { class RogueMiracleEffectRow; }
namespace System { class String; }

#define RPG_CLIENT_ROGUEMIRACLELEGACYDISPLAYROWADAPTOR_CTOR_OFFSET UNITYSDK_OFFSET(0x1CB26610)
#define RPG_CLIENT_ROGUEMIRACLELEGACYDISPLAYROWADAPTOR_GET_DESCPARAMLIST_OFFSET UNITYSDK_OFFSET(0x1CB29630)
#define RPG_CLIENT_ROGUEMIRACLELEGACYDISPLAYROWADAPTOR_GET_MIRACLEBGDESC_OFFSET UNITYSDK_OFFSET(0x1CB292B0)
#define RPG_CLIENT_ROGUEMIRACLELEGACYDISPLAYROWADAPTOR_GET_MIRACLEDESC_OFFSET UNITYSDK_OFFSET(0x1CB294F0)
#define RPG_CLIENT_ROGUEMIRACLELEGACYDISPLAYROWADAPTOR_GET_MIRACLEFIGUREICONPATH_OFFSET UNITYSDK_OFFSET(0x1CB29440)
#define RPG_CLIENT_ROGUEMIRACLELEGACYDISPLAYROWADAPTOR_GET_MIRACLEICONPATH_OFFSET UNITYSDK_OFFSET(0x1CB29390)
#define RPG_CLIENT_ROGUEMIRACLELEGACYDISPLAYROWADAPTOR_GET_MIRACLENAME_OFFSET UNITYSDK_OFFSET(0x1CB29170)
#define RPG_CLIENT_ROGUEMIRACLELEGACYDISPLAYROWADAPTOR_GET__MIRACLEDISPLAYROW_OFFSET UNITYSDK_OFFSET(0x1CB29250)
#define RPG_CLIENT_ROGUEMIRACLELEGACYDISPLAYROWADAPTOR_GET__MIRACLEEFFECTROW_OFFSET UNITYSDK_OFFSET(0x1CB295D0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMiracleLegacyDisplayRowAdaptor_TypeDefinitionIndex = 69230;

	class RogueMiracleLegacyDisplayRowAdaptor : public ::System::Object
	{
	public:
		::System::UInt32 _MiracleDisplayID; // 0x10
		::System::UInt32 _MiracleEffectDisplayID; // 0x14
		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLELEGACYDISPLAYROWADAPTOR_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::TextID get_MiracleName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLELEGACYDISPLAYROWADAPTOR_GET_MIRACLENAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_MiracleBGDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLELEGACYDISPLAYROWADAPTOR_GET_MIRACLEBGDESC_OFFSET))(this);
		}

		::System::String* get_MiracleIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLELEGACYDISPLAYROWADAPTOR_GET_MIRACLEICONPATH_OFFSET))(this);
		}

		::System::String* get_MiracleFigureIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLELEGACYDISPLAYROWADAPTOR_GET_MIRACLEFIGUREICONPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_MiracleDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLELEGACYDISPLAYROWADAPTOR_GET_MIRACLEDESC_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* get_DescParamList()
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLELEGACYDISPLAYROWADAPTOR_GET_DESCPARAMLIST_OFFSET))(this);
		}

		::RPG::GameCore::RogueMiracleDisplayRow* get__MiracleDisplayRow()
		{
			return ((::RPG::GameCore::RogueMiracleDisplayRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLELEGACYDISPLAYROWADAPTOR_GET__MIRACLEDISPLAYROW_OFFSET))(this);
		}

		::RPG::GameCore::RogueMiracleEffectRow* get__MiracleEffectRow()
		{
			return ((::RPG::GameCore::RogueMiracleEffectRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLELEGACYDISPLAYROWADAPTOR_GET__MIRACLEEFFECTROW_OFFSET))(this);
		}

	};
}
