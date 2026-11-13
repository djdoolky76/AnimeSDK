#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class POCFKFBIABM;

#define HGKIKKOLLFA_OOHAABPLNLD_BMFJPECGJDE_OFFSET UNITYSDK_OFFSET(0x1C452B60)
#define HGKIKKOLLFA_OOHAABPLNLD_CTOR_OFFSET UNITYSDK_OFFSET(0x1C4528F0)
#define HGKIKKOLLFA_OOHAABPLNLD_GET_TWEENDURATION_OFFSET UNITYSDK_OFFSET(0x1C452B10)
#define HGKIKKOLLFA_OOHAABPLNLD_HKDEHAIHGPJ_OFFSET UNITYSDK_OFFSET(0x1C452A70)
#define HGKIKKOLLFA_OOHAABPLNLD_ODDLBLFDJJM_OFFSET UNITYSDK_OFFSET(0x1C452AD0)

inline static constexpr unsigned int HGKIKKOLLFA_OOHAABPLNLD_TypeDefinitionIndex = 73491;

	class HGKIKKOLLFA_OOHAABPLNLD : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGKIKKOLLFA_OOHAABPLNLD_CTOR_OFFSET))(this);
		}

		::System::Boolean HKDEHAIHGPJ(::POCFKFBIABM* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::POCFKFBIABM*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + HGKIKKOLLFA_OOHAABPLNLD_HKDEHAIHGPJ_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean ODDLBLFDJJM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HGKIKKOLLFA_OOHAABPLNLD_ODDLBLFDJJM_OFFSET))(this);
		}

		::System::Single get_TweenDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HGKIKKOLLFA_OOHAABPLNLD_GET_TWEENDURATION_OFFSET))(this);
		}

		::System::Boolean BMFJPECGJDE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HGKIKKOLLFA_OOHAABPLNLD_BMFJPECGJDE_OFFSET))(this);
		}

	};
