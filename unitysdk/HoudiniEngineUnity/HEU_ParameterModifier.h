#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HEU_ParameterModifier_B5E1F5A9E691758D.h"
#include "unitysdk/System/Object.h"

#define HOUDINIENGINEUNITY_HEU_PARAMETERMODIFIER_GETNEWMODIFIER_OFFSET UNITYSDK_OFFSET(0x38873A0)
#define HOUDINIENGINEUNITY_HEU_PARAMETERMODIFIER_GET_FLOATVALUE_OFFSET UNITYSDK_OFFSET(0x1B0A930)
#define HOUDINIENGINEUNITY_HEU_PARAMETERMODIFIER_GET_INSTANCEINDEX_OFFSET UNITYSDK_OFFSET(0x17D6300)
#define HOUDINIENGINEUNITY_HEU_PARAMETERMODIFIER_GET_INTVALUE_OFFSET UNITYSDK_OFFSET(0x16B0640)
#define HOUDINIENGINEUNITY_HEU_PARAMETERMODIFIER_GET_MODIFIERVALUE_OFFSET UNITYSDK_OFFSET(0x17D6170)
#define HOUDINIENGINEUNITY_HEU_PARAMETERMODIFIER_GET_PARAMETERINDEX_OFFSET UNITYSDK_OFFSET(0x16A7BC0)
#define HOUDINIENGINEUNITY_HEU_PARAMETERMODIFIER_ISEQUIVALENTTO_OFFSET UNITYSDK_OFFSET(0x3887430)
#define HOUDINIENGINEUNITY_HEU_PARAMETERMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_ParameterModifier_TypeDefinitionIndex = 18092;

	class HEU_ParameterModifier : public ::System::Object
	{
	public:
		::System::Int32 _parameterIndex; // 0x10
		::HoudiniEngineUnity::HEU_ParameterModifier_B5E1F5A9E691758D _action; // 0x14
		::System::Int32 _instanceIndex; // 0x18
		::System::Int32 _modifierValue; // 0x1C
		::System::Single _floatValue; // 0x20
		::System::Int32 _intValue; // 0x24

		::System::Int32 get_ModifierValue()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERMODIFIER_GET_MODIFIERVALUE_OFFSET))(this);
		}

		::System::Single get_FloatValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERMODIFIER_GET_FLOATVALUE_OFFSET))(this);
		}

		::System::Boolean IsEquivalentTo(::HoudiniEngineUnity::HEU_ParameterModifier* BEEE7A5A60941632)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HEU_ParameterModifier*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERMODIFIER_ISEQUIVALENTTO_OFFSET))(this, BEEE7A5A60941632);
		}

		::System::Int32 get_InstanceIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERMODIFIER_GET_INSTANCEINDEX_OFFSET))(this);
		}

		static ::HoudiniEngineUnity::HEU_ParameterModifier* GetNewModifier(::HoudiniEngineUnity::HEU_ParameterModifier_B5E1F5A9E691758D BC288918C940C7A6, ::System::Int32 EC84528838997B1A, ::System::Int32 AA435405D12B3F8D, ::System::Int32 B6AF63D51DB948F0)
		{
			return ((::HoudiniEngineUnity::HEU_ParameterModifier*(*)(::HoudiniEngineUnity::HEU_ParameterModifier_B5E1F5A9E691758D, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERMODIFIER_GETNEWMODIFIER_OFFSET))(BC288918C940C7A6, EC84528838997B1A, AA435405D12B3F8D, B6AF63D51DB948F0);
		}

		::System::Int32 get_ParameterIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERMODIFIER_GET_PARAMETERINDEX_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERMODIFIER__CTOR_OFFSET))(this);
		}

		::System::Int32 get_IntValue()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERMODIFIER_GET_INTVALUE_OFFSET))(this);
		}
	};
}
