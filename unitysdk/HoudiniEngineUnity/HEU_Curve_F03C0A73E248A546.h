#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace HoudiniEngineUnity { class CurveNodeData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HOUDINIENGINEUNITY_HEU_CURVE_F03C0A73E248A546_B3C93FBC99C4739E_OFFSET UNITYSDK_OFFSET(0x3822D50)
#define HOUDINIENGINEUNITY_HEU_CURVE_F03C0A73E248A546__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_Curve_F03C0A73E248A546_TypeDefinitionIndex = 17869;

	class HEU_Curve_F03C0A73E248A546 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* B2D19FB26F309E61; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* E18CFE404893895A; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE_F03C0A73E248A546__CTOR_OFFSET))(this);
		}

		::System::Void B3C93FBC99C4739E(::HoudiniEngineUnity::CurveNodeData* F220A2D27F7C6B6C)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::CurveNodeData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE_F03C0A73E248A546_B3C93FBC99C4739E_OFFSET))(this, F220A2D27F7C6B6C);
		}
	};
}
