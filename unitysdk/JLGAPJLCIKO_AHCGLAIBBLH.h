#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define JLGAPJLCIKO_AHCGLAIBBLH_NCPDHJLBILO_1_OFFSET UNITYSDK_OFFSET(0x11740)
#define JLGAPJLCIKO_AHCGLAIBBLH_NCPDHJLBILO_OFFSET UNITYSDK_OFFSET(0x116E0)

inline static constexpr unsigned int JLGAPJLCIKO_AHCGLAIBBLH_TypeDefinitionIndex = 70686;

	struct alignas(4) JLGAPJLCIKO_AHCGLAIBBLH
	{
		::UnityEngine::Vector3 GLBHMMODODO; // 0x10
		::UnityEngine::Vector3 KCMAIIILAIK; // 0x1C
		::System::Int32 HBEFJBADODE; // 0x28
		::System::Int32 LCAGNNCBDJG; // 0x2C
		::System::Boolean NCPDHJLBILO(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JLGAPJLCIKO_AHCGLAIBBLH_NCPDHJLBILO_OFFSET))(this, a1);
		}

		/*
		::System::Boolean NCPDHJLBILO_1(::JLGAPJLCIKO_AHCGLAIBBLH a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JLGAPJLCIKO_AHCGLAIBBLH))((::PBYTE)hIl2Cpp + JLGAPJLCIKO_AHCGLAIBBLH_NCPDHJLBILO_1_OFFSET))(this, a1);
		}
		*/

	};
