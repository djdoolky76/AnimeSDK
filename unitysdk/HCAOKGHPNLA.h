#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HCAOKGHPNLA;

#define HCAOKGHPNLA_CTOR_OFFSET UNITYSDK_OFFSET(0x15C16800)
#define HCAOKGHPNLA_GET_FROMPROPID_OFFSET UNITYSDK_OFFSET(0x15C16890)
#define HCAOKGHPNLA_GET_TOPROPID_OFFSET UNITYSDK_OFFSET(0x15C168B0)
#define HCAOKGHPNLA_KGAFHLGGNHJ_OFFSET UNITYSDK_OFFSET(0x15C16820)
#define HCAOKGHPNLA_SET_FROMPROPID_OFFSET UNITYSDK_OFFSET(0x15C168A0)
#define HCAOKGHPNLA_SET_TOPROPID_OFFSET UNITYSDK_OFFSET(0x15C168C0)

inline static constexpr unsigned int HCAOKGHPNLA_TypeDefinitionIndex = 78525;

	class HCAOKGHPNLA : public ::System::Object
	{
	public:
		::System::UInt32 _ToPropID_k__BackingField; // 0x10
		::System::UInt32 _FromPropID_k__BackingField; // 0x14
		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + HCAOKGHPNLA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Int32 KGAFHLGGNHJ(::HCAOKGHPNLA* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::HCAOKGHPNLA*))((::PBYTE)hIl2Cpp + HCAOKGHPNLA_KGAFHLGGNHJ_OFFSET))(this, a1);
		}

		::System::UInt32 get_FromPropID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCAOKGHPNLA_GET_FROMPROPID_OFFSET))(this);
		}

		::System::Void set_FromPropID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HCAOKGHPNLA_SET_FROMPROPID_OFFSET))(this, a1);
		}

		::System::UInt32 get_ToPropID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCAOKGHPNLA_GET_TOPROPID_OFFSET))(this);
		}

		::System::Void set_ToPropID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HCAOKGHPNLA_SET_TOPROPID_OFFSET))(this, a1);
		}

	};
