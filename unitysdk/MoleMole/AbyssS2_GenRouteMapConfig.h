#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/AbyssS2_GenConfigMeta.h"
#include "unitysdk/System/Object.h"

class DDHGCFBKHMN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_ABYSSS2_GENROUTEMAPCONFIG_GETROUTEMAPTEMPLATE_OFFSET UNITYSDK_OFFSET(0x13040BF0)
#define MOLEMOLE_ABYSSS2_GENROUTEMAPCONFIG_ONCHANGED_OFFSET UNITYSDK_OFFSET(0x130414F0)
#define MOLEMOLE_ABYSSS2_GENROUTEMAPCONFIG_REFRESHROUTECOUNT_OFFSET UNITYSDK_OFFSET(0x13040AC0)
#define MOLEMOLE_ABYSSS2_GENROUTEMAPCONFIG_RUNTIMERELOADBYCONFIG_OFFSET UNITYSDK_OFFSET(0x13040D10)
#define MOLEMOLE_ABYSSS2_GENROUTEMAPCONFIG_VALIDATE_OFFSET UNITYSDK_OFFSET(0x13040A20)
#define MOLEMOLE_ABYSSS2_GENROUTEMAPCONFIG__CCTOR_OFFSET UNITYSDK_OFFSET(0x13041570)
#define MOLEMOLE_ABYSSS2_GENROUTEMAPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x13040A00)

namespace MoleMole
{
	inline static constexpr unsigned int AbyssS2_GenRouteMapConfig_TypeDefinitionIndex = 93058;

	class AbyssS2_GenRouteMapConfig : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_lazyCheck()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AbyssS2_GenRouteMapConfig_TypeDefinitionIndex)->GetStaticField(0x13860);
		}
		// static const ::System::String* AreaPoolV2; // 0x0
		// static const ::System::String* LSEED_KEY; // 0x0
		::MoleMole::AbyssS2_GenConfigMeta genMeta; // 0x10
		::System::Int32 genRouteMapID; // 0x24
		::System::Int32 genRoundID; // 0x28
		::System::Int32 genRouteMapLayer; // 0x2C
		::System::Boolean genRouteLastMapLayer; // 0x30
		::System::Byte _padding0[0x7];
		::System::Collections::Generic::List_1<::System::Object*>* genLimits; // 0x38
		::System::Collections::Generic::List_1<::System::Object*>* skipFloorCfgs; // 0x40
		::System::Boolean hasRouteDiscrete; // 0x48
		::System::Byte _padding1[0x7];
		::System::Collections::Generic::List_1<::System::Int32>* routeDiscretes; // 0x50
		::System::Boolean hasRouteStraight; // 0x58
		::System::Byte _padding2[0x7];
		::System::Collections::Generic::List_1<::System::Int32>* routeStraights; // 0x60
		::System::Int64 seed; // 0x68
		::System::Collections::Generic::List_1<::System::Object*>* areaPools; // 0x70
		::System::Collections::Generic::List_1<::System::Object*>* fixedFloorAreas; // 0x78
		::System::Collections::Generic::List_1<::System::Object*>* bannedFloorAreas; // 0x80
		::System::Collections::Generic::List_1<::System::Object*>* everyAreaMaxCount; // 0x88
		::System::Collections::Generic::List_1<::System::Object*>* everyAreaMinMustCount; // 0x90
		::System::Collections::Generic::List_1<::System::Object*>* areaPairForbidConnect; // 0x98
		::System::Int32 dontConnectStrategy; // 0xA0
		::System::Byte _padding3[0x4];
		::System::Collections::Generic::List_1<::System::Object*>* areaTagMaxConnectCount; // 0xA8
		::System::Collections::Generic::List_1<::System::Int32>* singlePointForbiddenAreaID; // 0xB0
		::System::Collections::Generic::List_1<::System::Object*>* RoundAreaConfigMaxCount; // 0xB8
		::System::Collections::Generic::List_1<::System::Object*>* RoundAreaConfigIndexMaxCount; // 0xC0
		::System::Collections::Generic::List_1<::System::Object*>* RouteMapAreaConfigIndexMaxCount; // 0xC8
		::System::Collections::Generic::List_1<::System::Object*>* RouteMapFloorFixedAreaConfigIndex; // 0xD0
		::System::Collections::Generic::List_1<::System::Object*>* RouteMapFloorBannedAreaConfigIndex; // 0xD8

		::System::Void _ctor(::System::Int32 routeMapID, ::System::Int32 routeMapLayer, ::System::Boolean isLastLayer, ::System::Int32 genRoundID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_GENROUTEMAPCONFIG__CTOR_OFFSET))(this, routeMapID, routeMapLayer, isLastLayer, genRoundID);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_GENROUTEMAPCONFIG__CCTOR_OFFSET))();
		}

		::System::Boolean Validate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_GENROUTEMAPCONFIG_VALIDATE_OFFSET))(this);
		}

		::System::Void RefreshRouteCount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_GENROUTEMAPCONFIG_REFRESHROUTECOUNT_OFFSET))(this);
		}

		::DDHGCFBKHMN* GetRouteMapTemplate()
		{
			return ((::DDHGCFBKHMN*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_GENROUTEMAPCONFIG_GETROUTEMAPTEMPLATE_OFFSET))(this);
		}

		::System::Void RuntimeReloadByConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_GENROUTEMAPCONFIG_RUNTIMERELOADBYCONFIG_OFFSET))(this);
		}

		::System::Void OnChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_GENROUTEMAPCONFIG_ONCHANGED_OFFSET))(this);
		}
	};
}
