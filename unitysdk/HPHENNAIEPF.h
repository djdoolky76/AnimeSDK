#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DJJKNHPLHDI.h"
#include "unitysdk/Unity/Profiling/ProfilerMarker.h"
class ABCEEGOBDCL;
class AJMKGJAMNMD;
class BABNOKHOBCF;
class CAPEKIODMKH;
class CHENLCDDMGN;
class FJIEMDNHDLA;
class JCKNEKIMNOB;
class JLCFMIPMHJO;
class LDIMALLCHAF;
class LKGIMGKIFFI;
class MHIHPODNPMO;
class MNCOPNHONHO;
namespace Entitas { class ISystem; }
namespace Entitas { class Systems; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HPHENNAIEPF_ADD_OFFSET UNITYSDK_OFFSET(0x1AF360A0)
#define HPHENNAIEPF_BAOIILMBACM_OFFSET UNITYSDK_OFFSET(0x1AF36310)
#define HPHENNAIEPF_CTOR_OFFSET UNITYSDK_OFFSET(0x1AF35A60)
#define HPHENNAIEPF_GET_CAMERACURVESYSTEM_OFFSET UNITYSDK_OFFSET(0x1AF366F0)
#define HPHENNAIEPF_GET_FIVEDIMCAMERASYSTEM_OFFSET UNITYSDK_OFFSET(0x1AF366D0)
#define HPHENNAIEPF_GET_LEVELMANAGERSYSTEM_OFFSET UNITYSDK_OFFSET(0x1AF36670)
#define HPHENNAIEPF_GET_ROOMBOOTSTRAPSYSTEM_OFFSET UNITYSDK_OFFSET(0x1AF36710)
#define HPHENNAIEPF_GET_ROOMDIRECTIONFILTERSYSTEM_OFFSET UNITYSDK_OFFSET(0x1AF36770)
#define HPHENNAIEPF_GET_ROOMDOORSYSTEM_OFFSET UNITYSDK_OFFSET(0x1AF36730)
#define HPHENNAIEPF_GET_ROOMTRANSITIONSYSTEM_OFFSET UNITYSDK_OFFSET(0x1AF36750)
#define HPHENNAIEPF_GET_SCENESYSTEM_OFFSET UNITYSDK_OFFSET(0x1AF366B0)
#define HPHENNAIEPF_GET_UIINPUTSYSTEM_OFFSET UNITYSDK_OFFSET(0x1AF36690)
#define HPHENNAIEPF_ICDIFELGDHI_OFFSET UNITYSDK_OFFSET(0x1AF365C0)
#define HPHENNAIEPF_SET_CAMERACURVESYSTEM_OFFSET UNITYSDK_OFFSET(0x1AF36700)
#define HPHENNAIEPF_SET_FIVEDIMCAMERASYSTEM_OFFSET UNITYSDK_OFFSET(0x1AF366E0)
#define HPHENNAIEPF_SET_LEVELMANAGERSYSTEM_OFFSET UNITYSDK_OFFSET(0x1AF36680)
#define HPHENNAIEPF_SET_ROOMBOOTSTRAPSYSTEM_OFFSET UNITYSDK_OFFSET(0x1AF36720)
#define HPHENNAIEPF_SET_ROOMDIRECTIONFILTERSYSTEM_OFFSET UNITYSDK_OFFSET(0x1AF36780)
#define HPHENNAIEPF_SET_ROOMDOORSYSTEM_OFFSET UNITYSDK_OFFSET(0x1AF36740)
#define HPHENNAIEPF_SET_ROOMTRANSITIONSYSTEM_OFFSET UNITYSDK_OFFSET(0x1AF36760)
#define HPHENNAIEPF_SET_SCENESYSTEM_OFFSET UNITYSDK_OFFSET(0x1AF366C0)
#define HPHENNAIEPF_SET_UIINPUTSYSTEM_OFFSET UNITYSDK_OFFSET(0x1AF366A0)

inline static constexpr unsigned int HPHENNAIEPF_TypeDefinitionIndex = 79031;

	class HPHENNAIEPF : public ::DJJKNHPLHDI
	{
	public:
		::MHIHPODNPMO* _LevelManagerSystem_k__BackingField; // 0x30
		::System::Collections::Generic::List_1<::LDIMALLCHAF*>* LBGDAIGJNNI; // 0x38
		::JLCFMIPMHJO* _RoomTransitionSystem_k__BackingField; // 0x40
		::JCKNEKIMNOB* _SceneSystem_k__BackingField; // 0x48
		::CAPEKIODMKH* _UIInputSystem_k__BackingField; // 0x50
		::FJIEMDNHDLA* _CameraCurveSystem_k__BackingField; // 0x58
		::AJMKGJAMNMD* _RoomDirectionFilterSystem_k__BackingField; // 0x60
		::ABCEEGOBDCL* _RoomBootstrapSystem_k__BackingField; // 0x68
		::LKGIMGKIFFI* _FiveDimCameraSystem_k__BackingField; // 0x70
		::System::Collections::Generic::List_1<::Unity::Profiling::ProfilerMarker>* NPLJJKBPGIE; // 0x78
		::CHENLCDDMGN* _RoomDoorSystem_k__BackingField; // 0x80
		::System::Void _ctor(::BABNOKHOBCF* a1, ::MNCOPNHONHO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::BABNOKHOBCF*, ::MNCOPNHONHO*))((::PBYTE)hIl2Cpp + HPHENNAIEPF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void BAOIILMBACM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPHENNAIEPF_BAOIILMBACM_OFFSET))(this);
		}

		::Entitas::Systems* Add(::Entitas::ISystem* a1)
		{
			return ((::Entitas::Systems*(*)(::PVOID, ::Entitas::ISystem*))((::PBYTE)hIl2Cpp + HPHENNAIEPF_ADD_OFFSET))(this, a1);
		}

		::System::Void ICDIFELGDHI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPHENNAIEPF_ICDIFELGDHI_OFFSET))(this);
		}

		::MHIHPODNPMO* get_LevelManagerSystem()
		{
			return ((::MHIHPODNPMO*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPHENNAIEPF_GET_LEVELMANAGERSYSTEM_OFFSET))(this);
		}

		::System::Void set_LevelManagerSystem(::MHIHPODNPMO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MHIHPODNPMO*))((::PBYTE)hIl2Cpp + HPHENNAIEPF_SET_LEVELMANAGERSYSTEM_OFFSET))(this, a1);
		}

		::CAPEKIODMKH* get_UIInputSystem()
		{
			return ((::CAPEKIODMKH*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPHENNAIEPF_GET_UIINPUTSYSTEM_OFFSET))(this);
		}

		::System::Void set_UIInputSystem(::CAPEKIODMKH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CAPEKIODMKH*))((::PBYTE)hIl2Cpp + HPHENNAIEPF_SET_UIINPUTSYSTEM_OFFSET))(this, a1);
		}

		::JCKNEKIMNOB* get_SceneSystem()
		{
			return ((::JCKNEKIMNOB*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPHENNAIEPF_GET_SCENESYSTEM_OFFSET))(this);
		}

		::System::Void set_SceneSystem(::JCKNEKIMNOB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JCKNEKIMNOB*))((::PBYTE)hIl2Cpp + HPHENNAIEPF_SET_SCENESYSTEM_OFFSET))(this, a1);
		}

		::LKGIMGKIFFI* get_FiveDimCameraSystem()
		{
			return ((::LKGIMGKIFFI*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPHENNAIEPF_GET_FIVEDIMCAMERASYSTEM_OFFSET))(this);
		}

		::System::Void set_FiveDimCameraSystem(::LKGIMGKIFFI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LKGIMGKIFFI*))((::PBYTE)hIl2Cpp + HPHENNAIEPF_SET_FIVEDIMCAMERASYSTEM_OFFSET))(this, a1);
		}

		::FJIEMDNHDLA* get_CameraCurveSystem()
		{
			return ((::FJIEMDNHDLA*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPHENNAIEPF_GET_CAMERACURVESYSTEM_OFFSET))(this);
		}

		::System::Void set_CameraCurveSystem(::FJIEMDNHDLA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FJIEMDNHDLA*))((::PBYTE)hIl2Cpp + HPHENNAIEPF_SET_CAMERACURVESYSTEM_OFFSET))(this, a1);
		}

		::ABCEEGOBDCL* get_RoomBootstrapSystem()
		{
			return ((::ABCEEGOBDCL*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPHENNAIEPF_GET_ROOMBOOTSTRAPSYSTEM_OFFSET))(this);
		}

		::System::Void set_RoomBootstrapSystem(::ABCEEGOBDCL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ABCEEGOBDCL*))((::PBYTE)hIl2Cpp + HPHENNAIEPF_SET_ROOMBOOTSTRAPSYSTEM_OFFSET))(this, a1);
		}

		::CHENLCDDMGN* get_RoomDoorSystem()
		{
			return ((::CHENLCDDMGN*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPHENNAIEPF_GET_ROOMDOORSYSTEM_OFFSET))(this);
		}

		::System::Void set_RoomDoorSystem(::CHENLCDDMGN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CHENLCDDMGN*))((::PBYTE)hIl2Cpp + HPHENNAIEPF_SET_ROOMDOORSYSTEM_OFFSET))(this, a1);
		}

		::JLCFMIPMHJO* get_RoomTransitionSystem()
		{
			return ((::JLCFMIPMHJO*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPHENNAIEPF_GET_ROOMTRANSITIONSYSTEM_OFFSET))(this);
		}

		::System::Void set_RoomTransitionSystem(::JLCFMIPMHJO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JLCFMIPMHJO*))((::PBYTE)hIl2Cpp + HPHENNAIEPF_SET_ROOMTRANSITIONSYSTEM_OFFSET))(this, a1);
		}

		::AJMKGJAMNMD* get_RoomDirectionFilterSystem()
		{
			return ((::AJMKGJAMNMD*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPHENNAIEPF_GET_ROOMDIRECTIONFILTERSYSTEM_OFFSET))(this);
		}

		::System::Void set_RoomDirectionFilterSystem(::AJMKGJAMNMD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AJMKGJAMNMD*))((::PBYTE)hIl2Cpp + HPHENNAIEPF_SET_ROOMDIRECTIONFILTERSYSTEM_OFFSET))(this, a1);
		}

	};
