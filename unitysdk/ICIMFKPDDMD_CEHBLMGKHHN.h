#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace UnityEngine { class Transform; }

#define ICIMFKPDDMD_CEHBLMGKHHN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x188CD580)
#define ICIMFKPDDMD_CEHBLMGKHHN_CTOR_OFFSET UNITYSDK_OFFSET(0x188CD570)
#define ICIMFKPDDMD_CEHBLMGKHHN_GET_ENABLECAPACITYLIMIT_OFFSET UNITYSDK_OFFSET(0x188CD5A0)
#define ICIMFKPDDMD_CEHBLMGKHHN_GET_MAXRETAINEDCOUNT_OFFSET UNITYSDK_OFFSET(0x188CD5C0)
#define ICIMFKPDDMD_CEHBLMGKHHN_SET_ENABLECAPACITYLIMIT_OFFSET UNITYSDK_OFFSET(0x188CD5B0)
#define ICIMFKPDDMD_CEHBLMGKHHN_SET_MAXRETAINEDCOUNT_OFFSET UNITYSDK_OFFSET(0x188CD5D0)

inline static constexpr unsigned int ICIMFKPDDMD_CEHBLMGKHHN_TypeDefinitionIndex = 73160;

	class ICIMFKPDDMD_CEHBLMGKHHN : public ::System::Object
	{
	public:
		::UnityEngine::Transform* DHIPFJBEJPI; // 0x10
		::System::Object* JPHGPKBOHPE; // 0x18
		::System::Boolean HNOBLPHCDBN; // 0x20
		::System::Boolean _EnableCapacityLimit_k__BackingField; // 0x21
		::System::Byte _padding0[0x2];
		::System::Int32 _MaxRetainedCount_k__BackingField; // 0x24
		::System::Void _ctor(::UnityEngine::Transform* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Object*))((::PBYTE)hIl2Cpp + ICIMFKPDDMD_CEHBLMGKHHN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::System::Boolean a1, ::UnityEngine::Transform* a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Transform*, ::System::Object*))((::PBYTE)hIl2Cpp + ICIMFKPDDMD_CEHBLMGKHHN_CTOR_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean get_EnableCapacityLimit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICIMFKPDDMD_CEHBLMGKHHN_GET_ENABLECAPACITYLIMIT_OFFSET))(this);
		}

		::System::Void set_EnableCapacityLimit(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ICIMFKPDDMD_CEHBLMGKHHN_SET_ENABLECAPACITYLIMIT_OFFSET))(this, a1);
		}

		::System::Int32 get_MaxRetainedCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICIMFKPDDMD_CEHBLMGKHHN_GET_MAXRETAINEDCOUNT_OFFSET))(this);
		}

		::System::Void set_MaxRetainedCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ICIMFKPDDMD_CEHBLMGKHHN_SET_MAXRETAINEDCOUNT_OFFSET))(this, a1);
		}

	};
