#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IOJGBIAJBIC;

#define PKBGGJPKDKM_CTOR_OFFSET UNITYSDK_OFFSET(0x1C7ED570)
#define PKBGGJPKDKM_GET_TRIGGERCOLLIDER_OFFSET UNITYSDK_OFFSET(0x1C7ED530)
#define PKBGGJPKDKM_GET_VISITORCOLLIDER_OFFSET UNITYSDK_OFFSET(0x1C7ED550)
#define PKBGGJPKDKM_SET_TRIGGERCOLLIDER_OFFSET UNITYSDK_OFFSET(0x1C7ED540)
#define PKBGGJPKDKM_SET_VISITORCOLLIDER_OFFSET UNITYSDK_OFFSET(0x1C7ED560)

inline static constexpr unsigned int PKBGGJPKDKM_TypeDefinitionIndex = 36554;

	class PKBGGJPKDKM : public ::System::Object
	{
	public:
		::IOJGBIAJBIC* _VisitorCollider_k__BackingField; // 0x10
		::IOJGBIAJBIC* _TriggerCollider_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKBGGJPKDKM_CTOR_OFFSET))(this);
		}

		::IOJGBIAJBIC* get_TriggerCollider()
		{
			return ((::IOJGBIAJBIC*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKBGGJPKDKM_GET_TRIGGERCOLLIDER_OFFSET))(this);
		}

		::System::Void set_TriggerCollider(::IOJGBIAJBIC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IOJGBIAJBIC*))((::PBYTE)hIl2Cpp + PKBGGJPKDKM_SET_TRIGGERCOLLIDER_OFFSET))(this, a1);
		}

		::IOJGBIAJBIC* get_VisitorCollider()
		{
			return ((::IOJGBIAJBIC*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKBGGJPKDKM_GET_VISITORCOLLIDER_OFFSET))(this);
		}

		::System::Void set_VisitorCollider(::IOJGBIAJBIC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IOJGBIAJBIC*))((::PBYTE)hIl2Cpp + PKBGGJPKDKM_SET_VISITORCOLLIDER_OFFSET))(this, a1);
		}

	};
