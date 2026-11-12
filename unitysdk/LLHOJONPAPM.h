#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class PropDynamicResConfig; }
namespace RPG::GameCore { class PropDynamicResConfigItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LLHOJONPAPM_FMHKLHAKMKO_OFFSET UNITYSDK_OFFSET(0xC00E5C0)
#define LLHOJONPAPM_HCFINLKPIHL_OFFSET UNITYSDK_OFFSET(0xC00E290)
#define LLHOJONPAPM_IGBFHCJEHNK_OFFSET UNITYSDK_OFFSET(0xC00E490)
#define LLHOJONPAPM_MLEGKIDDPAJ_OFFSET UNITYSDK_OFFSET(0xC00E4E0)

inline static constexpr unsigned int LLHOJONPAPM_TypeDefinitionIndex = 75420;

	class LLHOJONPAPM : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::PropDynamicResConfigItem*>** StaticGet_NIHIACHKEDD()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::PropDynamicResConfigItem*>**)UnitySDK::FromName("", "LLHOJONPAPM")->GetStaticField(0x69390);
		}

		static ::RPG::GameCore::PropDynamicResConfig** StaticGet_IGHAHBNLIJA()
		{
			return (::RPG::GameCore::PropDynamicResConfig**)UnitySDK::FromName("", "LLHOJONPAPM")->GetStaticField(0x69398);
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
