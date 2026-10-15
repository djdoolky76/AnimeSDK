#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class POCFKFBIABM;

#define ECBFFNKFPDA_BMFJPECGJDE_OFFSET UNITYSDK_OFFSET(0x12D05FD0)
#define ECBFFNKFPDA_CTOR_OFFSET UNITYSDK_OFFSET(0x12D06010)
#define ECBFFNKFPDA_EDCJFGHCCGO_OFFSET UNITYSDK_OFFSET(0x12D05F10)
#define ECBFFNKFPDA_GET_TWEENDURATION_OFFSET UNITYSDK_OFFSET(0x12D05FB0)
#define ECBFFNKFPDA_HKDEHAIHGPJ_OFFSET UNITYSDK_OFFSET(0x12D05EB0)
#define ECBFFNKFPDA_ODDLBLFDJJM_OFFSET UNITYSDK_OFFSET(0x12D05F70)
#define ECBFFNKFPDA_SET_TWEENDURATION_OFFSET UNITYSDK_OFFSET(0x12D05FC0)

	class ECBFFNKFPDA : public ::System::Object
	{
	public:
		::System::Single _TweenDuration_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECBFFNKFPDA_CTOR_OFFSET))(this);
		}

		::System::Boolean HKDEHAIHGPJ(::POCFKFBIABM* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::POCFKFBIABM*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ECBFFNKFPDA_HKDEHAIHGPJ_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EDCJFGHCCGO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ECBFFNKFPDA_EDCJFGHCCGO_OFFSET))(this, a1);
		}

		::System::Boolean ODDLBLFDJJM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ECBFFNKFPDA_ODDLBLFDJJM_OFFSET))(this);
		}

		::System::Single get_TweenDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ECBFFNKFPDA_GET_TWEENDURATION_OFFSET))(this);
		}

		::System::Void set_TweenDuration(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ECBFFNKFPDA_SET_TWEENDURATION_OFFSET))(this, a1);
		}

		::System::Boolean BMFJPECGJDE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ECBFFNKFPDA_BMFJPECGJDE_OFFSET))(this);
		}

	};
