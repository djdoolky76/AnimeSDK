#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HCIJIIALMDH;
class KPAKKOJMBHN;
namespace MoleMole { class AbyssS2_GenRouteMapConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_ABYSSS2_CUSTOMCONFIG_CUSTOMDATATOCSDATA_OFFSET UNITYSDK_OFFSET(0x11E4C840)
#define MOLEMOLE_ABYSSS2_CUSTOMCONFIG_SETSUDDENEVENTINFOBYCURAREAINDEX_OFFSET UNITYSDK_OFFSET(0x11E4D450)
#define MOLEMOLE_ABYSSS2_CUSTOMCONFIG_VALIDATE_OFFSET UNITYSDK_OFFSET(0x11E4C7E0)
#define MOLEMOLE_ABYSSS2_CUSTOMCONFIG__CCTOR_OFFSET UNITYSDK_OFFSET(0x11E4D8F0)
#define MOLEMOLE_ABYSSS2_CUSTOMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x11E4D8E0)
#define MOLEMOLE_ABYSSS2_CUSTOMCONFIG__ONINSPECTUPDATE_OFFSET UNITYSDK_OFFSET(0x11E4C670)

namespace MoleMole
{
	inline static constexpr unsigned int AbyssS2_CustomConfig_TypeDefinitionIndex = 93062;

	class AbyssS2_CustomConfig : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>** StaticGet_custom_AreaID2SceneIndex()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(AbyssS2_CustomConfig_TypeDefinitionIndex)->GetStaticField(0x485D0);
		}
		::System::Int32 AreaTotalCount; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::System::Object*>* AreaConfigs; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Il2CppArray<::System::Int32>*>* suddenEventMap; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_CUSTOMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_CUSTOMCONFIG__CCTOR_OFFSET))();
		}

		::System::Void _OnInspectUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_CUSTOMCONFIG__ONINSPECTUPDATE_OFFSET))(this);
		}

		::System::Boolean Validate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_CUSTOMCONFIG_VALIDATE_OFFSET))(this);
		}

		::System::Void CustomDataToCsData(::HCIJIIALMDH* rfData, ::System::Int32 routeMapID, ::System::Int32 layerIndex, ::System::Boolean isLastLayer, ::MoleMole::AbyssS2_GenRouteMapConfig* genRouteMapConfig)
		{
			return ((::System::Void(*)(::PVOID, ::HCIJIIALMDH*, ::System::Int32, ::System::Int32, ::System::Boolean, ::MoleMole::AbyssS2_GenRouteMapConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_CUSTOMCONFIG_CUSTOMDATATOCSDATA_OFFSET))(this, rfData, routeMapID, layerIndex, isLastLayer, genRouteMapConfig);
		}

		::System::Void SetSuddenEventInfoByCurAreaIndex(::KPAKKOJMBHN* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::KPAKKOJMBHN*))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_CUSTOMCONFIG_SETSUDDENEVENTINFOBYCURAREAINDEX_OFFSET))(this, rsp);
		}
	};
}
