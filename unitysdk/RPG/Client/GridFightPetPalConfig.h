#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
namespace RPG::Client { class GridFightPetPalConfig; }
namespace RPG::GameCore { class GridFightPetPalConfigRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_GRIDFIGHTPETPALCONFIG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF21C40)
#define RPG_CLIENT_GRIDFIGHTPETPALCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF213C0)
#define RPG_CLIENT_GRIDFIGHTPETPALCONFIG_GETCONFIGBYEFFECTID_OFFSET UNITYSDK_OFFSET(0x1DF21400)
#define RPG_CLIENT_GRIDFIGHTPETPALCONFIG_GETCONFIG_OFFSET UNITYSDK_OFFSET(0x1DF211F0)
#define RPG_CLIENT_GRIDFIGHTPETPALCONFIG_GET_DESC_OFFSET UNITYSDK_OFFSET(0x1DF21B50)
#define RPG_CLIENT_GRIDFIGHTPETPALCONFIG_GET_FIGUREDOWN_OFFSET UNITYSDK_OFFSET(0x1DF21A40)
#define RPG_CLIENT_GRIDFIGHTPETPALCONFIG_GET_FIGUREUP_OFFSET UNITYSDK_OFFSET(0x1DF219D0)
#define RPG_CLIENT_GRIDFIGHTPETPALCONFIG_GET_HEADIMAGE_OFFSET UNITYSDK_OFFSET(0x1DF21960)
#define RPG_CLIENT_GRIDFIGHTPETPALCONFIG_GET_ICON_OFFSET UNITYSDK_OFFSET(0x1DF21880)
#define RPG_CLIENT_GRIDFIGHTPETPALCONFIG_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x1DF1B8A0)
#define RPG_CLIENT_GRIDFIGHTPETPALCONFIG_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1DF21AB0)
#define RPG_CLIENT_GRIDFIGHTPETPALCONFIG_GET_PETPALID_OFFSET UNITYSDK_OFFSET(0x1DF21830)
#define RPG_CLIENT_GRIDFIGHTPETPALCONFIG_GET_SMALLROUNDICON_OFFSET UNITYSDK_OFFSET(0x1DF218F0)
#define RPG_CLIENT_GRIDFIGHTPETPALCONFIG_GET_SORT_OFFSET UNITYSDK_OFFSET(0x1DF21BF0)
#define RPG_CLIENT_GRIDFIGHTPETPALCONFIG__ENSUREEFFECTIDCACHE_OFFSET UNITYSDK_OFFSET(0x1DF214E0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightPetPalConfig_TypeDefinitionIndex = 66724;

	class GridFightPetPalConfig : public ::System::Object
	{
	public:
		::RPG::GameCore::GridFightPetPalConfigRow* _Row; // 0x10
		::System::Boolean IsOCEffective; // 0x18
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::GridFightPetPalConfig*>** StaticGet__PetPalIDToConfig()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::GridFightPetPalConfig*>**)UnitySDK::FromName("RPG.Client", "GridFightPetPalConfig")->GetStaticField(0x72BA0);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::GridFightPetPalConfig*>** StaticGet__EffectIDToConfig()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::GridFightPetPalConfig*>**)UnitySDK::FromName("RPG.Client", "GridFightPetPalConfig")->GetStaticField(0x72BA8);
		}

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPETPALCONFIG_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPETPALCONFIG_CCTOR_OFFSET))();
		}

		static ::RPG::Client::GridFightPetPalConfig* GetConfig(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightPetPalConfig*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPETPALCONFIG_GETCONFIG_OFFSET))(a1);
		}

		static ::RPG::Client::GridFightPetPalConfig* GetConfigByEffectID(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightPetPalConfig*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPETPALCONFIG_GETCONFIGBYEFFECTID_OFFSET))(a1);
		}

		static ::System::Void _EnsureEffectIDCache()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPETPALCONFIG__ENSUREEFFECTIDCACHE_OFFSET))();
		}

		::System::UInt32 get_PetPalID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPETPALCONFIG_GET_PETPALID_OFFSET))(this);
		}

		::System::String* get_Icon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPETPALCONFIG_GET_ICON_OFFSET))(this);
		}

		::System::String* get_SmallRoundIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPETPALCONFIG_GET_SMALLROUNDICON_OFFSET))(this);
		}

		::System::String* get_HeadImage()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPETPALCONFIG_GET_HEADIMAGE_OFFSET))(this);
		}

		::System::String* get_FigureUp()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPETPALCONFIG_GET_FIGUREUP_OFFSET))(this);
		}

		::System::String* get_FigureDown()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPETPALCONFIG_GET_FIGUREDOWN_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPETPALCONFIG_GET_NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPETPALCONFIG_GET_DESC_OFFSET))(this);
		}

		::System::UInt32 get_Sort()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPETPALCONFIG_GET_SORT_OFFSET))(this);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPETPALCONFIG_GET_ISVALID_OFFSET))(this);
		}

	};
}
