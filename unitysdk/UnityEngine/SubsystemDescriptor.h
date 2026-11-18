#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define UNITYENGINE_SUBSYSTEMDESCRIPTOR_GET_ID_OFFSET UNITYSDK_OFFSET(0x2005BC60)
#define UNITYENGINE_SUBSYSTEMDESCRIPTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x2005BC70)

namespace UnityEngine
{
	inline static constexpr unsigned int SubsystemDescriptor_TypeDefinitionIndex = 18327;

	class SubsystemDescriptor : public ::System::Object
	{
	public:
		::System::String* _id_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SUBSYSTEMDESCRIPTOR__CTOR_OFFSET))(this);
		}

		::System::String* get_id()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SUBSYSTEMDESCRIPTOR_GET_ID_OFFSET))(this);
		}
	};
}
