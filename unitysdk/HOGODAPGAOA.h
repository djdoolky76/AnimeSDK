#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IDEFMHBFDKL.h"
#include "unitysdk/RPG/Client/TSCRendererType.h"
class HOGODAPGAOA;
class JPHKBAHBDGB;

#define HOGODAPGAOA_ABNMKAPKMGF_OFFSET UNITYSDK_OFFSET(0x15DB6E90)
#define HOGODAPGAOA_CLEAR_OFFSET UNITYSDK_OFFSET(0x15DB7170)
#define HOGODAPGAOA_CTOR_OFFSET UNITYSDK_OFFSET(0x15DB71F0)
#define HOGODAPGAOA_EFHDNNMCOPB_OFFSET UNITYSDK_OFFSET(0x15DB70F0)
#define HOGODAPGAOA_LFFIEGIEENI_OFFSET UNITYSDK_OFFSET(0x15DB7070)
#define HOGODAPGAOA_MLNAPKIKHFO_OFFSET UNITYSDK_OFFSET(0x15DB6DF0)
#define HOGODAPGAOA_OINBDMGFFJL_OFFSET UNITYSDK_OFFSET(0x15DB6D70)
#define HOGODAPGAOA_OONEJNFHIBB_OFFSET UNITYSDK_OFFSET(0x15DB6FF0)
#define HOGODAPGAOA_PJLOJLFPFFC_OFFSET UNITYSDK_OFFSET(0x15DB6F40)
#define HOGODAPGAOA_PJNMKHLHHGI_OFFSET UNITYSDK_OFFSET(0x15DB6EE0)

inline static constexpr unsigned int HOGODAPGAOA_TypeDefinitionIndex = 70217;

	class HOGODAPGAOA : public ::IDEFMHBFDKL
	{
	public:
		::JPHKBAHBDGB* HELOHOGJFOL; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOGODAPGAOA_CTOR_OFFSET))(this);
		}

		::HOGODAPGAOA* OINBDMGFFJL(::JPHKBAHBDGB* a1, ::RPG::Client::TSCRendererType a2)
		{
			return ((::HOGODAPGAOA*(*)(::PVOID, ::JPHKBAHBDGB*, ::RPG::Client::TSCRendererType))((::PBYTE)hIl2Cpp + HOGODAPGAOA_OINBDMGFFJL_OFFSET))(this, a1, a2);
		}

		::System::Boolean MLNAPKIKHFO(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HOGODAPGAOA_MLNAPKIKHFO_OFFSET))(this, a1);
		}

		::System::Boolean ABNMKAPKMGF(::JPHKBAHBDGB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JPHKBAHBDGB*))((::PBYTE)hIl2Cpp + HOGODAPGAOA_ABNMKAPKMGF_OFFSET))(this, a1);
		}

		::System::Boolean PJNMKHLHHGI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOGODAPGAOA_PJNMKHLHHGI_OFFSET))(this);
		}

		::System::Void PJLOJLFPFFC(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + HOGODAPGAOA_PJLOJLFPFFC_OFFSET))(this, a1, a2);
		}

		::System::Void OONEJNFHIBB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOGODAPGAOA_OONEJNFHIBB_OFFSET))(this);
		}

		::System::Void LFFIEGIEENI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOGODAPGAOA_LFFIEGIEENI_OFFSET))(this);
		}

		::System::Void EFHDNNMCOPB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOGODAPGAOA_EFHDNNMCOPB_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOGODAPGAOA_CLEAR_OFFSET))(this);
		}

	};
