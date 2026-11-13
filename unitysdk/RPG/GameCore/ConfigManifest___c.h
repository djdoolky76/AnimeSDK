#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_GAMECORE_CONFIGMANIFEST___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xFD951A0)
#define RPG_GAMECORE_CONFIGMANIFEST___C_CTOR_OFFSET UNITYSDK_OFFSET(0xFD951E0)
#define RPG_GAMECORE_CONFIGMANIFEST___C__DISCOVERCONFIGLIST_B__11_0_OFFSET UNITYSDK_OFFSET(0xFD95210)
#define RPG_GAMECORE_CONFIGMANIFEST___C__LOADMANIFESTITEMBYFILEDISCOVERY_B__10_0_OFFSET UNITYSDK_OFFSET(0xFD951F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ConfigManifest___c_TypeDefinitionIndex = 57732;

	class ConfigManifest___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::System::String*>** StaticGet___9__11_0()
		{
			return (::System::Comparison_1<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "<>c")->GetStaticField(0x6F090);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.GameCore", "<>c")->GetStaticField(0x6F098);
		}

		static ::System::Comparison_1<::System::String*>** StaticGet___9__10_0()
		{
			return (::System::Comparison_1<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "<>c")->GetStaticField(0x6F0A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONFIGMANIFEST___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONFIGMANIFEST___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _LoadManifestItemByFileDiscovery_b__10_0(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONFIGMANIFEST___C__LOADMANIFESTITEMBYFILEDISCOVERY_B__10_0_OFFSET))(this, a1, a2);
		}

		::System::Int32 _DiscoverConfigList_b__11_0(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONFIGMANIFEST___C__DISCOVERCONFIGLIST_B__11_0_OFFSET))(this, a1, a2);
		}

	};
}
