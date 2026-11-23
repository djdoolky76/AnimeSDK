#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EB80375AD30FE13D.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

class ABEBA93AD61764EF;
namespace System { class String; }
namespace System { class Type; }

#define TA_ENVIRONMENTSYSTEM_ESCUSTOMDATA_EVALUATE_OFFSET UNITYSDK_OFFSET(0x28D9F80)
#define TA_ENVIRONMENTSYSTEM_ESCUSTOMDATA_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x17395E0)
#define TA_ENVIRONMENTSYSTEM_ESCUSTOMDATA_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x28DA100)
#define TA_ENVIRONMENTSYSTEM_ESCUSTOMDATA_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x28DA150)
#define TA_ENVIRONMENTSYSTEM_ESCUSTOMDATA_ONDRAWGIZMOS_OFFSET UNITYSDK_OFFSET(0x28DA1A0)
#define TA_ENVIRONMENTSYSTEM_ESCUSTOMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x28DA1F0)

namespace TA::EnvironmentSystem
{
	inline static constexpr unsigned int ESCustomData_TypeDefinitionIndex = 16431;

	class ESCustomData : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Boolean _isActive; // 0x18
		::System::Byte _padding0[0x7];
		::System::String* GUID; // 0x20
		::EB80375AD30FE13D Config; // 0x28
		::System::Byte _padding1[0x4];
		::System::Type* _Type_k__BackingField; // 0x30

		::System::Void OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_ESCUSTOMDATA_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::System::Void OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_ESCUSTOMDATA_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Type* get_Type()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_ESCUSTOMDATA_GET_TYPE_OFFSET))(this);
		}

		::System::Void Evaluate(::ABEBA93AD61764EF* F1EE4CF10E4B5F91)
		{
			return ((::System::Void(*)(::PVOID, ::ABEBA93AD61764EF*))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_ESCUSTOMDATA_EVALUATE_OFFSET))(this, F1EE4CF10E4B5F91);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_ESCUSTOMDATA__CTOR_OFFSET))(this);
		}

		::System::Void OnDrawGizmos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_ESCUSTOMDATA_ONDRAWGIZMOS_OFFSET))(this);
		}
	};
}
