#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IOJGBIAJBIC;

#define EDPAHELFOKO_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5FB420)
#define EDPAHELFOKO_GET_COLLIDERA_OFFSET UNITYSDK_OFFSET(0x1C5FB3E0)
#define EDPAHELFOKO_GET_COLLIDERB_OFFSET UNITYSDK_OFFSET(0x1C5FB400)
#define EDPAHELFOKO_SET_COLLIDERA_OFFSET UNITYSDK_OFFSET(0x1C5FB3F0)
#define EDPAHELFOKO_SET_COLLIDERB_OFFSET UNITYSDK_OFFSET(0x1C5FB410)

inline static constexpr unsigned int EDPAHELFOKO_TypeDefinitionIndex = 36553;

	class EDPAHELFOKO : public ::System::Object
	{
	public:
		::IOJGBIAJBIC* _ColliderB_k__BackingField; // 0x10
		::IOJGBIAJBIC* _ColliderA_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDPAHELFOKO_CTOR_OFFSET))(this);
		}

		::IOJGBIAJBIC* get_ColliderA()
		{
			return ((::IOJGBIAJBIC*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDPAHELFOKO_GET_COLLIDERA_OFFSET))(this);
		}

		::System::Void set_ColliderA(::IOJGBIAJBIC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IOJGBIAJBIC*))((::PBYTE)hIl2Cpp + EDPAHELFOKO_SET_COLLIDERA_OFFSET))(this, a1);
		}

		::IOJGBIAJBIC* get_ColliderB()
		{
			return ((::IOJGBIAJBIC*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDPAHELFOKO_GET_COLLIDERB_OFFSET))(this);
		}

		::System::Void set_ColliderB(::IOJGBIAJBIC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IOJGBIAJBIC*))((::PBYTE)hIl2Cpp + EDPAHELFOKO_SET_COLLIDERB_OFFSET))(this, a1);
		}

	};
