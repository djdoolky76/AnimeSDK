#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IJOGMDLDMCB;

#define ILEICNLJLEF_ACHPKHABMLO_OFFSET UNITYSDK_OFFSET(0x164ADA50)
#define ILEICNLJLEF_CTOR_OFFSET UNITYSDK_OFFSET(0x164ADC90)
#define ILEICNLJLEF_DFMIIKLGFFF_OFFSET UNITYSDK_OFFSET(0x164ADAC0)
#define ILEICNLJLEF_EDIELDDDAED_OFFSET UNITYSDK_OFFSET(0x164ADC10)
#define ILEICNLJLEF_GET_USEPRESHOW_OFFSET UNITYSDK_OFFSET(0x164ADC70)
#define ILEICNLJLEF_LMPGBDHACOC_OFFSET UNITYSDK_OFFSET(0x164ADB20)
#define ILEICNLJLEF_MLHFDGKCOAB_OFFSET UNITYSDK_OFFSET(0x164AD9B0)
#define ILEICNLJLEF_SET_USEPRESHOW_OFFSET UNITYSDK_OFFSET(0x164ADC80)

inline static constexpr unsigned int ILEICNLJLEF_TypeDefinitionIndex = 71461;

	class ILEICNLJLEF : public ::System::Object
	{
	public:
		::System::Single DMIIPFEILFN; // 0x10
		::System::Boolean _UsePreShow_k__BackingField; // 0x14
		::System::Byte _padding0[0x3];
		::System::Single DNEJAHDLOEK; // 0x18
		::System::Single NIMJOKGLPEK; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILEICNLJLEF_CTOR_OFFSET))(this);
		}

		::System::Void MLHFDGKCOAB(::IJOGMDLDMCB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IJOGMDLDMCB*))((::PBYTE)hIl2Cpp + ILEICNLJLEF_MLHFDGKCOAB_OFFSET))(this, a1);
		}

		::System::Int32 ACHPKHABMLO()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ILEICNLJLEF_ACHPKHABMLO_OFFSET))(this);
		}

		::System::Single DFMIIKLGFFF()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ILEICNLJLEF_DFMIIKLGFFF_OFFSET))(this);
		}

		::System::Single LMPGBDHACOC()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ILEICNLJLEF_LMPGBDHACOC_OFFSET))(this);
		}

		::System::Single EDIELDDDAED()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ILEICNLJLEF_EDIELDDDAED_OFFSET))(this);
		}

		::System::Boolean get_UsePreShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ILEICNLJLEF_GET_USEPRESHOW_OFFSET))(this);
		}

		::System::Void set_UsePreShow(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ILEICNLJLEF_SET_USEPRESHOW_OFFSET))(this, a1);
		}

	};
