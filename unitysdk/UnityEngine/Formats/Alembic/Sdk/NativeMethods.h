#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aePropertyType.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aiPropertyType.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/Bool.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/CameraData.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aeContext.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aeObject.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aePointsData.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aePolyMeshData.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aeProperty.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aeXformData.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aiCamera.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aiConfig.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aiContext.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aiCurves.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aiCurvesSampleSummary.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aiCurvesSummary.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aiMeshSampleSummary.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aiMeshSummary.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aiObject.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aiPoints.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aiPointsSampleSummary.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aiPointsSummary.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aiPolyMesh.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aiProperty.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aiPropertyData.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aiSample.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aiSampleSelector.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aiSubD.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aiTimeSampling.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aiXform.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aiXformData.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"
namespace System { class String; }
namespace UnityEngine::Formats::Alembic::Sdk { class AlembicExportOptions; }

#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AEADDTIMESAMPLING_OFFSET UNITYSDK_OFFSET(0x1E58C020)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AEADDTIME_OFFSET UNITYSDK_OFFSET(0x1E58C0B0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AEAPPLYMATRIXP_OFFSET UNITYSDK_OFFSET(0x1E58CD80)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AEAPPLYMATRIXV_OFFSET UNITYSDK_OFFSET(0x1E58CE10)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AECAMERAWRITESAMPLE_OFFSET UNITYSDK_OFFSET(0x1E58C580)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AECREATECONTEXT_OFFSET UNITYSDK_OFFSET(0x1E58BC30)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AEDESTROYCONTEXT_OFFSET UNITYSDK_OFFSET(0x1E58BCB0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AEGENERATEREMAPINDICES_OFFSET UNITYSDK_OFFSET(0x1E58CCE0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AEGETTOPOBJECT_OFFSET UNITYSDK_OFFSET(0x1E58BFA0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AEMARKFORCEINVISIBLE_OFFSET UNITYSDK_OFFSET(0x1E58C850)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AEMARKFRAMEBEGIN_OFFSET UNITYSDK_OFFSET(0x1E58C140)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AEMARKFRAMEEND_OFFSET UNITYSDK_OFFSET(0x1E58C1C0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AENEWCAMERA_OFFSET UNITYSDK_OFFSET(0x1E58C2F0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AENEWPOINTS_OFFSET UNITYSDK_OFFSET(0x1E58C3A0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AENEWPOLYMESH_OFFSET UNITYSDK_OFFSET(0x1E58C450)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AENEWPROPERTY_OFFSET UNITYSDK_OFFSET(0x1E58C7A0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AENEWXFORM_OFFSET UNITYSDK_OFFSET(0x1E58C240)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AEOPENARCHIVE_OFFSET UNITYSDK_OFFSET(0x1E58BF00)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AEPOINTSWRITESAMPLE_OFFSET UNITYSDK_OFFSET(0x1E58C720)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AEPOLYMESHADDFACESET_OFFSET UNITYSDK_OFFSET(0x1E58C680)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AEPOLYMESHWRITESAMPLE_OFFSET UNITYSDK_OFFSET(0x1E58C600)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AEPROPERTYWRITEARRAYSAMPLE_OFFSET UNITYSDK_OFFSET(0x1E58C8D0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AEPROPERTYWRITESCALARSAMPLE_1_OFFSET UNITYSDK_OFFSET(0x1E58C9E0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AEPROPERTYWRITESCALARSAMPLE_2_OFFSET UNITYSDK_OFFSET(0x1E58CA60)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AEPROPERTYWRITESCALARSAMPLE_3_OFFSET UNITYSDK_OFFSET(0x1E58CAE0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AEPROPERTYWRITESCALARSAMPLE_4_OFFSET UNITYSDK_OFFSET(0x1E58CB60)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AEPROPERTYWRITESCALARSAMPLE_5_OFFSET UNITYSDK_OFFSET(0x1E58CBE0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AEPROPERTYWRITESCALARSAMPLE_6_OFFSET UNITYSDK_OFFSET(0x1E58CC60)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AEPROPERTYWRITESCALARSAMPLE_OFFSET UNITYSDK_OFFSET(0x1E58C960)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AESETCONFIG_OFFSET UNITYSDK_OFFSET(0x1E58BE30)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AEXFORMWRITESAMPLE_OFFSET UNITYSDK_OFFSET(0x1E58C500)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AICAMERAGETDATA_OFFSET UNITYSDK_OFFSET(0x1E58E3F0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AICLEANUP_OFFSET UNITYSDK_OFFSET(0x1E58A170)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AICLEARCONTEXTSWITHPATH_OFFSET UNITYSDK_OFFSET(0x1E58CEA0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AICONTEXTCREATE_OFFSET UNITYSDK_OFFSET(0x1E58CF40)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AICONTEXTDESTROY_OFFSET UNITYSDK_OFFSET(0x1E58CFC0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AICONTEXTGETAPPLICATION_OFFSET UNITYSDK_OFFSET(0x1E58BDB0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AICONTEXTGETISHDF5_OFFSET UNITYSDK_OFFSET(0x1E58BD30)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AICONTEXTGETTIMERANGE_OFFSET UNITYSDK_OFFSET(0x1E58D270)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AICONTEXTGETTIMESAMPLINGCOUNT_OFFSET UNITYSDK_OFFSET(0x1E58D160)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AICONTEXTGETTIMESAMPLING_OFFSET UNITYSDK_OFFSET(0x1E58D1E0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AICONTEXTGETTOPOBJECT_OFFSET UNITYSDK_OFFSET(0x1E58D300)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AICONTEXTLOAD_OFFSET UNITYSDK_OFFSET(0x1E58D040)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AICONTEXTSETCONFIG_OFFSET UNITYSDK_OFFSET(0x1E58D0E0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AICONTEXTUPDATESAMPLES_OFFSET UNITYSDK_OFFSET(0x1E58D380)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AICURVESFILLDATA_OFFSET UNITYSDK_OFFSET(0x1E58E810)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AICURVESGETSAMPLESUMMARY_OFFSET UNITYSDK_OFFSET(0x1E58E790)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AICURVESGETSUMMARY_OFFSET UNITYSDK_OFFSET(0x1E58E2F0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AIOBJECTASCAMERA_OFFSET UNITYSDK_OFFSET(0x1E58D9B0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AIOBJECTASCURVES_OFFSET UNITYSDK_OFFSET(0x1E58DAB0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AIOBJECTASPOINTS_OFFSET UNITYSDK_OFFSET(0x1E58DA30)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AIOBJECTASPOLYMESH_OFFSET UNITYSDK_OFFSET(0x1E58DB30)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AIOBJECTASSUBD_OFFSET UNITYSDK_OFFSET(0x1E58DBB0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AIOBJECTASXFORM_OFFSET UNITYSDK_OFFSET(0x1E58D930)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AIOBJECTGETCHILD_OFFSET UNITYSDK_OFFSET(0x1E58D6A0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AIOBJECTGETCONTEXT_OFFSET UNITYSDK_OFFSET(0x1E58D5A0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AIOBJECTGETFULLNAME_OFFSET UNITYSDK_OFFSET(0x1E58D8B0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AIOBJECTGETNAME_OFFSET UNITYSDK_OFFSET(0x1E58D830)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AIOBJECTGETNUMCHILDREN_OFFSET UNITYSDK_OFFSET(0x1E58D620)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AIOBJECTGETPARENT_OFFSET UNITYSDK_OFFSET(0x1E58D730)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AIOBJECTSETENABLED_OFFSET UNITYSDK_OFFSET(0x1E58D7B0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AIPOINTSFILLDATA_OFFSET UNITYSDK_OFFSET(0x1E58E710)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AIPOINTSGETSAMPLESUMMARY_OFFSET UNITYSDK_OFFSET(0x1E58E690)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AIPOINTSGETSUMMARY_OFFSET UNITYSDK_OFFSET(0x1E58E270)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AIPOINTSSETSORTBASEPOSITION_OFFSET UNITYSDK_OFFSET(0x1E58E1E0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AIPOINTSSETSORT_OFFSET UNITYSDK_OFFSET(0x1E58E160)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AIPOLYMESHFILLVERTEXBUFFER_OFFSET UNITYSDK_OFFSET(0x1E58E600)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AIPOLYMESHGETSAMPLESUMMARY_OFFSET UNITYSDK_OFFSET(0x1E58E470)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AIPOLYMESHGETSPLITSUMMARIES_OFFSET UNITYSDK_OFFSET(0x1E58E4F0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AIPOLYMESHGETSUBMESHSUMMARIES_OFFSET UNITYSDK_OFFSET(0x1E58E580)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AIPOLYMESHGETSUMMARY_OFFSET UNITYSDK_OFFSET(0x1E58E060)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AIPROPERTYGETDATA_OFFSET UNITYSDK_OFFSET(0x1E58E990)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AIPROPERTYGETNAME_OFFSET UNITYSDK_OFFSET(0x1E58E890)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AIPROPERTYGETTYPE_OFFSET UNITYSDK_OFFSET(0x1E58E910)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AISCHEMAGETNUMPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1E58DEB0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AISCHEMAGETPROPERTYBYINDEX_OFFSET UNITYSDK_OFFSET(0x1E58DF30)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AISCHEMAGETPROPERTYBYNAME_OFFSET UNITYSDK_OFFSET(0x1E58DFC0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AISCHEMAGETSAMPLE_OFFSET UNITYSDK_OFFSET(0x1E58DD30)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AISCHEMAISCONSTANT_OFFSET UNITYSDK_OFFSET(0x1E58DDB0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AISCHEMAISDATAUPDATED_OFFSET UNITYSDK_OFFSET(0x1E58DE30)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AISCHEMASYNC_OFFSET UNITYSDK_OFFSET(0x1E58DCB0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AISCHEMAUPDATESAMPLE_OFFSET UNITYSDK_OFFSET(0x1E58DC30)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AISUBDGETSUMMARY_OFFSET UNITYSDK_OFFSET(0x1E58E0E0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AITIMESAMPLINGGETRANGE_OFFSET UNITYSDK_OFFSET(0x1E58D510)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AITIMESAMPLINGGETSAMPLECOUNT_OFFSET UNITYSDK_OFFSET(0x1E58D410)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AITIMESAMPLINGGETTIME_OFFSET UNITYSDK_OFFSET(0x1E58D490)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AITIMETOSAMPLESELECTOR_OFFSET UNITYSDK_OFFSET(0x1E585780)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AIXFORMGETDATA_OFFSET UNITYSDK_OFFSET(0x1E58E370)

namespace UnityEngine::Formats::Alembic::Sdk
{
	inline static constexpr unsigned int NativeMethods_TypeDefinitionIndex = 46822;

	class NativeMethods : public ::System::Object
	{
	public:
		static ::UnityEngine::Formats::Alembic::Sdk::aeContext aeCreateContext()
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aeContext(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AECREATECONTEXT_OFFSET))();
		}

		static ::System::Void aeDestroyContext(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AEDESTROYCONTEXT_OFFSET))(a1);
		}

		static ::System::Boolean aiContextGetIsHDF5(::System::IntPtr a1)
		{
			return ((::System::Boolean(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AICONTEXTGETISHDF5_OFFSET))(a1);
		}

		static ::System::IntPtr aiContextGetApplication(::System::IntPtr a1)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AICONTEXTGETAPPLICATION_OFFSET))(a1);
		}

		static ::System::Void aeSetConfig(::System::IntPtr a1, ::UnityEngine::Formats::Alembic::Sdk::AlembicExportOptions* a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::UnityEngine::Formats::Alembic::Sdk::AlembicExportOptions*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AESETCONFIG_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Formats::Alembic::Sdk::Bool aeOpenArchive(::System::IntPtr a1, ::System::String* a2)
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::Bool(*)(::System::IntPtr, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AEOPENARCHIVE_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Formats::Alembic::Sdk::aeObject aeGetTopObject(::System::IntPtr a1)
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aeObject(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AEGETTOPOBJECT_OFFSET))(a1);
		}

		static ::System::Int32 aeAddTimeSampling(::System::IntPtr a1, ::System::Single a2)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AEADDTIMESAMPLING_OFFSET))(a1, a2);
		}

		static ::System::Void aeAddTime(::System::IntPtr a1, ::System::Single a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AEADDTIME_OFFSET))(a1, a2, a3);
		}

		static ::System::Void aeMarkFrameBegin(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AEMARKFRAMEBEGIN_OFFSET))(a1);
		}

		static ::System::Void aeMarkFrameEnd(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AEMARKFRAMEEND_OFFSET))(a1);
		}

		static ::UnityEngine::Formats::Alembic::Sdk::aeObject aeNewXform(::System::IntPtr a1, ::System::String* a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aeObject(*)(::System::IntPtr, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AENEWXFORM_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Formats::Alembic::Sdk::aeObject aeNewCamera(::System::IntPtr a1, ::System::String* a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aeObject(*)(::System::IntPtr, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AENEWCAMERA_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Formats::Alembic::Sdk::aeObject aeNewPoints(::System::IntPtr a1, ::System::String* a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aeObject(*)(::System::IntPtr, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AENEWPOINTS_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Formats::Alembic::Sdk::aeObject aeNewPolyMesh(::System::IntPtr a1, ::System::String* a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aeObject(*)(::System::IntPtr, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AENEWPOLYMESH_OFFSET))(a1, a2, a3);
		}

		static ::System::Void aeXformWriteSample(::System::IntPtr a1, ::UnityEngine::Formats::Alembic::Sdk::aeXformData a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::UnityEngine::Formats::Alembic::Sdk::aeXformData))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AEXFORMWRITESAMPLE_OFFSET))(a1, a2);
		}

		static ::System::Void aeCameraWriteSample(::System::IntPtr a1, ::UnityEngine::Formats::Alembic::Sdk::CameraData a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::UnityEngine::Formats::Alembic::Sdk::CameraData))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AECAMERAWRITESAMPLE_OFFSET))(a1, a2);
		}

		static ::System::Void aePolyMeshWriteSample(::System::IntPtr a1, ::UnityEngine::Formats::Alembic::Sdk::aePolyMeshData a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::UnityEngine::Formats::Alembic::Sdk::aePolyMeshData))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AEPOLYMESHWRITESAMPLE_OFFSET))(a1, a2);
		}

		static ::System::Int32 aePolyMeshAddFaceSet(::System::IntPtr a1, ::System::String* a2)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AEPOLYMESHADDFACESET_OFFSET))(a1, a2);
		}

		static ::System::Void aePointsWriteSample(::System::IntPtr a1, ::UnityEngine::Formats::Alembic::Sdk::aePointsData a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::UnityEngine::Formats::Alembic::Sdk::aePointsData))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AEPOINTSWRITESAMPLE_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Formats::Alembic::Sdk::aeProperty aeNewProperty(::System::IntPtr a1, ::System::String* a2, ::UnityEngine::Formats::Alembic::Sdk::aePropertyType a3)
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aeProperty(*)(::System::IntPtr, ::System::String*, ::UnityEngine::Formats::Alembic::Sdk::aePropertyType))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AENEWPROPERTY_OFFSET))(a1, a2, a3);
		}

		static ::System::Void aeMarkForceInvisible(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AEMARKFORCEINVISIBLE_OFFSET))(a1);
		}

		static ::System::Void aePropertyWriteArraySample(::System::IntPtr a1, ::System::IntPtr a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AEPROPERTYWRITEARRAYSAMPLE_OFFSET))(a1, a2, a3);
		}

		static ::System::Void aePropertyWriteScalarSample(::System::IntPtr a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AEPROPERTYWRITESCALARSAMPLE_OFFSET))(a1, a2);
		}

		static ::System::Void aePropertyWriteScalarSample_1(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AEPROPERTYWRITESCALARSAMPLE_1_OFFSET))(a1, a2);
		}

		static ::System::Void aePropertyWriteScalarSample_2(::System::IntPtr a1, ::UnityEngine::Formats::Alembic::Sdk::Bool a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::UnityEngine::Formats::Alembic::Sdk::Bool))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AEPROPERTYWRITESCALARSAMPLE_2_OFFSET))(a1, a2);
		}

		static ::System::Void aePropertyWriteScalarSample_3(::System::IntPtr a1, ::UnityEngine::Vector2 a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AEPROPERTYWRITESCALARSAMPLE_3_OFFSET))(a1, a2);
		}

		static ::System::Void aePropertyWriteScalarSample_4(::System::IntPtr a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AEPROPERTYWRITESCALARSAMPLE_4_OFFSET))(a1, a2);
		}

		static ::System::Void aePropertyWriteScalarSample_5(::System::IntPtr a1, ::UnityEngine::Vector4 a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AEPROPERTYWRITESCALARSAMPLE_5_OFFSET))(a1, a2);
		}

		static ::System::Void aePropertyWriteScalarSample_6(::System::IntPtr a1, ::UnityEngine::Matrix4x4 a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AEPROPERTYWRITESCALARSAMPLE_6_OFFSET))(a1, a2);
		}

		static ::System::Int32 aeGenerateRemapIndices(::System::IntPtr a1, ::System::IntPtr a2, ::System::IntPtr a3, ::System::Int32 a4)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AEGENERATEREMAPINDICES_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void aeApplyMatrixP(::System::IntPtr a1, ::System::Int32 a2, ::UnityEngine::Matrix4x4 a3)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AEAPPLYMATRIXP_OFFSET))(a1, a2, a3);
		}

		static ::System::Void aeApplyMatrixV(::System::IntPtr a1, ::System::Int32 a2, ::UnityEngine::Matrix4x4 a3)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AEAPPLYMATRIXV_OFFSET))(a1, a2, a3);
		}

		static ::System::Void aiClearContextsWithPath(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AICLEARCONTEXTSWITHPATH_OFFSET))(a1);
		}

		static ::UnityEngine::Formats::Alembic::Sdk::aiContext aiContextCreate(::System::Int32 a1)
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aiContext(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AICONTEXTCREATE_OFFSET))(a1);
		}

		static ::System::Void aiContextDestroy(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AICONTEXTDESTROY_OFFSET))(a1);
		}

		static ::UnityEngine::Formats::Alembic::Sdk::Bool aiContextLoad(::System::IntPtr a1, ::System::String* a2)
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::Bool(*)(::System::IntPtr, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AICONTEXTLOAD_OFFSET))(a1, a2);
		}

		static ::System::Void aiContextSetConfig(::System::IntPtr a1, ::UnityEngine::Formats::Alembic::Sdk::aiConfig a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::UnityEngine::Formats::Alembic::Sdk::aiConfig))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AICONTEXTSETCONFIG_OFFSET))(a1, a2);
		}

		static ::System::Int32 aiContextGetTimeSamplingCount(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AICONTEXTGETTIMESAMPLINGCOUNT_OFFSET))(a1);
		}

		static ::UnityEngine::Formats::Alembic::Sdk::aiTimeSampling aiContextGetTimeSampling(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aiTimeSampling(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AICONTEXTGETTIMESAMPLING_OFFSET))(a1, a2);
		}

		static ::System::Void aiContextGetTimeRange(::System::IntPtr a1, ::System::Double a2, ::System::Double a3)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AICONTEXTGETTIMERANGE_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Formats::Alembic::Sdk::aiObject aiContextGetTopObject(::System::IntPtr a1)
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aiObject(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AICONTEXTGETTOPOBJECT_OFFSET))(a1);
		}

		static ::System::Void aiContextUpdateSamples(::System::IntPtr a1, ::System::Double a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AICONTEXTUPDATESAMPLES_OFFSET))(a1, a2);
		}

		static ::System::Int32 aiTimeSamplingGetSampleCount(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AITIMESAMPLINGGETSAMPLECOUNT_OFFSET))(a1);
		}

		static ::System::Double aiTimeSamplingGetTime(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Double(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AITIMESAMPLINGGETTIME_OFFSET))(a1, a2);
		}

		static ::System::Void aiTimeSamplingGetRange(::System::IntPtr a1, ::System::Double a2, ::System::Double a3)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AITIMESAMPLINGGETRANGE_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Formats::Alembic::Sdk::aiContext aiObjectGetContext(::System::IntPtr a1)
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aiContext(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AIOBJECTGETCONTEXT_OFFSET))(a1);
		}

		static ::System::Int32 aiObjectGetNumChildren(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AIOBJECTGETNUMCHILDREN_OFFSET))(a1);
		}

		static ::UnityEngine::Formats::Alembic::Sdk::aiObject aiObjectGetChild(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aiObject(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AIOBJECTGETCHILD_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Formats::Alembic::Sdk::aiObject aiObjectGetParent(::System::IntPtr a1)
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aiObject(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AIOBJECTGETPARENT_OFFSET))(a1);
		}

		static ::System::Void aiObjectSetEnabled(::System::IntPtr a1, ::UnityEngine::Formats::Alembic::Sdk::Bool a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::UnityEngine::Formats::Alembic::Sdk::Bool))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AIOBJECTSETENABLED_OFFSET))(a1, a2);
		}

		static ::System::IntPtr aiObjectGetName(::System::IntPtr a1)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AIOBJECTGETNAME_OFFSET))(a1);
		}

		static ::System::IntPtr aiObjectGetFullName(::System::IntPtr a1)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AIOBJECTGETFULLNAME_OFFSET))(a1);
		}

		static ::UnityEngine::Formats::Alembic::Sdk::aiXform aiObjectAsXform(::System::IntPtr a1)
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aiXform(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AIOBJECTASXFORM_OFFSET))(a1);
		}

		static ::UnityEngine::Formats::Alembic::Sdk::aiCamera aiObjectAsCamera(::System::IntPtr a1)
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aiCamera(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AIOBJECTASCAMERA_OFFSET))(a1);
		}

		static ::UnityEngine::Formats::Alembic::Sdk::aiPoints aiObjectAsPoints(::System::IntPtr a1)
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aiPoints(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AIOBJECTASPOINTS_OFFSET))(a1);
		}

		static ::UnityEngine::Formats::Alembic::Sdk::aiCurves aiObjectAsCurves(::System::IntPtr a1)
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aiCurves(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AIOBJECTASCURVES_OFFSET))(a1);
		}

		static ::UnityEngine::Formats::Alembic::Sdk::aiPolyMesh aiObjectAsPolyMesh(::System::IntPtr a1)
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aiPolyMesh(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AIOBJECTASPOLYMESH_OFFSET))(a1);
		}

		static ::UnityEngine::Formats::Alembic::Sdk::aiSubD aiObjectAsSubD(::System::IntPtr a1)
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aiSubD(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AIOBJECTASSUBD_OFFSET))(a1);
		}

		static ::System::Void aiSchemaUpdateSample(::System::IntPtr a1, ::UnityEngine::Formats::Alembic::Sdk::aiSampleSelector a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::UnityEngine::Formats::Alembic::Sdk::aiSampleSelector))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AISCHEMAUPDATESAMPLE_OFFSET))(a1, a2);
		}

		static ::System::Void aiSchemaSync(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AISCHEMASYNC_OFFSET))(a1);
		}

		static ::UnityEngine::Formats::Alembic::Sdk::aiSample aiSchemaGetSample(::System::IntPtr a1)
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aiSample(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AISCHEMAGETSAMPLE_OFFSET))(a1);
		}

		static ::UnityEngine::Formats::Alembic::Sdk::Bool aiSchemaIsConstant(::System::IntPtr a1)
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::Bool(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AISCHEMAISCONSTANT_OFFSET))(a1);
		}

		static ::UnityEngine::Formats::Alembic::Sdk::Bool aiSchemaIsDataUpdated(::System::IntPtr a1)
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::Bool(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AISCHEMAISDATAUPDATED_OFFSET))(a1);
		}

		static ::System::Int32 aiSchemaGetNumProperties(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AISCHEMAGETNUMPROPERTIES_OFFSET))(a1);
		}

		static ::UnityEngine::Formats::Alembic::Sdk::aiProperty aiSchemaGetPropertyByIndex(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aiProperty(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AISCHEMAGETPROPERTYBYINDEX_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Formats::Alembic::Sdk::aiProperty aiSchemaGetPropertyByName(::System::IntPtr a1, ::System::String* a2)
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aiProperty(*)(::System::IntPtr, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AISCHEMAGETPROPERTYBYNAME_OFFSET))(a1, a2);
		}

		static ::System::Void aiPolyMeshGetSummary(::System::IntPtr a1, ::UnityEngine::Formats::Alembic::Sdk::aiMeshSummary a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::UnityEngine::Formats::Alembic::Sdk::aiMeshSummary))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AIPOLYMESHGETSUMMARY_OFFSET))(a1, a2);
		}

		static ::System::Void aiSubDGetSummary(::System::IntPtr a1, ::UnityEngine::Formats::Alembic::Sdk::aiMeshSummary a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::UnityEngine::Formats::Alembic::Sdk::aiMeshSummary))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AISUBDGETSUMMARY_OFFSET))(a1, a2);
		}

		static ::System::Void aiPointsSetSort(::System::IntPtr a1, ::UnityEngine::Formats::Alembic::Sdk::Bool a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::UnityEngine::Formats::Alembic::Sdk::Bool))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AIPOINTSSETSORT_OFFSET))(a1, a2);
		}

		static ::System::Void aiPointsSetSortBasePosition(::System::IntPtr a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AIPOINTSSETSORTBASEPOSITION_OFFSET))(a1, a2);
		}

		static ::System::Void aiPointsGetSummary(::System::IntPtr a1, ::UnityEngine::Formats::Alembic::Sdk::aiPointsSummary a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::UnityEngine::Formats::Alembic::Sdk::aiPointsSummary))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AIPOINTSGETSUMMARY_OFFSET))(a1, a2);
		}

		static ::System::Void aiCurvesGetSummary(::System::IntPtr a1, ::UnityEngine::Formats::Alembic::Sdk::aiCurvesSummary a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::UnityEngine::Formats::Alembic::Sdk::aiCurvesSummary))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AICURVESGETSUMMARY_OFFSET))(a1, a2);
		}

		static ::System::Void aiXformGetData(::System::IntPtr a1, ::UnityEngine::Formats::Alembic::Sdk::aiXformData a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::UnityEngine::Formats::Alembic::Sdk::aiXformData))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AIXFORMGETDATA_OFFSET))(a1, a2);
		}

		static ::System::Void aiCameraGetData(::System::IntPtr a1, ::UnityEngine::Formats::Alembic::Sdk::CameraData a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::UnityEngine::Formats::Alembic::Sdk::CameraData))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AICAMERAGETDATA_OFFSET))(a1, a2);
		}

		static ::System::Void aiPolyMeshGetSampleSummary(::System::IntPtr a1, ::UnityEngine::Formats::Alembic::Sdk::aiMeshSampleSummary a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::UnityEngine::Formats::Alembic::Sdk::aiMeshSampleSummary))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AIPOLYMESHGETSAMPLESUMMARY_OFFSET))(a1, a2);
		}

		static ::System::Int32 aiPolyMeshGetSplitSummaries(::System::IntPtr a1, ::System::IntPtr a2)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AIPOLYMESHGETSPLITSUMMARIES_OFFSET))(a1, a2);
		}

		static ::System::Void aiPolyMeshGetSubmeshSummaries(::System::IntPtr a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AIPOLYMESHGETSUBMESHSUMMARIES_OFFSET))(a1, a2);
		}

		static ::System::Void aiPolyMeshFillVertexBuffer(::System::IntPtr a1, ::System::IntPtr a2, ::System::IntPtr a3)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AIPOLYMESHFILLVERTEXBUFFER_OFFSET))(a1, a2, a3);
		}

		static ::System::Void aiPointsGetSampleSummary(::System::IntPtr a1, ::UnityEngine::Formats::Alembic::Sdk::aiPointsSampleSummary a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::UnityEngine::Formats::Alembic::Sdk::aiPointsSampleSummary))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AIPOINTSGETSAMPLESUMMARY_OFFSET))(a1, a2);
		}

		static ::System::Void aiPointsFillData(::System::IntPtr a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AIPOINTSFILLDATA_OFFSET))(a1, a2);
		}

		static ::System::Void aiCurvesGetSampleSummary(::System::IntPtr a1, ::UnityEngine::Formats::Alembic::Sdk::aiCurvesSampleSummary a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::UnityEngine::Formats::Alembic::Sdk::aiCurvesSampleSummary))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AICURVESGETSAMPLESUMMARY_OFFSET))(a1, a2);
		}

		static ::System::Void aiCurvesFillData(::System::IntPtr a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AICURVESFILLDATA_OFFSET))(a1, a2);
		}

		static ::System::IntPtr aiPropertyGetName(::System::IntPtr a1)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AIPROPERTYGETNAME_OFFSET))(a1);
		}

		static ::UnityEngine::Formats::Alembic::Sdk::aiPropertyType aiPropertyGetType(::System::IntPtr a1)
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aiPropertyType(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AIPROPERTYGETTYPE_OFFSET))(a1);
		}

		static ::System::Void aiPropertyGetData(::System::IntPtr a1, ::UnityEngine::Formats::Alembic::Sdk::aiPropertyData a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::UnityEngine::Formats::Alembic::Sdk::aiPropertyData))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AIPROPERTYGETDATA_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Formats::Alembic::Sdk::aiSampleSelector aiTimeToSampleSelector(::System::Double a1)
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aiSampleSelector(*)(::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AITIMETOSAMPLESELECTOR_OFFSET))(a1);
		}

		static ::System::Void aiCleanup()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AICLEANUP_OFFSET))();
		}

	};
}
