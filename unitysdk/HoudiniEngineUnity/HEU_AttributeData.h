#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_AttributeInfo.h"
#include "unitysdk/HoudiniEngineUnity/HEU_AttributeData_E8A330FA286EF8B4.h"
#include "unitysdk/HoudiniEngineUnity/HEU_AttributeData_EBB1C54528428702.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define HOUDINIENGINEUNITY_HEU_ATTRIBUTEDATA_COPYVALUESTO_OFFSET UNITYSDK_OFFSET(0x3823980)
#define HOUDINIENGINEUNITY_HEU_ATTRIBUTEDATA_ISEQUIVALENTTO_OFFSET UNITYSDK_OFFSET(0x3823AE0)
#define HOUDINIENGINEUNITY_HEU_ATTRIBUTEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_AttributeData_TypeDefinitionIndex = 17949;

	class HEU_AttributeData : public ::System::Object
	{
	public:
		::HoudiniEngineUnity::HAPI_AttributeInfo _attributeInfo; // 0x10
		::System::String* _name; // 0x38
		::HoudiniEngineUnity::HEU_AttributeData_E8A330FA286EF8B4 _attributeType; // 0x40
		::System::Byte _padding0[0x4];
		::Il2CppArray<::System::Int32>* _intValues; // 0x48
		::Il2CppArray<::System::Single>* _floatValues; // 0x50
		::Il2CppArray<::System::String*>* _stringValues; // 0x58
		::HoudiniEngineUnity::HEU_AttributeData_EBB1C54528428702 _attributeState; // 0x60

		::System::Void CopyValuesTo(::HoudiniEngineUnity::HEU_AttributeData* BE4629D6291F663F)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_AttributeData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ATTRIBUTEDATA_COPYVALUESTO_OFFSET))(this, BE4629D6291F663F);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ATTRIBUTEDATA__CTOR_OFFSET))(this);
		}

		::System::Boolean IsEquivalentTo(::HoudiniEngineUnity::HEU_AttributeData* BEEE7A5A60941632)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HEU_AttributeData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ATTRIBUTEDATA_ISEQUIVALENTTO_OFFSET))(this, BEEE7A5A60941632);
		}
	};
}
