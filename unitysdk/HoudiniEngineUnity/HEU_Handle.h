#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FA78B0257AA80CDE/B29EEC65D526A084.h"
#include "unitysdk/FA78B0257AA80CDE/FC45C8D1ECDADFF5.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_TransformEuler.h"
#include "unitysdk/HoudiniEngineUnity/HEU_Handle_A4CD2924874E9E76.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_HandleInfo.h"

class E1153259FC38F47B;
namespace HoudiniEngineUnity { class HEU_HandleParamBinding; }
namespace HoudiniEngineUnity { class HEU_HoudiniAsset; }
namespace HoudiniEngineUnity { class HEU_Parameters; }
namespace System { class String; }

#define HOUDINIENGINEUNITY_HEU_HANDLE_CLEANUP_OFFSET UNITYSDK_OFFSET(0x37FB3A0)
#define HOUDINIENGINEUNITY_HEU_HANDLE_GENERATETRANSFORM_OFFSET UNITYSDK_OFFSET(0x37FB3F0)
#define HOUDINIENGINEUNITY_HEU_HANDLE_GETROTATEBINDING_OFFSET UNITYSDK_OFFSET(0x17395E0)
#define HOUDINIENGINEUNITY_HEU_HANDLE_GETSCALEBINDING_OFFSET UNITYSDK_OFFSET(0x165A410)
#define HOUDINIENGINEUNITY_HEU_HANDLE_GETTRANSLATEBINDING_OFFSET UNITYSDK_OFFSET(0x169C070)
#define HOUDINIENGINEUNITY_HEU_HANDLE_GETUPDATEDPOSITION_OFFSET UNITYSDK_OFFSET(0x37FBDA0)
#define HOUDINIENGINEUNITY_HEU_HANDLE_GETUPDATEDROTATION_OFFSET UNITYSDK_OFFSET(0x37FBFD0)
#define HOUDINIENGINEUNITY_HEU_HANDLE_GET_CONVERTEDTRANSFORMEULER_OFFSET UNITYSDK_OFFSET(0x37FD5E0)
#define HOUDINIENGINEUNITY_HEU_HANDLE_GET_HANDLENAME_OFFSET UNITYSDK_OFFSET(0x17F35A0)
#define HOUDINIENGINEUNITY_HEU_HANDLE_GET_HANDLEPOSITION_OFFSET UNITYSDK_OFFSET(0x1681DC0)
#define HOUDINIENGINEUNITY_HEU_HANDLE_GET_HANDLEROTATION_OFFSET UNITYSDK_OFFSET(0x19392D0)
#define HOUDINIENGINEUNITY_HEU_HANDLE_GET_HANDLESCALE_OFFSET UNITYSDK_OFFSET(0x24056B0)
#define HOUDINIENGINEUNITY_HEU_HANDLE_GET_HANDLETYPE_OFFSET UNITYSDK_OFFSET(0x1831260)
#define HOUDINIENGINEUNITY_HEU_HANDLE_GET_RSTORDER_OFFSET UNITYSDK_OFFSET(0x16A7B50)
#define HOUDINIENGINEUNITY_HEU_HANDLE_GET_XYZORDER_OFFSET UNITYSDK_OFFSET(0x16A7BB0)
#define HOUDINIENGINEUNITY_HEU_HANDLE_HASROTATEHANDLE_OFFSET UNITYSDK_OFFSET(0x37FC370)
#define HOUDINIENGINEUNITY_HEU_HANDLE_HASSCALEHANDLE_OFFSET UNITYSDK_OFFSET(0x1E2A5C0)
#define HOUDINIENGINEUNITY_HEU_HANDLE_HASTRANSLATEHANDLE_OFFSET UNITYSDK_OFFSET(0x37FC380)
#define HOUDINIENGINEUNITY_HEU_HANDLE_ISEQUIVALENTTO_OFFSET UNITYSDK_OFFSET(0x37FC390)
#define HOUDINIENGINEUNITY_HEU_HANDLE_ISROTATEHANDLEDISABLED_OFFSET UNITYSDK_OFFSET(0x37FC9D0)
#define HOUDINIENGINEUNITY_HEU_HANDLE_ISSCALEHANDLEDISABLED_OFFSET UNITYSDK_OFFSET(0x37FC9F0)
#define HOUDINIENGINEUNITY_HEU_HANDLE_ISSPECIALRSTORDER_OFFSET UNITYSDK_OFFSET(0x37FCA10)
#define HOUDINIENGINEUNITY_HEU_HANDLE_ISTRANSLATEHANDLEDISABLED_OFFSET UNITYSDK_OFFSET(0x37FCA30)
#define HOUDINIENGINEUNITY_HEU_HANDLE_SETUPHANDLE_OFFSET UNITYSDK_OFFSET(0x37FCA50)
#define HOUDINIENGINEUNITY_HEU_HANDLE__CTOR_OFFSET UNITYSDK_OFFSET(0x37FD520)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_Handle_TypeDefinitionIndex = 17808;

	class HEU_Handle : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::String* _handleName; // 0x18
		::HoudiniEngineUnity::HEU_Handle_A4CD2924874E9E76 _handleType; // 0x20
		::System::Int32 _handleIndex; // 0x24
		::HoudiniEngineUnity::HEU_HandleParamBinding* _handleParamTranslateBinding; // 0x28
		::HoudiniEngineUnity::HEU_HandleParamBinding* _handleParamRotateBinding; // 0x30
		::HoudiniEngineUnity::HEU_HandleParamBinding* _handleParamScaleBinding; // 0x38
		::UnityEngine::Vector3 _handlePosition; // 0x40
		::UnityEngine::Quaternion _handleRotation; // 0x4C
		::UnityEngine::Vector3 _handleScale; // 0x5C
		::FA78B0257AA80CDE::B29EEC65D526A084 _rstOrder; // 0x68
		::FA78B0257AA80CDE::FC45C8D1ECDADFF5 _xyzOrder; // 0x6C
		::HoudiniEngineUnity::HAPI_TransformEuler _convertedTransformEuler; // 0x70

		::UnityEngine::Vector3 get_HandlePosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HANDLE_GET_HANDLEPOSITION_OFFSET))(this);
		}

		::System::Boolean GetUpdatedPosition(::HoudiniEngineUnity::HEU_HoudiniAsset* B286159CFDC40A9F, ::UnityEngine::Vector3& AAB30102DC70FE99)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HEU_HoudiniAsset*, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HANDLE_GETUPDATEDPOSITION_OFFSET))(this, B286159CFDC40A9F, AAB30102DC70FE99);
		}

		::HoudiniEngineUnity::HAPI_TransformEuler get_ConvertedTransformEuler()
		{
			return ((::HoudiniEngineUnity::HAPI_TransformEuler(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HANDLE_GET_CONVERTEDTRANSFORMEULER_OFFSET))(this);
		}

		::HoudiniEngineUnity::HEU_HandleParamBinding* GetTranslateBinding()
		{
			return ((::HoudiniEngineUnity::HEU_HandleParamBinding*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HANDLE_GETTRANSLATEBINDING_OFFSET))(this);
		}

		::System::String* get_HandleName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HANDLE_GET_HANDLENAME_OFFSET))(this);
		}

		::HoudiniEngineUnity::HEU_HandleParamBinding* GetRotateBinding()
		{
			return ((::HoudiniEngineUnity::HEU_HandleParamBinding*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HANDLE_GETROTATEBINDING_OFFSET))(this);
		}

		::System::Void GenerateTransform(::E1153259FC38F47B* AF4435B7B5FB505E, ::HoudiniEngineUnity::HEU_Parameters* B652C74F012A9C5B)
		{
			return ((::System::Void(*)(::PVOID, ::E1153259FC38F47B*, ::HoudiniEngineUnity::HEU_Parameters*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HANDLE_GENERATETRANSFORM_OFFSET))(this, AF4435B7B5FB505E, B652C74F012A9C5B);
		}

		::System::Void CleanUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HANDLE_CLEANUP_OFFSET))(this);
		}

		::HoudiniEngineUnity::HEU_HandleParamBinding* GetScaleBinding()
		{
			return ((::HoudiniEngineUnity::HEU_HandleParamBinding*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HANDLE_GETSCALEBINDING_OFFSET))(this);
		}

		::FA78B0257AA80CDE::B29EEC65D526A084 get_RSTOrder()
		{
			return ((::FA78B0257AA80CDE::B29EEC65D526A084(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HANDLE_GET_RSTORDER_OFFSET))(this);
		}

		::System::Boolean GetUpdatedRotation(::HoudiniEngineUnity::HEU_HoudiniAsset* B286159CFDC40A9F, ::UnityEngine::Quaternion& BC01B40BA00F2345)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HEU_HoudiniAsset*, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HANDLE_GETUPDATEDROTATION_OFFSET))(this, B286159CFDC40A9F, BC01B40BA00F2345);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HANDLE__CTOR_OFFSET))(this);
		}

		static ::System::Boolean IsSpecialRSTOrder(::FA78B0257AA80CDE::B29EEC65D526A084 F774B2C0AB0DBC40)
		{
			return ((::System::Boolean(*)(::FA78B0257AA80CDE::B29EEC65D526A084))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HANDLE_ISSPECIALRSTORDER_OFFSET))(F774B2C0AB0DBC40);
		}

		::System::Boolean IsScaleHandleDisabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HANDLE_ISSCALEHANDLEDISABLED_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_HandleScale()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HANDLE_GET_HANDLESCALE_OFFSET))(this);
		}

		::System::Boolean IsTranslateHandleDisabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HANDLE_ISTRANSLATEHANDLEDISABLED_OFFSET))(this);
		}

		::UnityEngine::Quaternion get_HandleRotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HANDLE_GET_HANDLEROTATION_OFFSET))(this);
		}

		::System::Boolean SetupHandle(::E1153259FC38F47B* AF4435B7B5FB505E, ::System::Int32 A55AABB57CBFF0B9, ::System::Int32 A528F5A4B0F69CA1, ::System::String* F455E17D3272D592, ::HoudiniEngineUnity::HEU_Handle_A4CD2924874E9E76 B1019249458DA79F, ::HoudiniEngineUnity::HAPI_HandleInfo& A3891FF5307B61BE, ::HoudiniEngineUnity::HEU_Parameters* B652C74F012A9C5B)
		{
			return ((::System::Boolean(*)(::PVOID, ::E1153259FC38F47B*, ::System::Int32, ::System::Int32, ::System::String*, ::HoudiniEngineUnity::HEU_Handle_A4CD2924874E9E76, ::HoudiniEngineUnity::HAPI_HandleInfo&, ::HoudiniEngineUnity::HEU_Parameters*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HANDLE_SETUPHANDLE_OFFSET))(this, AF4435B7B5FB505E, A55AABB57CBFF0B9, A528F5A4B0F69CA1, F455E17D3272D592, B1019249458DA79F, A3891FF5307B61BE, B652C74F012A9C5B);
		}

		::FA78B0257AA80CDE::FC45C8D1ECDADFF5 get_XYZOrder()
		{
			return ((::FA78B0257AA80CDE::FC45C8D1ECDADFF5(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HANDLE_GET_XYZORDER_OFFSET))(this);
		}

		::System::Boolean HasTranslateHandle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HANDLE_HASTRANSLATEHANDLE_OFFSET))(this);
		}

		::System::Boolean IsEquivalentTo(::HoudiniEngineUnity::HEU_Handle* BEEE7A5A60941632)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HEU_Handle*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HANDLE_ISEQUIVALENTTO_OFFSET))(this, BEEE7A5A60941632);
		}

		::HoudiniEngineUnity::HEU_Handle_A4CD2924874E9E76 get_HandleType()
		{
			return ((::HoudiniEngineUnity::HEU_Handle_A4CD2924874E9E76(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HANDLE_GET_HANDLETYPE_OFFSET))(this);
		}

		::System::Boolean HasScaleHandle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HANDLE_HASSCALEHANDLE_OFFSET))(this);
		}

		::System::Boolean HasRotateHandle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HANDLE_HASROTATEHANDLE_OFFSET))(this);
		}

		::System::Boolean IsRotateHandleDisabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HANDLE_ISROTATEHANDLEDISABLED_OFFSET))(this);
		}
	};
}
