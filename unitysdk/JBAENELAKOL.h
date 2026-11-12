#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CNLEEFGEKFB.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"

#define JBAENELAKOL_BOBEJIOLMJL_OFFSET UNITYSDK_OFFSET(0x1D872B80)
#define JBAENELAKOL_CTOR_OFFSET UNITYSDK_OFFSET(0x1D872BD0)
#define JBAENELAKOL_FNFPFFDPPKF_OFFSET UNITYSDK_OFFSET(0x1D872B20)
#define JBAENELAKOL_NBNKMIMDLJB_OFFSET UNITYSDK_OFFSET(0x1D872AC0)
#define JBAENELAKOL_PAFCMAMJENB_OFFSET UNITYSDK_OFFSET(0x1D872A50)

inline static constexpr unsigned int JBAENELAKOL_TypeDefinitionIndex = 38185;

	class JBAENELAKOL : public ::System::Object
	{
	public:
		::System::Int32 KFCNLBPDMBC; // 0x10
		::System::Boolean MOKNCFJICIC; // 0x14
		::System::Boolean ENDACPOADBP; // 0x15
		::System::Byte _padding0[0x2];
		::System::Int32 OOFOCLJKNCM; // 0x18
		::CNLEEFGEKFB PBLDEABLGHP; // 0x1C
		::RPG::MVector3 BHCMCMADHBF; // 0x30
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
