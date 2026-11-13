#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CNLEEFGEKFB.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"

#define JBAENELAKOL_BOBEJIOLMJL_OFFSET UNITYSDK_OFFSET(0x1C12D5F0)
#define JBAENELAKOL_CTOR_OFFSET UNITYSDK_OFFSET(0x1C12D640)
#define JBAENELAKOL_FNFPFFDPPKF_OFFSET UNITYSDK_OFFSET(0x1C12D590)
#define JBAENELAKOL_NBNKMIMDLJB_OFFSET UNITYSDK_OFFSET(0x1C12D530)
#define JBAENELAKOL_PAFCMAMJENB_OFFSET UNITYSDK_OFFSET(0x1C12D4C0)

inline static constexpr unsigned int JBAENELAKOL_TypeDefinitionIndex = 38185;

	class JBAENELAKOL : public ::System::Object
	{
	public:
		::CNLEEFGEKFB PBLDEABLGHP; // 0x10
		::System::Boolean MOKNCFJICIC; // 0x24
		::System::Boolean ENDACPOADBP; // 0x25
		::System::Byte _padding0[0x2];
		::RPG::MVector3 BHCMCMADHBF; // 0x28
		::System::Int32 OOFOCLJKNCM; // 0x34
		::System::Int32 KFCNLBPDMBC; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBAENELAKOL_CTOR_OFFSET))(this);
		}

		::System::Void PAFCMAMJENB(::RPG::MVector3 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3, ::System::Int32))((::PBYTE)hIl2Cpp + JBAENELAKOL_PAFCMAMJENB_OFFSET))(this, a1, a2);
		}

		::System::Int32 NBNKMIMDLJB()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JBAENELAKOL_NBNKMIMDLJB_OFFSET))(this);
		}

		::System::Int32 FNFPFFDPPKF()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JBAENELAKOL_FNFPFFDPPKF_OFFSET))(this);
		}

		::System::Int32 BOBEJIOLMJL()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JBAENELAKOL_BOBEJIOLMJL_OFFSET))(this);
		}

	};
