#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Quaternion.h"

#define HOUDINIENGINEUNITY_CURVENODEDATA_GETROTATION_OFFSET UNITYSDK_OFFSET(0x3897D50)
#define HOUDINIENGINEUNITY_CURVENODEDATA_ISEQUIVALENTTO_OFFSET UNITYSDK_OFFSET(0x3897DC0)
#define HOUDINIENGINEUNITY_CURVENODEDATA__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3898000)
#define HOUDINIENGINEUNITY_CURVENODEDATA__CTOR_2_OFFSET UNITYSDK_OFFSET(0x28B7DC0)
#define HOUDINIENGINEUNITY_CURVENODEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x3898110)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int CurveNodeData_TypeDefinitionIndex = 18144;

	class CurveNodeData : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 position; // 0x10
		::UnityEngine::Vector3 rotation; // 0x1C
		::UnityEngine::Vector3 scale; // 0x28
		::System::Int32 curveCountIndex; // 0x34

		::System::Boolean IsEquivalentTo(::HoudiniEngineUnity::CurveNodeData* BEEE7A5A60941632)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::CurveNodeData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_CURVENODEDATA_ISEQUIVALENTTO_OFFSET))(this, BEEE7A5A60941632);
		}

		::System::Void _ctor(::UnityEngine::Vector3 EB211B01816ACA79)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_CURVENODEDATA__CTOR_OFFSET))(this, EB211B01816ACA79);
		}

		::UnityEngine::Quaternion GetRotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_CURVENODEDATA_GETROTATION_OFFSET))(this);
		}

		::System::Void _ctor_1(::HoudiniEngineUnity::CurveNodeData* BEEE7A5A60941632)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::CurveNodeData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_CURVENODEDATA__CTOR_1_OFFSET))(this, BEEE7A5A60941632);
		}

		::System::Void _ctor_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_CURVENODEDATA__CTOR_2_OFFSET))(this);
		}
	};
}
