#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class POCFKFBIABM;

#define HGKIKKOLLFA_OOHAABPLNLD_BMFJPECGJDE_OFFSET UNITYSDK_OFFSET(0x15CAB0E0)
#define HGKIKKOLLFA_OOHAABPLNLD_CTOR_OFFSET UNITYSDK_OFFSET(0x15CAAE70)
#define HGKIKKOLLFA_OOHAABPLNLD_GET_TWEENDURATION_OFFSET UNITYSDK_OFFSET(0x15CAB090)
#define HGKIKKOLLFA_OOHAABPLNLD_HKDEHAIHGPJ_OFFSET UNITYSDK_OFFSET(0x15CAAFF0)
#define HGKIKKOLLFA_OOHAABPLNLD_ODDLBLFDJJM_OFFSET UNITYSDK_OFFSET(0x15CAB050)

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
