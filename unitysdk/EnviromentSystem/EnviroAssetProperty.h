#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystem/EnviroProperty.h"
#include "unitysdk/EnviromentSystem/EnviroPropertyType.h"
class NFJIADFIJKO;
namespace EnviromentSystem { class EnviromentClip_OnEnvironmentClipLoadDelegate; }
namespace EnviromentSystem { class EnviromentProfile; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ENVIROMENTSYSTEM_ENVIROASSETPROPERTY_CKCNECALFGG_OFFSET UNITYSDK_OFFSET(0x155E5AB0)
#define ENVIROMENTSYSTEM_ENVIROASSETPROPERTY_CTOR_OFFSET UNITYSDK_OFFSET(0x155E53B0)
#define ENVIROMENTSYSTEM_ENVIROASSETPROPERTY_GCICAABIGKP_OFFSET UNITYSDK_OFFSET(0x155E6260)
#define ENVIROMENTSYSTEM_ENVIROASSETPROPERTY_GOHOOFAPHKP_OFFSET UNITYSDK_OFFSET(0x155E65A0)
#define ENVIROMENTSYSTEM_ENVIROASSETPROPERTY_KADJIDHNIEM_OFFSET UNITYSDK_OFFSET(0x155E5760)
#define ENVIROMENTSYSTEM_ENVIROASSETPROPERTY_LHHDHNPLCFD_OFFSET UNITYSDK_OFFSET(0x155E5C60)
#define ENVIROMENTSYSTEM_ENVIROASSETPROPERTY_LKECCEGBBIK_OFFSET UNITYSDK_OFFSET(0x155E52D0)
#define ENVIROMENTSYSTEM_ENVIROASSETPROPERTY_OIFDFLKAHDI_OFFSET UNITYSDK_OFFSET(0x155E5330)
#define ENVIROMENTSYSTEM_ENVIROASSETPROPERTY_PCHDHLPOKEO_OFFSET UNITYSDK_OFFSET(0x155E55B0)

namespace EnviromentSystem
{
	class EnviroAssetProperty : public ::EnviromentSystem::EnviroProperty
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* _AssetRequest; // 0x48
		static ::NFJIADFIJKO** StaticGet___Loader()
		{
			return (::NFJIADFIJKO**)UnitySDK::FromName("EnviromentSystem", "EnviroAssetProperty")->GetStaticField(0x569A0);
		}

		::System::Void _ctor(::EnviromentSystem::EnviromentProfile* a1, ::System::String* a2, ::EnviromentSystem::EnviroPropertyType a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentProfile*, ::System::String*, ::EnviromentSystem::EnviroPropertyType, ::System::Boolean))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROASSETPROPERTY_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::System::Void LKECCEGBBIK()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROASSETPROPERTY_LKECCEGBBIK_OFFSET))();
		}

		static ::NFJIADFIJKO* OIFDFLKAHDI()
		{
			return ((::NFJIADFIJKO*(*)())((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROASSETPROPERTY_OIFDFLKAHDI_OFFSET))();
		}

		::System::Void PCHDHLPOKEO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROASSETPROPERTY_PCHDHLPOKEO_OFFSET))(this);
		}

		::System::Void CKCNECALFGG(::EnviromentSystem::EnviromentClip_OnEnvironmentClipLoadDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentClip_OnEnvironmentClipLoadDelegate*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROASSETPROPERTY_CKCNECALFGG_OFFSET))(this, a1);
		}

		::System::Void GCICAABIGKP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROASSETPROPERTY_GCICAABIGKP_OFFSET))(this);
		}

		::System::Void LHHDHNPLCFD(::EnviromentSystem::EnviromentClip_OnEnvironmentClipLoadDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentClip_OnEnvironmentClipLoadDelegate*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROASSETPROPERTY_LHHDHNPLCFD_OFFSET))(this, a1);
		}

		::System::Void GOHOOFAPHKP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROASSETPROPERTY_GOHOOFAPHKP_OFFSET))(this);
		}

		::System::Void KADJIDHNIEM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROASSETPROPERTY_KADJIDHNIEM_OFFSET))(this);
		}

	};
}
