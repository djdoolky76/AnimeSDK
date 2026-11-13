#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KLNKLOMDIIC.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class FiveDimCustomLoadConfig; }
namespace RPG::GameCore { class FiveDimCustomVisibilityConfig; }
namespace RPG::GameCore { class FiveDimNavMapSurfaceConnectConfig; }
namespace RPG::GameCore { class FiveDimPipePortalConfig; }
namespace RPG::GameCore { class FiveDimPortalConfig; }
namespace RPG::GameCore { class FiveDimSurfaceConfig; }
namespace RPG::GameCore { class LittleGameAttachPointConfig; }
namespace RPG::GameCore { class LittleGameEntityConfig; }
namespace RPG::GameCore { class LittleGameEntityVarConfig; }
namespace RPG::GameCore { class LittleGameNavMapIconConfig; }
namespace RPG::GameCore { class LittleGameTagConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EHLMPJIELJF_CEOCGKCLKCH_OFFSET UNITYSDK_OFFSET(0x18BD71B0)
#define EHLMPJIELJF_CMAEAGDENAP_OFFSET UNITYSDK_OFFSET(0x18BD70A0)
#define EHLMPJIELJF_CTOR_OFFSET UNITYSDK_OFFSET(0x18BD7390)
#define EHLMPJIELJF_GET_ATTACHPOINTCONFIG_OFFSET UNITYSDK_OFFSET(0x18BD7250)
#define EHLMPJIELJF_GET_ATTACHPOINTS_OFFSET UNITYSDK_OFFSET(0x18BD7350)
#define EHLMPJIELJF_GET_CHILDRENIDS_OFFSET UNITYSDK_OFFSET(0x18BD7110)
#define EHLMPJIELJF_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x18BD7370)
#define EHLMPJIELJF_GET_CUSTOMLOADCONFIG_OFFSET UNITYSDK_OFFSET(0x18BD72B0)
#define EHLMPJIELJF_GET_CUSTOMVISIBILITYCONFIG_OFFSET UNITYSDK_OFFSET(0x18BD72D0)
#define EHLMPJIELJF_GET_ENTITYVARCONFIG_OFFSET UNITYSDK_OFFSET(0x18BD72F0)
#define EHLMPJIELJF_GET_ICONCONFIG_OFFSET UNITYSDK_OFFSET(0x18BD7210)
#define EHLMPJIELJF_GET_ISLOADEDINNAV_OFFSET UNITYSDK_OFFSET(0x18BD7150)
#define EHLMPJIELJF_GET_ISLOADED_OFFSET UNITYSDK_OFFSET(0x18BD7130)
#define EHLMPJIELJF_GET_ISLOCKED_OFFSET UNITYSDK_OFFSET(0x18BD7190)
#define EHLMPJIELJF_GET_ISSURFACE_OFFSET UNITYSDK_OFFSET(0x18BD7080)
#define EHLMPJIELJF_GET_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0x18BD7170)
#define EHLMPJIELJF_GET_LITTLEGAMETAGCONFIG_OFFSET UNITYSDK_OFFSET(0x18BD7310)
#define EHLMPJIELJF_GET_LOCALTRANSFORM_OFFSET UNITYSDK_OFFSET(0x18BD6E80)
#define EHLMPJIELJF_GET_MAPFACECONNECTCONFIG_OFFSET UNITYSDK_OFFSET(0x18BD7230)
#define EHLMPJIELJF_GET_PARENTID_OFFSET UNITYSDK_OFFSET(0x18BD70F0)
#define EHLMPJIELJF_GET_PIPEPORTALCONFIG_OFFSET UNITYSDK_OFFSET(0x18BD7270)
#define EHLMPJIELJF_GET_PORTALCONFIG_OFFSET UNITYSDK_OFFSET(0x18BD7290)
#define EHLMPJIELJF_GET_SURFACECONFIG_OFFSET UNITYSDK_OFFSET(0x18BD7330)
#define EHLMPJIELJF_GET_SURFACEID_OFFSET UNITYSDK_OFFSET(0x18BD7060)
#define EHLMPJIELJF_GET_SURFACERELATIVETRANSFORM_OFFSET UNITYSDK_OFFSET(0x18BD6FC0)
#define EHLMPJIELJF_GET_WORLDTRANSFORM_OFFSET UNITYSDK_OFFSET(0x18BD6F20)
#define EHLMPJIELJF_SET_ATTACHPOINTCONFIG_OFFSET UNITYSDK_OFFSET(0x18BD7260)
#define EHLMPJIELJF_SET_ATTACHPOINTS_OFFSET UNITYSDK_OFFSET(0x18BD7360)
#define EHLMPJIELJF_SET_CHILDRENIDS_OFFSET UNITYSDK_OFFSET(0x18BD7120)
#define EHLMPJIELJF_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x18BD7380)
#define EHLMPJIELJF_SET_CUSTOMLOADCONFIG_OFFSET UNITYSDK_OFFSET(0x18BD72C0)
#define EHLMPJIELJF_SET_CUSTOMVISIBILITYCONFIG_OFFSET UNITYSDK_OFFSET(0x18BD72E0)
#define EHLMPJIELJF_SET_ENTITYVARCONFIG_OFFSET UNITYSDK_OFFSET(0x18BD7300)
#define EHLMPJIELJF_SET_ICONCONFIG_OFFSET UNITYSDK_OFFSET(0x18BD7220)
#define EHLMPJIELJF_SET_ISLOADEDINNAV_OFFSET UNITYSDK_OFFSET(0x18BD7160)
#define EHLMPJIELJF_SET_ISLOADED_OFFSET UNITYSDK_OFFSET(0x18BD7140)
#define EHLMPJIELJF_SET_ISLOCKED_OFFSET UNITYSDK_OFFSET(0x18BD71A0)
#define EHLMPJIELJF_SET_ISSURFACE_OFFSET UNITYSDK_OFFSET(0x18BD7090)
#define EHLMPJIELJF_SET_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0x18BD7180)
#define EHLMPJIELJF_SET_LITTLEGAMETAGCONFIG_OFFSET UNITYSDK_OFFSET(0x18BD7320)
#define EHLMPJIELJF_SET_LOCALTRANSFORM_OFFSET UNITYSDK_OFFSET(0x18BD6ED0)
#define EHLMPJIELJF_SET_MAPFACECONNECTCONFIG_OFFSET UNITYSDK_OFFSET(0x18BD7240)
#define EHLMPJIELJF_SET_PARENTID_OFFSET UNITYSDK_OFFSET(0x18BD7100)
#define EHLMPJIELJF_SET_PIPEPORTALCONFIG_OFFSET UNITYSDK_OFFSET(0x18BD7280)
#define EHLMPJIELJF_SET_PORTALCONFIG_OFFSET UNITYSDK_OFFSET(0x18BD72A0)
#define EHLMPJIELJF_SET_SURFACECONFIG_OFFSET UNITYSDK_OFFSET(0x18BD7340)
#define EHLMPJIELJF_SET_SURFACEID_OFFSET UNITYSDK_OFFSET(0x18BD7070)
#define EHLMPJIELJF_SET_SURFACERELATIVETRANSFORM_OFFSET UNITYSDK_OFFSET(0x18BD7010)
#define EHLMPJIELJF_SET_WORLDTRANSFORM_OFFSET UNITYSDK_OFFSET(0x18BD6F70)

inline static constexpr unsigned int EHLMPJIELJF_TypeDefinitionIndex = 63613;

	class EHLMPJIELJF : public ::System::Object
	{
	public:
		::RPG::GameCore::LittleGameAttachPointConfig* _AttachPointConfig_k__BackingField; // 0x10
		::RPG::GameCore::FiveDimCustomVisibilityConfig* _CustomVisibilityConfig_k__BackingField; // 0x18
		::RPG::GameCore::LittleGameEntityVarConfig* _EntityVarConfig_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::System::UInt32>* _ChildrenIDs_k__BackingField; // 0x28
		::RPG::GameCore::LittleGameNavMapIconConfig* _IconConfig_k__BackingField; // 0x30
		::RPG::GameCore::FiveDimCustomLoadConfig* _CustomLoadConfig_k__BackingField; // 0x38
		::RPG::GameCore::FiveDimNavMapSurfaceConnectConfig* _MapFaceConnectConfig_k__BackingField; // 0x40
		::RPG::GameCore::FiveDimPipePortalConfig* _PipePortalConfig_k__BackingField; // 0x48
		::RPG::GameCore::FiveDimSurfaceConfig* _SurfaceConfig_k__BackingField; // 0x50
		::RPG::GameCore::LittleGameTagConfig* _LittleGameTagConfig_k__BackingField; // 0x58
		::RPG::GameCore::LittleGameEntityConfig* _Config_k__BackingField; // 0x60
		::RPG::GameCore::FiveDimPortalConfig* _PortalConfig_k__BackingField; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::String*, ::KLNKLOMDIIC>* _AttachPoints_k__BackingField; // 0x70
		::System::Boolean _IsSurface_k__BackingField; // 0x78
		::System::Boolean _IsLocked_k__BackingField; // 0x79
		::System::Byte _padding0[0x2];
		::KLNKLOMDIIC _WorldTransform_k__BackingField; // 0x7C
		::System::UInt32 _SurfaceID_k__BackingField; // 0xE4
		::System::Boolean _IsLoadedInNav_k__BackingField; // 0xE8
		::System::Boolean _IsVisible_k__BackingField; // 0xE9
		::System::Boolean _IsLoaded_k__BackingField; // 0xEA
		::System::Byte _padding1[0x1];
		::KLNKLOMDIIC _SurfaceRelativeTransform_k__BackingField; // 0xEC
		::System::UInt32 _ParentID_k__BackingField; // 0x154
		::KLNKLOMDIIC _LocalTransform_k__BackingField; // 0x158
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHLMPJIELJF_CTOR_OFFSET))(this);
		}

		::KLNKLOMDIIC get_LocalTransform()
		{
			return ((::KLNKLOMDIIC(*)(::PVOID))((::PBYTE)hIl2Cpp + EHLMPJIELJF_GET_LOCALTRANSFORM_OFFSET))(this);
		}

		::System::Void set_LocalTransform(::KLNKLOMDIIC a1)
		{
			return ((::System::Void(*)(::PVOID, ::KLNKLOMDIIC))((::PBYTE)hIl2Cpp + EHLMPJIELJF_SET_LOCALTRANSFORM_OFFSET))(this, a1);
		}

		::KLNKLOMDIIC get_WorldTransform()
		{
			return ((::KLNKLOMDIIC(*)(::PVOID))((::PBYTE)hIl2Cpp + EHLMPJIELJF_GET_WORLDTRANSFORM_OFFSET))(this);
		}

		::System::Void set_WorldTransform(::KLNKLOMDIIC a1)
		{
			return ((::System::Void(*)(::PVOID, ::KLNKLOMDIIC))((::PBYTE)hIl2Cpp + EHLMPJIELJF_SET_WORLDTRANSFORM_OFFSET))(this, a1);
		}

		::KLNKLOMDIIC get_SurfaceRelativeTransform()
		{
			return ((::KLNKLOMDIIC(*)(::PVOID))((::PBYTE)hIl2Cpp + EHLMPJIELJF_GET_SURFACERELATIVETRANSFORM_OFFSET))(this);
		}

		::System::Void set_SurfaceRelativeTransform(::KLNKLOMDIIC a1)
		{
			return ((::System::Void(*)(::PVOID, ::KLNKLOMDIIC))((::PBYTE)hIl2Cpp + EHLMPJIELJF_SET_SURFACERELATIVETRANSFORM_OFFSET))(this, a1);
		}

		::System::UInt32 get_SurfaceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EHLMPJIELJF_GET_SURFACEID_OFFSET))(this);
		}

		::System::Void set_SurfaceID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EHLMPJIELJF_SET_SURFACEID_OFFSET))(this, a1);
		}

		::System::Boolean get_IsSurface()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EHLMPJIELJF_GET_ISSURFACE_OFFSET))(this);
		}

		::System::Void set_IsSurface(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EHLMPJIELJF_SET_ISSURFACE_OFFSET))(this, a1);
		}

		::System::UInt32 CMAEAGDENAP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EHLMPJIELJF_CMAEAGDENAP_OFFSET))(this);
		}

		::System::UInt32 get_ParentID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EHLMPJIELJF_GET_PARENTID_OFFSET))(this);
		}

		::System::Void set_ParentID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EHLMPJIELJF_SET_PARENTID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_ChildrenIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHLMPJIELJF_GET_CHILDRENIDS_OFFSET))(this);
		}

		::System::Void set_ChildrenIDs(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + EHLMPJIELJF_SET_CHILDRENIDS_OFFSET))(this, a1);
		}

		::System::Boolean get_IsLoaded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EHLMPJIELJF_GET_ISLOADED_OFFSET))(this);
		}

		::System::Void set_IsLoaded(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EHLMPJIELJF_SET_ISLOADED_OFFSET))(this, a1);
		}

		::System::Boolean get_IsLoadedInNav()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EHLMPJIELJF_GET_ISLOADEDINNAV_OFFSET))(this);
		}

		::System::Void set_IsLoadedInNav(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EHLMPJIELJF_SET_ISLOADEDINNAV_OFFSET))(this, a1);
		}

		::System::Boolean get_IsVisible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EHLMPJIELJF_GET_ISVISIBLE_OFFSET))(this);
		}

		::System::Void set_IsVisible(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EHLMPJIELJF_SET_ISVISIBLE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsLocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EHLMPJIELJF_GET_ISLOCKED_OFFSET))(this);
		}

		::System::Void set_IsLocked(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EHLMPJIELJF_SET_ISLOCKED_OFFSET))(this, a1);
		}

		::System::Boolean CEOCGKCLKCH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EHLMPJIELJF_CEOCGKCLKCH_OFFSET))(this);
		}

		::RPG::GameCore::LittleGameNavMapIconConfig* get_IconConfig()
		{
			return ((::RPG::GameCore::LittleGameNavMapIconConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHLMPJIELJF_GET_ICONCONFIG_OFFSET))(this);
		}

		::System::Void set_IconConfig(::RPG::GameCore::LittleGameNavMapIconConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameNavMapIconConfig*))((::PBYTE)hIl2Cpp + EHLMPJIELJF_SET_ICONCONFIG_OFFSET))(this, a1);
		}

		::RPG::GameCore::FiveDimNavMapSurfaceConnectConfig* get_MapFaceConnectConfig()
		{
			return ((::RPG::GameCore::FiveDimNavMapSurfaceConnectConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHLMPJIELJF_GET_MAPFACECONNECTCONFIG_OFFSET))(this);
		}

		::System::Void set_MapFaceConnectConfig(::RPG::GameCore::FiveDimNavMapSurfaceConnectConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FiveDimNavMapSurfaceConnectConfig*))((::PBYTE)hIl2Cpp + EHLMPJIELJF_SET_MAPFACECONNECTCONFIG_OFFSET))(this, a1);
		}

		::RPG::GameCore::LittleGameAttachPointConfig* get_AttachPointConfig()
		{
			return ((::RPG::GameCore::LittleGameAttachPointConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHLMPJIELJF_GET_ATTACHPOINTCONFIG_OFFSET))(this);
		}

		::System::Void set_AttachPointConfig(::RPG::GameCore::LittleGameAttachPointConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameAttachPointConfig*))((::PBYTE)hIl2Cpp + EHLMPJIELJF_SET_ATTACHPOINTCONFIG_OFFSET))(this, a1);
		}

		::RPG::GameCore::FiveDimPipePortalConfig* get_PipePortalConfig()
		{
			return ((::RPG::GameCore::FiveDimPipePortalConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHLMPJIELJF_GET_PIPEPORTALCONFIG_OFFSET))(this);
		}

		::System::Void set_PipePortalConfig(::RPG::GameCore::FiveDimPipePortalConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FiveDimPipePortalConfig*))((::PBYTE)hIl2Cpp + EHLMPJIELJF_SET_PIPEPORTALCONFIG_OFFSET))(this, a1);
		}

		::RPG::GameCore::FiveDimPortalConfig* get_PortalConfig()
		{
			return ((::RPG::GameCore::FiveDimPortalConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHLMPJIELJF_GET_PORTALCONFIG_OFFSET))(this);
		}

		::System::Void set_PortalConfig(::RPG::GameCore::FiveDimPortalConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FiveDimPortalConfig*))((::PBYTE)hIl2Cpp + EHLMPJIELJF_SET_PORTALCONFIG_OFFSET))(this, a1);
		}

		::RPG::GameCore::FiveDimCustomLoadConfig* get_CustomLoadConfig()
		{
			return ((::RPG::GameCore::FiveDimCustomLoadConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHLMPJIELJF_GET_CUSTOMLOADCONFIG_OFFSET))(this);
		}

		::System::Void set_CustomLoadConfig(::RPG::GameCore::FiveDimCustomLoadConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FiveDimCustomLoadConfig*))((::PBYTE)hIl2Cpp + EHLMPJIELJF_SET_CUSTOMLOADCONFIG_OFFSET))(this, a1);
		}

		::RPG::GameCore::FiveDimCustomVisibilityConfig* get_CustomVisibilityConfig()
		{
			return ((::RPG::GameCore::FiveDimCustomVisibilityConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHLMPJIELJF_GET_CUSTOMVISIBILITYCONFIG_OFFSET))(this);
		}

		::System::Void set_CustomVisibilityConfig(::RPG::GameCore::FiveDimCustomVisibilityConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FiveDimCustomVisibilityConfig*))((::PBYTE)hIl2Cpp + EHLMPJIELJF_SET_CUSTOMVISIBILITYCONFIG_OFFSET))(this, a1);
		}

		::RPG::GameCore::LittleGameEntityVarConfig* get_EntityVarConfig()
		{
			return ((::RPG::GameCore::LittleGameEntityVarConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHLMPJIELJF_GET_ENTITYVARCONFIG_OFFSET))(this);
		}

		::System::Void set_EntityVarConfig(::RPG::GameCore::LittleGameEntityVarConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameEntityVarConfig*))((::PBYTE)hIl2Cpp + EHLMPJIELJF_SET_ENTITYVARCONFIG_OFFSET))(this, a1);
		}

		::RPG::GameCore::LittleGameTagConfig* get_LittleGameTagConfig()
		{
			return ((::RPG::GameCore::LittleGameTagConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHLMPJIELJF_GET_LITTLEGAMETAGCONFIG_OFFSET))(this);
		}

		::System::Void set_LittleGameTagConfig(::RPG::GameCore::LittleGameTagConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameTagConfig*))((::PBYTE)hIl2Cpp + EHLMPJIELJF_SET_LITTLEGAMETAGCONFIG_OFFSET))(this, a1);
		}

		::RPG::GameCore::FiveDimSurfaceConfig* get_SurfaceConfig()
		{
			return ((::RPG::GameCore::FiveDimSurfaceConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHLMPJIELJF_GET_SURFACECONFIG_OFFSET))(this);
		}

		::System::Void set_SurfaceConfig(::RPG::GameCore::FiveDimSurfaceConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FiveDimSurfaceConfig*))((::PBYTE)hIl2Cpp + EHLMPJIELJF_SET_SURFACECONFIG_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::KLNKLOMDIIC>* get_AttachPoints()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::KLNKLOMDIIC>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHLMPJIELJF_GET_ATTACHPOINTS_OFFSET))(this);
		}

		::System::Void set_AttachPoints(::System::Collections::Generic::Dictionary_2<::System::String*, ::KLNKLOMDIIC>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::KLNKLOMDIIC>*))((::PBYTE)hIl2Cpp + EHLMPJIELJF_SET_ATTACHPOINTS_OFFSET))(this, a1);
		}

		::RPG::GameCore::LittleGameEntityConfig* get_Config()
		{
			return ((::RPG::GameCore::LittleGameEntityConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHLMPJIELJF_GET_CONFIG_OFFSET))(this);
		}

		::System::Void set_Config(::RPG::GameCore::LittleGameEntityConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameEntityConfig*))((::PBYTE)hIl2Cpp + EHLMPJIELJF_SET_CONFIG_OFFSET))(this, a1);
		}

	};
