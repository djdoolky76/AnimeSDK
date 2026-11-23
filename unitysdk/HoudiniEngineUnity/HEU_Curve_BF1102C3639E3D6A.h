#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace HoudiniEngineUnity { class CurveNodeData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HOUDINIENGINEUNITY_HEU_CURVE_BF1102C3639E3D6A_A4448A0666CAF9CD_OFFSET UNITYSDK_OFFSET(0x3822330)
#define HOUDINIENGINEUNITY_HEU_CURVE_BF1102C3639E3D6A__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_Curve_BF1102C3639E3D6A_TypeDefinitionIndex = 17867;

	class HEU_Curve_BF1102C3639E3D6A : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* BF31F77F3AA0B959; // 0x10
		::System::Boolean A6F5F88EB70AF4AB; // 0x18
		::System::Byte _padding0[0x7];
		::System::Collections::Generic::List_1<::UnityEngine::Quaternion>* B2D19FB26F309E61; // 0x20
		::System::Boolean FD3BB59069633D71; // 0x28
		::System::Byte _padding1[0x7];
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* E18CFE404893895A; // 0x30
		::System::Collections::Generic::List_1<::System::Int32>* ACC85DE1FB7217D8; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE_BF1102C3639E3D6A__CTOR_OFFSET))(this);
		}

		::System::Void A4448A0666CAF9CD(::HoudiniEngineUnity::CurveNodeData* F220A2D27F7C6B6C)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::CurveNodeData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE_BF1102C3639E3D6A_A4448A0666CAF9CD_OFFSET))(this, F220A2D27F7C6B6C);
		}
	};
}
