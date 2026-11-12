#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IJOGMDLDMCB;

#define ILEICNLJLEF_ACHPKHABMLO_OFFSET UNITYSDK_OFFSET(0x17481AE0)
#define ILEICNLJLEF_CTOR_OFFSET UNITYSDK_OFFSET(0x17481D20)
#define ILEICNLJLEF_DFMIIKLGFFF_OFFSET UNITYSDK_OFFSET(0x17481B50)
#define ILEICNLJLEF_EDIELDDDAED_OFFSET UNITYSDK_OFFSET(0x17481CA0)
#define ILEICNLJLEF_GET_USEPRESHOW_OFFSET UNITYSDK_OFFSET(0x17481D00)
#define ILEICNLJLEF_LMPGBDHACOC_OFFSET UNITYSDK_OFFSET(0x17481BB0)
#define ILEICNLJLEF_MLHFDGKCOAB_OFFSET UNITYSDK_OFFSET(0x17481A40)
#define ILEICNLJLEF_SET_USEPRESHOW_OFFSET UNITYSDK_OFFSET(0x17481D10)

inline static constexpr unsigned int ILEICNLJLEF_TypeDefinitionIndex = 73445;

	class ILEICNLJLEF : public ::System::Object
	{
	public:
		::System::Boolean _UsePreShow_k__BackingField; // 0x10
		::System::Byte _padding0[0x3];
		::System::Single NIMJOKGLPEK; // 0x14
		::System::Single DNEJAHDLOEK; // 0x18
		::System::Single DMIIPFEILFN; // 0x1C
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
