#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace HoudiniEngineUnity { class CurveNodeData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HOUDINIENGINEUNITY_HEU_CURVE_FAB3392233DB50EA_EDDFF0193DF59778_OFFSET UNITYSDK_OFFSET(0x38225D0)
#define HOUDINIENGINEUNITY_HEU_CURVE_FAB3392233DB50EA_F7F6292BA8406E58_OFFSET UNITYSDK_OFFSET(0x38227E0)
#define HOUDINIENGINEUNITY_HEU_CURVE_FAB3392233DB50EA_FB7E13A396D48D8C_OFFSET UNITYSDK_OFFSET(0x3822AE0)
#define HOUDINIENGINEUNITY_HEU_CURVE_FAB3392233DB50EA__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_Curve_FAB3392233DB50EA_TypeDefinitionIndex = 17868;

	class HEU_Curve_FAB3392233DB50EA : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* BF31F77F3AA0B959; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::Quaternion>* B2D19FB26F309E61; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* E18CFE404893895A; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE_FAB3392233DB50EA__CTOR_OFFSET))(this);
		}

		::System::Void EDDFF0193DF59778(::HoudiniEngineUnity::CurveNodeData* F220A2D27F7C6B6C)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::CurveNodeData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE_FAB3392233DB50EA_EDDFF0193DF59778_OFFSET))(this, F220A2D27F7C6B6C);
		}

		::System::Void F7F6292BA8406E58(::System::Int32 ED1718130B3EAEF3, ::System::Int32 AB49FDCCF02F88F2, ::System::Single EE4DDB1878C6A069, ::System::Int32 A56B5A560D3BD1F8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE_FAB3392233DB50EA_F7F6292BA8406E58_OFFSET))(this, ED1718130B3EAEF3, AB49FDCCF02F88F2, EE4DDB1878C6A069, A56B5A560D3BD1F8);
		}

		::System::Void FB7E13A396D48D8C(::System::Int32 B178D92F8F7EFDB4, ::System::Int32 A56B5A560D3BD1F8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE_FAB3392233DB50EA_FB7E13A396D48D8C_OFFSET))(this, B178D92F8F7EFDB4, A56B5A560D3BD1F8);
		}
	};
}
