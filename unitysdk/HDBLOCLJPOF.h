#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HDBLOCLJPOF_CTOR_OFFSET UNITYSDK_OFFSET(0x15C301A0)
#define HDBLOCLJPOF_GET_R_OFFSET UNITYSDK_OFFSET(0x15C30180)
#define HDBLOCLJPOF_GET_X_OFFSET UNITYSDK_OFFSET(0x15C30140)
#define HDBLOCLJPOF_GET_Y_OFFSET UNITYSDK_OFFSET(0x15C30160)
#define HDBLOCLJPOF_SET_R_OFFSET UNITYSDK_OFFSET(0x15C30190)
#define HDBLOCLJPOF_SET_X_OFFSET UNITYSDK_OFFSET(0x15C30150)
#define HDBLOCLJPOF_SET_Y_OFFSET UNITYSDK_OFFSET(0x15C30170)

	class HDBLOCLJPOF : public ::System::Object
	{
	public:
		::System::Double _Y_k__BackingField; // 0x10
		::System::Double _R_k__BackingField; // 0x18
		::System::Double _X_k__BackingField; // 0x20
		::System::Void _ctor(::System::Double a1, ::System::Double a2, ::System::Double a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + HDBLOCLJPOF_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Double get_X()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + HDBLOCLJPOF_GET_X_OFFSET))(this);
		}

		::System::Void set_X(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + HDBLOCLJPOF_SET_X_OFFSET))(this, a1);
		}

		::System::Double get_Y()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + HDBLOCLJPOF_GET_Y_OFFSET))(this);
		}

		::System::Void set_Y(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + HDBLOCLJPOF_SET_Y_OFFSET))(this, a1);
		}

		::System::Double get_R()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + HDBLOCLJPOF_GET_R_OFFSET))(this);
		}

		::System::Void set_R(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + HDBLOCLJPOF_SET_R_OFFSET))(this, a1);
		}

	};
