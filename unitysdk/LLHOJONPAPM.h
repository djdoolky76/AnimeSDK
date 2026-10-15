#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class PropDynamicResConfig; }
namespace RPG::GameCore { class PropDynamicResConfigItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LLHOJONPAPM_FMHKLHAKMKO_OFFSET UNITYSDK_OFFSET(0xB76EE50)
#define LLHOJONPAPM_HCFINLKPIHL_OFFSET UNITYSDK_OFFSET(0xB76EB20)
#define LLHOJONPAPM_IGBFHCJEHNK_OFFSET UNITYSDK_OFFSET(0xB76ED20)
#define LLHOJONPAPM_MLEGKIDDPAJ_OFFSET UNITYSDK_OFFSET(0xB76ED70)

inline static constexpr unsigned int LLHOJONPAPM_TypeDefinitionIndex = 73304;

	class LLHOJONPAPM : public ::System::Object
	{
	public:
		static ::RPG::GameCore::PropDynamicResConfig** StaticGet_IGHAHBNLIJA()
		{
			return (::RPG::GameCore::PropDynamicResConfig**)UnitySDK::FromName("", "LLHOJONPAPM")->GetStaticField(0x66030);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::PropDynamicResConfigItem*>** StaticGet_NIHIACHKEDD()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::PropDynamicResConfigItem*>**)UnitySDK::FromName("", "LLHOJONPAPM")->GetStaticField(0x66038);
		}

		static ::System::Void HCFINLKPIHL()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LLHOJONPAPM_HCFINLKPIHL_OFFSET))();
		}

		static ::System::Void IGBFHCJEHNK()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LLHOJONPAPM_IGBFHCJEHNK_OFFSET))();
		}

		static ::RPG::GameCore::PropDynamicResConfigItem* MLEGKIDDPAJ(::System::String* a1)
		{
			return ((::RPG::GameCore::PropDynamicResConfigItem*(*)(::System::String*))((::PBYTE)hIl2Cpp + LLHOJONPAPM_MLEGKIDDPAJ_OFFSET))(a1);
		}

		static ::RPG::GameCore::PropDynamicResConfig* FMHKLHAKMKO()
		{
			return ((::RPG::GameCore::PropDynamicResConfig*(*)())((::PBYTE)hIl2Cpp + LLHOJONPAPM_FMHKLHAKMKO_OFFSET))();
		}

	};
