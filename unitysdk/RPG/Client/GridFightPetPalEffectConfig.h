#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightPetPalEffectConfig; }
namespace RPG::Client { class GridFightPrayQuest; }
namespace RPG::GameCore { class GridFightPetPalEffRow; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTPETPALEFFECTCONFIG_CCTOR_OFFSET UNITYSDK_OFFSET(0xDC25570)
#define RPG_CLIENT_GRIDFIGHTPETPALEFFECTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0xDC242E0)
#define RPG_CLIENT_GRIDFIGHTPETPALEFFECTCONFIG_GETADDDESCTEXTID_OFFSET UNITYSDK_OFFSET(0xDC25490)
#define RPG_CLIENT_GRIDFIGHTPETPALEFFECTCONFIG_GETADDDESC_OFFSET UNITYSDK_OFFSET(0xDC252B0)
#define RPG_CLIENT_GRIDFIGHTPETPALEFFECTCONFIG_GETCONFIG_OFFSET UNITYSDK_OFFSET(0xDC240F0)
#define RPG_CLIENT_GRIDFIGHTPETPALEFFECTCONFIG_GETSWITCHDESCDETAILOBJECTS_OFFSET UNITYSDK_OFFSET(0xDC24D00)
#define RPG_CLIENT_GRIDFIGHTPETPALEFFECTCONFIG_GETSWITCHDESC_OFFSET UNITYSDK_OFFSET(0xDC245F0)
#define RPG_CLIENT_GRIDFIGHTPETPALEFFECTCONFIG_GET_DESC_OFFSET UNITYSDK_OFFSET(0xDC243B0)
#define RPG_CLIENT_GRIDFIGHTPETPALEFFECTCONFIG_GET_ID_OFFSET UNITYSDK_OFFSET(0xDC23FB0)
#define RPG_CLIENT_GRIDFIGHTPETPALEFFECTCONFIG_GET_ISOCEFFECTIVE_OFFSET UNITYSDK_OFFSET(0xDC24590)
#define RPG_CLIENT_GRIDFIGHTPETPALEFFECTCONFIG_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0xDC1DAA0)
#define RPG_CLIENT_GRIDFIGHTPETPALEFFECTCONFIG_GET_SIMPLEDESC_OFFSET UNITYSDK_OFFSET(0xDC244F0)
#define RPG_CLIENT_GRIDFIGHTPETPALEFFECTCONFIG_GET_SWITCHDESC_OFFSET UNITYSDK_OFFSET(0xDC24450)
#define RPG_CLIENT_GRIDFIGHTPETPALEFFECTCONFIG_HASSWITCHDESCDETAIL_OFFSET UNITYSDK_OFFSET(0xDC24BD0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightPetPalEffectConfig_TypeDefinitionIndex = 66725;

	class GridFightPetPalEffectConfig : public ::System::Object
	{
	public:
		::RPG::GameCore::GridFightPetPalEffRow* _Row; // 0x10
		::RPG::Client::TextID _AddDesc; // 0x18
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::GridFightPetPalEffectConfig*>** StaticGet__PetPalEffectIDToConfig()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::GridFightPetPalEffectConfig*>**)UnitySDK::FromName("RPG.Client", "GridFightPetPalEffectConfig")->GetStaticField(0x73000);
		}

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPETPALEFFECTCONFIG_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPETPALEFFECTCONFIG_CCTOR_OFFSET))();
		}

		static ::RPG::Client::GridFightPetPalEffectConfig* GetConfig(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightPetPalEffectConfig*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPETPALEFFECTCONFIG_GETCONFIG_OFFSET))(a1);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPETPALEFFECTCONFIG_GET_DESC_OFFSET))(this);
		}

		::RPG::Client::TextID get_SwitchDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPETPALEFFECTCONFIG_GET_SWITCHDESC_OFFSET))(this);
		}

		::RPG::Client::TextID get_SimpleDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPETPALEFFECTCONFIG_GET_SIMPLEDESC_OFFSET))(this);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPETPALEFFECTCONFIG_GET_ISVALID_OFFSET))(this);
		}

		::System::Boolean get_IsOCEffective()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPETPALEFFECTCONFIG_GET_ISOCEFFECTIVE_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPETPALEFFECTCONFIG_GET_ID_OFFSET))(this);
		}

		::System::String* GetSwitchDesc(::RPG::Client::GridFightPrayQuest* a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::Client::GridFightPrayQuest*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPETPALEFFECTCONFIG_GETSWITCHDESC_OFFSET))(this, a1);
		}

		::System::Boolean HasSwitchDescDetail(::RPG::Client::GridFightPrayQuest* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightPrayQuest*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPETPALEFFECTCONFIG_HASSWITCHDESCDETAIL_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::Object*>* GetSwitchDescDetailObjects(::RPG::Client::GridFightPrayQuest* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID, ::RPG::Client::GridFightPrayQuest*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPETPALEFFECTCONFIG_GETSWITCHDESCDETAILOBJECTS_OFFSET))(this, a1);
		}

		::System::String* GetAddDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPETPALEFFECTCONFIG_GETADDDESC_OFFSET))(this);
		}

		::RPG::Client::TextID GetAddDescTextID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPETPALEFFECTCONFIG_GETADDDESCTEXTID_OFFSET))(this);
		}

	};
}
