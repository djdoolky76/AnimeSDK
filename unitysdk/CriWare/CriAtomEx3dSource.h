#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriDisposable.h"
#include "unitysdk/CriWare/CriAtomEx3dSource_Config.h"
#include "unitysdk/CriWare/CriAtomEx_CuboidExtent.h"
#include "unitysdk/CriWare/CriAtomEx_NativeVector.h"
#include "unitysdk/CriWare/CriAtomEx_Randomize3dConfig.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace CriWare { class CriAtomEx3dRegion; }
namespace System { class Object; }

#define CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_CREATE_OFFSET UNITYSDK_OFFSET(0x17518AE0)
#define CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_DESTROY_OFFSET UNITYSDK_OFFSET(0x17518CC0)
#define CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_GETATTENUATIONDISTANCESETTING_OFFSET UNITYSDK_OFFSET(0x17519C90)
#define CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_GETPOSITION_OFFSET UNITYSDK_OFFSET(0x1751A850)
#define CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_ISDESTROYABLE_OFFSET UNITYSDK_OFFSET(0x1751A730)
#define CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_RESETPARAMETERS_OFFSET UNITYSDK_OFFSET(0x17518ED0)
#define CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_SET3DREGIONHN_OFFSET UNITYSDK_OFFSET(0x1751A330)
#define CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_SETATTENUATIONDISTANCESETTING_OFFSET UNITYSDK_OFFSET(0x17519B90)
#define CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_SETCONEORIENTATION_OFFSET UNITYSDK_OFFSET(0x17519340)
#define CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_SETCONEPARAMETER_OFFSET UNITYSDK_OFFSET(0x17519480)
#define CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_SETCUBOIDEXTENT_OFFSET UNITYSDK_OFFSET(0x1751A960)
#define CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_SETDISTANCEAISACCONTROLID_OFFSET UNITYSDK_OFFSET(0x1751A630)
#define CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_SETDOPPLERFACTOR_OFFSET UNITYSDK_OFFSET(0x17519840)
#define CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_SETINTERIORPANFIELD_OFFSET UNITYSDK_OFFSET(0x17519710)
#define CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_SETLISTENERBASEDELEVATIONANGLEAISACCONTROLID_OFFSET UNITYSDK_OFFSET(0x1751A430)
#define CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_SETMAXANGLEAISACDELTA_OFFSET UNITYSDK_OFFSET(0x17519A80)
#define CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_SETMINMAXATTENUATIONDISTANCE_OFFSET UNITYSDK_OFFSET(0x175195D0)
#define CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_SETORIENTATION_OFFSET UNITYSDK_OFFSET(0x17519220)
#define CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_SETPOSITION_OFFSET UNITYSDK_OFFSET(0x17518FE0)
#define CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_SETRANDOMPOSITIONCONFIG_1_OFFSET UNITYSDK_OFFSET(0x17519E10)
#define CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_SETRANDOMPOSITIONCONFIG_OFFSET UNITYSDK_OFFSET(0x17519E90)
#define CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_SETRANDOMPOSITIONLIST_OFFSET UNITYSDK_OFFSET(0x1751A200)
#define CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_SETSOURCEBASEDELEVATIONANGLEAISACCONTROLID_OFFSET UNITYSDK_OFFSET(0x1751A530)
#define CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_SETVELOCITY_OFFSET UNITYSDK_OFFSET(0x175190F0)
#define CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_SETVOLUME_OFFSET UNITYSDK_OFFSET(0x17519960)
#define CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_UPDATE_OFFSET UNITYSDK_OFFSET(0x17518DD0)
#define CRIWARE_CRIATOMEX3DSOURCE_CTOR_OFFSET UNITYSDK_OFFSET(0x175189F0)
#define CRIWARE_CRIATOMEX3DSOURCE_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x17518BB0)
#define CRIWARE_CRIATOMEX3DSOURCE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17518BA0)
#define CRIWARE_CRIATOMEX3DSOURCE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1751A9E0)
#define CRIWARE_CRIATOMEX3DSOURCE_GETATTENUATIONDISTANCESETTING_OFFSET UNITYSDK_OFFSET(0x17519C10)
#define CRIWARE_CRIATOMEX3DSOURCE_GETPOSITION_OFFSET UNITYSDK_OFFSET(0x1751A7B0)
#define CRIWARE_CRIATOMEX3DSOURCE_GET_NATIVEHANDLE_OFFSET UNITYSDK_OFFSET(0x17518D40)
#define CRIWARE_CRIATOMEX3DSOURCE_ISDESTROYABLE_OFFSET UNITYSDK_OFFSET(0x1751A6B0)
#define CRIWARE_CRIATOMEX3DSOURCE_RESETPARAMETERS_OFFSET UNITYSDK_OFFSET(0x17518E50)
#define CRIWARE_CRIATOMEX3DSOURCE_SET3DREGION_OFFSET UNITYSDK_OFFSET(0x1751A290)
#define CRIWARE_CRIATOMEX3DSOURCE_SETATTENUATIONDISTANCESETTING_OFFSET UNITYSDK_OFFSET(0x17519B10)
#define CRIWARE_CRIATOMEX3DSOURCE_SETCONEORIENTATION_OFFSET UNITYSDK_OFFSET(0x175192B0)
#define CRIWARE_CRIATOMEX3DSOURCE_SETCONEPARAMETER_OFFSET UNITYSDK_OFFSET(0x175193C0)
#define CRIWARE_CRIATOMEX3DSOURCE_SETCUBOIDEXTENT_OFFSET UNITYSDK_OFFSET(0x1751A8E0)
#define CRIWARE_CRIATOMEX3DSOURCE_SETDISTANCEAISACCONTROLID_OFFSET UNITYSDK_OFFSET(0x1751A5B0)
#define CRIWARE_CRIATOMEX3DSOURCE_SETDOPPLERFACTOR_OFFSET UNITYSDK_OFFSET(0x175197B0)
#define CRIWARE_CRIATOMEX3DSOURCE_SETINTERIORPANFIELD_OFFSET UNITYSDK_OFFSET(0x17519670)
#define CRIWARE_CRIATOMEX3DSOURCE_SETLISTENERBASEDELEVATIONANGLEAISACCONTROLID_OFFSET UNITYSDK_OFFSET(0x1751A3B0)
#define CRIWARE_CRIATOMEX3DSOURCE_SETMAXANGLEAISACDELTA_OFFSET UNITYSDK_OFFSET(0x175199F0)
#define CRIWARE_CRIATOMEX3DSOURCE_SETMINMAXDISTANCE_OFFSET UNITYSDK_OFFSET(0x17519530)
#define CRIWARE_CRIATOMEX3DSOURCE_SETORIENTATION_OFFSET UNITYSDK_OFFSET(0x17519170)
#define CRIWARE_CRIATOMEX3DSOURCE_SETPOSITION_OFFSET UNITYSDK_OFFSET(0x17518F50)
#define CRIWARE_CRIATOMEX3DSOURCE_SETRANDOMPOSITIONCONFIG_OFFSET UNITYSDK_OFFSET(0x17519D10)
#define CRIWARE_CRIATOMEX3DSOURCE_SETRANDOMPOSITIONLIST_OFFSET UNITYSDK_OFFSET(0x17519FB0)
#define CRIWARE_CRIATOMEX3DSOURCE_SETSOURCEBASEDELEVATIONANGLEAISACCONTROLID_OFFSET UNITYSDK_OFFSET(0x1751A4B0)
#define CRIWARE_CRIATOMEX3DSOURCE_SETVELOCITY_OFFSET UNITYSDK_OFFSET(0x17519060)
#define CRIWARE_CRIATOMEX3DSOURCE_SETVOLUME_OFFSET UNITYSDK_OFFSET(0x175198D0)
#define CRIWARE_CRIATOMEX3DSOURCE_UPDATE_OFFSET UNITYSDK_OFFSET(0x17518D50)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomEx3dSource_TypeDefinitionIndex = 40986;

	class CriAtomEx3dSource : public ::CriWare::CriDisposable
	{
	public:
		::System::IntPtr handle; // 0x20
		::System::UInt32 currentRandomPositionListMaxLength; // 0x28
		::System::Void _ctor(::System::Boolean a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_DISPOSE_1_OFFSET))(this, a1);
		}

		::System::IntPtr get_nativeHandle()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_GET_NATIVEHANDLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_UPDATE_OFFSET))(this);
		}

		::System::Void ResetParameters()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_RESETPARAMETERS_OFFSET))(this);
		}

		::System::Void SetPosition(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_SETPOSITION_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetVelocity(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_SETVELOCITY_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetOrientation(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_SETORIENTATION_OFFSET))(this, a1, a2);
		}

		::System::Void SetConeOrientation(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_SETCONEORIENTATION_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetConeParameter(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_SETCONEPARAMETER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetMinMaxDistance(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_SETMINMAXDISTANCE_OFFSET))(this, a1, a2);
		}

		::System::Void SetInteriorPanField(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_SETINTERIORPANFIELD_OFFSET))(this, a1, a2);
		}

		::System::Void SetDopplerFactor(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_SETDOPPLERFACTOR_OFFSET))(this, a1);
		}

		::System::Void SetVolume(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_SETVOLUME_OFFSET))(this, a1);
		}

		::System::Void SetMaxAngleAisacDelta(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_SETMAXANGLEAISACDELTA_OFFSET))(this, a1);
		}

		::System::Void SetAttenuationDistanceSetting(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_SETATTENUATIONDISTANCESETTING_OFFSET))(this, a1);
		}

		::System::Boolean GetAttenuationDistanceSetting()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_GETATTENUATIONDISTANCESETTING_OFFSET))(this);
		}

		::System::Void SetRandomPositionConfig(::System::Nullable_1<::System::Object*> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Object*>))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_SETRANDOMPOSITIONCONFIG_OFFSET))(this, a1);
		}

		::System::Void SetRandomPositionList(::Il2CppArray<::UnityEngine::Vector3>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_SETRANDOMPOSITIONLIST_OFFSET))(this, a1);
		}

		::System::Void Set3dRegion(::CriWare::CriAtomEx3dRegion* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriAtomEx3dRegion*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_SET3DREGION_OFFSET))(this, a1);
		}

		::System::Void SetListenerBasedElevationAngleAisacControlId(::System::UInt16 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_SETLISTENERBASEDELEVATIONANGLEAISACCONTROLID_OFFSET))(this, a1);
		}

		::System::Void SetSourceBasedElevationAngleAisacControlId(::System::UInt16 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_SETSOURCEBASEDELEVATIONANGLEAISACCONTROLID_OFFSET))(this, a1);
		}

		::System::Void SetDistanceAisacControlId(::System::UInt16 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_SETDISTANCEAISACCONTROLID_OFFSET))(this, a1);
		}

		::System::Boolean IsDestroyable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_ISDESTROYABLE_OFFSET))(this);
		}

		::CriWare::CriAtomEx_NativeVector GetPosition()
		{
			return ((::CriWare::CriAtomEx_NativeVector(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_GETPOSITION_OFFSET))(this);
		}

		::System::Void SetCuboidExtent(::CriWare::CriAtomEx_CuboidExtent a1)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriAtomEx_CuboidExtent))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_SETCUBOIDEXTENT_OFFSET))(this, a1);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_FINALIZE_OFFSET))(this);
		}

		static ::System::IntPtr criAtomEx3dSource_Create(::CriWare::CriAtomEx3dSource_Config a1, ::System::IntPtr a2, ::System::Int32 a3)
		{
			return ((::System::IntPtr(*)(::CriWare::CriAtomEx3dSource_Config, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_CREATE_OFFSET))(a1, a2, a3);
		}

		static ::System::Void criAtomEx3dSource_Destroy(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_DESTROY_OFFSET))(a1);
		}

		static ::System::Void criAtomEx3dSource_Update(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_UPDATE_OFFSET))(a1);
		}

		static ::System::Void criAtomEx3dSource_ResetParameters(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_RESETPARAMETERS_OFFSET))(a1);
		}

		static ::System::Void criAtomEx3dSource_SetPosition(::System::IntPtr a1, ::CriWare::CriAtomEx_NativeVector a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::CriWare::CriAtomEx_NativeVector))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_SETPOSITION_OFFSET))(a1, a2);
		}

		static ::System::Void criAtomEx3dSource_SetVelocity(::System::IntPtr a1, ::CriWare::CriAtomEx_NativeVector a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::CriWare::CriAtomEx_NativeVector))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_SETVELOCITY_OFFSET))(a1, a2);
		}

		static ::System::Void criAtomEx3dSource_SetOrientation(::System::IntPtr a1, ::CriWare::CriAtomEx_NativeVector a2, ::CriWare::CriAtomEx_NativeVector a3)
		{
			return ((::System::Void(*)(::System::IntPtr, ::CriWare::CriAtomEx_NativeVector, ::CriWare::CriAtomEx_NativeVector))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_SETORIENTATION_OFFSET))(a1, a2, a3);
		}

		static ::System::Void criAtomEx3dSource_SetConeOrientation(::System::IntPtr a1, ::CriWare::CriAtomEx_NativeVector a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::CriWare::CriAtomEx_NativeVector))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_SETCONEORIENTATION_OFFSET))(a1, a2);
		}

		static ::System::Void criAtomEx3dSource_SetConeParameter(::System::IntPtr a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_SETCONEPARAMETER_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void criAtomEx3dSource_SetMinMaxAttenuationDistance(::System::IntPtr a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_SETMINMAXATTENUATIONDISTANCE_OFFSET))(a1, a2, a3);
		}

		static ::System::Void criAtomEx3dSource_SetInteriorPanField(::System::IntPtr a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_SETINTERIORPANFIELD_OFFSET))(a1, a2, a3);
		}

		static ::System::Void criAtomEx3dSource_SetDopplerFactor(::System::IntPtr a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_SETDOPPLERFACTOR_OFFSET))(a1, a2);
		}

		static ::System::Void criAtomEx3dSource_SetVolume(::System::IntPtr a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_SETVOLUME_OFFSET))(a1, a2);
		}

		static ::System::Void criAtomEx3dSource_SetMaxAngleAisacDelta(::System::IntPtr a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_SETMAXANGLEAISACDELTA_OFFSET))(a1, a2);
		}

		static ::System::Void criAtomEx3dSource_SetAttenuationDistanceSetting(::System::IntPtr a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_SETATTENUATIONDISTANCESETTING_OFFSET))(a1, a2);
		}

		static ::System::Boolean criAtomEx3dSource_GetAttenuationDistanceSetting(::System::IntPtr a1)
		{
			return ((::System::Boolean(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_GETATTENUATIONDISTANCESETTING_OFFSET))(a1);
		}

		static ::System::Void criAtomEx3dSource_SetRandomPositionConfig(::System::IntPtr a1, ::CriWare::CriAtomEx_Randomize3dConfig a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::CriWare::CriAtomEx_Randomize3dConfig))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_SETRANDOMPOSITIONCONFIG_OFFSET))(a1, a2);
		}

		static ::System::Void criAtomEx3dSource_SetRandomPositionConfig_1(::System::IntPtr a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_SETRANDOMPOSITIONCONFIG_1_OFFSET))(a1, a2);
		}

		static ::System::Void criAtomEx3dSource_SetRandomPositionList(::System::IntPtr a1, ::Il2CppArray<::System::Object*>* a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::System::IntPtr, ::Il2CppArray<::System::Object*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_SETRANDOMPOSITIONLIST_OFFSET))(a1, a2, a3);
		}

		static ::System::Void criAtomEx3dSource_SetDistanceAisacControlId(::System::IntPtr a1, ::System::UInt16 a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::UInt16))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_SETDISTANCEAISACCONTROLID_OFFSET))(a1, a2);
		}

		static ::System::Boolean criAtomEx3dSource_IsDestroyable(::System::IntPtr a1)
		{
			return ((::System::Boolean(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_ISDESTROYABLE_OFFSET))(a1);
		}

		static ::CriWare::CriAtomEx_NativeVector criAtomEx3dSource_GetPosition(::System::IntPtr a1)
		{
			return ((::CriWare::CriAtomEx_NativeVector(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_GETPOSITION_OFFSET))(a1);
		}

		static ::System::Void criAtomEx3dSource_SetCuboidExtent(::System::IntPtr a1, ::CriWare::CriAtomEx_CuboidExtent a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::CriWare::CriAtomEx_CuboidExtent))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_SETCUBOIDEXTENT_OFFSET))(a1, a2);
		}

		static ::System::Void criAtomEx3dSource_Set3dRegionHn(::System::IntPtr a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_SET3DREGIONHN_OFFSET))(a1, a2);
		}

		static ::System::Void criAtomEx3dSource_SetListenerBasedElevationAngleAisacControlId(::System::IntPtr a1, ::System::UInt16 a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::UInt16))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_SETLISTENERBASEDELEVATIONANGLEAISACCONTROLID_OFFSET))(a1, a2);
		}

		static ::System::Void criAtomEx3dSource_SetSourceBasedElevationAngleAisacControlId(::System::IntPtr a1, ::System::UInt16 a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::UInt16))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_SETSOURCEBASEDELEVATIONANGLEAISACCONTROLID_OFFSET))(a1, a2);
		}

	};
}
