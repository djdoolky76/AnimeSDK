#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AFEPOFEOCDI;
class OMPCEECHGJK;

#define GCIFLKDICJI_BBLMMNLCMGM_OFFSET UNITYSDK_OFFSET(0x1597B6A0)
#define GCIFLKDICJI_CTOR_OFFSET UNITYSDK_OFFSET(0x1597B690)
#define GCIFLKDICJI_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1597B740)
#define GCIFLKDICJI_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1597B700)
#define GCIFLKDICJI_KIFOFFEMKNO_OFFSET UNITYSDK_OFFSET(0x1597B7D0)

inline static constexpr unsigned int GCIFLKDICJI_TypeDefinitionIndex = 76659;

	class GCIFLKDICJI : public ::System::Object
	{
	public:
		::AFEPOFEOCDI* FKINCGODJEP; // 0x10
		::OMPCEECHGJK* PDENFEFCAGN; // 0x18
		::System::Void _ctor(::AFEPOFEOCDI* a1, ::OMPCEECHGJK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::AFEPOFEOCDI*, ::OMPCEECHGJK*))((::PBYTE)hIl2Cpp + GCIFLKDICJI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean BBLMMNLCMGM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GCIFLKDICJI_BBLMMNLCMGM_OFFSET))(this);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCIFLKDICJI_INITIALIZE_OFFSET))(this);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCIFLKDICJI_EXECUTE_OFFSET))(this);
		}

		::System::Void KIFOFFEMKNO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCIFLKDICJI_KIFOFFEMKNO_OFFSET))(this);
		}

	};
