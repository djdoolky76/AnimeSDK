#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AMGJAMPDNJI.h"
#include "unitysdk/System/Object.h"

class ONIHOMNFBOO;

#define NAJMEIJPGKA_LOECKFBACBM_FNBLNMMJHJM_OFFSET UNITYSDK_OFFSET(0x13C22120)
#define NAJMEIJPGKA_LOECKFBACBM__CTOR_OFFSET UNITYSDK_OFFSET(0x13C22110)

inline static constexpr unsigned int NAJMEIJPGKA_LOECKFBACBM_TypeDefinitionIndex = 74990;

class NAJMEIJPGKA_LOECKFBACBM : public ::System::Object
{
public:
	::AMGJAMPDNJI OBNIAHNMHPF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAJMEIJPGKA_LOECKFBACBM__CTOR_OFFSET))(this);
	}

	::System::Boolean FNBLNMMJHJM(::ONIHOMNFBOO* HAAEBCOBKFF)
	{
		return ((::System::Boolean(*)(::PVOID, ::ONIHOMNFBOO*))((::PBYTE)hIl2Cpp + NAJMEIJPGKA_LOECKFBACBM_FNBLNMMJHJM_OFFSET))(this, HAAEBCOBKFF);
	}
};
