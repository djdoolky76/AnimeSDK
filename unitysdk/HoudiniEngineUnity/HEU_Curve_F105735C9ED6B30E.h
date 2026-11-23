#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace HoudiniEngineUnity { class CurveNodeData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HOUDINIENGINEUNITY_HEU_CURVE_F105735C9ED6B30E_A034E047702CD37E_OFFSET UNITYSDK_OFFSET(0x3822250)
#define HOUDINIENGINEUNITY_HEU_CURVE_F105735C9ED6B30E__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_Curve_F105735C9ED6B30E_TypeDefinitionIndex = 17866;

	class HEU_Curve_F105735C9ED6B30E : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* B8B0EF9ED37BA7F0; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE_F105735C9ED6B30E__CTOR_OFFSET))(this);
		}

		::System::Void A034E047702CD37E(::HoudiniEngineUnity::CurveNodeData* E7A41DB667CBC570)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::CurveNodeData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE_F105735C9ED6B30E_A034E047702CD37E_OFFSET))(this, E7A41DB667CBC570);
		}
	};
}
