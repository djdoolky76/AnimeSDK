#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Scripting/PreserveAttribute.h"
namespace System { class Type; }

#define SRF_SERVICE_SERVICEATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x2043E8B0)
#define SRF_SERVICE_SERVICEATTRIBUTE_GET_SERVICETYPE_OFFSET UNITYSDK_OFFSET(0x2043E8C0)
#define SRF_SERVICE_SERVICEATTRIBUTE_SET_SERVICETYPE_OFFSET UNITYSDK_OFFSET(0x2043E8D0)

namespace SRF::Service
{
	inline static constexpr unsigned int ServiceAttribute_TypeDefinitionIndex = 36335;

	class ServiceAttribute : public ::UnityEngine::Scripting::PreserveAttribute
	{
	public:
		::System::Type* _ServiceType_k__BackingField; // 0x10
		::System::Void _ctor(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SRF_SERVICE_SERVICEATTRIBUTE_CTOR_OFFSET))(this, a1);
		}

		::System::Type* get_ServiceType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_SERVICE_SERVICEATTRIBUTE_GET_SERVICETYPE_OFFSET))(this);
		}

		::System::Void set_ServiceType(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SRF_SERVICE_SERVICEATTRIBUTE_SET_SERVICETYPE_OFFSET))(this, a1);
		}

	};
}
