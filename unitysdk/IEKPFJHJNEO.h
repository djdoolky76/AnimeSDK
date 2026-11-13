#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/OEEKHELGHKF.h"
class NDDFLGNNMDK;
class PEEDLCHFAFL;

#define IEKPFJHJNEO_CTOR_OFFSET UNITYSDK_OFFSET(0x1BBFA180)
#define IEKPFJHJNEO_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1BBFA190)
#define IEKPFJHJNEO_LLDIACFIFAB_OFFSET UNITYSDK_OFFSET(0x1BBFA230)

inline static constexpr unsigned int IEKPFJHJNEO_TypeDefinitionIndex = 79288;

	class IEKPFJHJNEO : public ::System::Object
	{
	public:
		::PEEDLCHFAFL* PDENFEFCAGN; // 0x10
		::NDDFLGNNMDK* FKINCGODJEP; // 0x18
		::System::Void _ctor(::NDDFLGNNMDK* a1, ::PEEDLCHFAFL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NDDFLGNNMDK*, ::PEEDLCHFAFL*))((::PBYTE)hIl2Cpp + IEKPFJHJNEO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEKPFJHJNEO_INITIALIZE_OFFSET))(this);
		}

		::System::Void LLDIACFIFAB(::OEEKHELGHKF a1)
		{
			return ((::System::Void(*)(::PVOID, ::OEEKHELGHKF))((::PBYTE)hIl2Cpp + IEKPFJHJNEO_LLDIACFIFAB_OFFSET))(this, a1);
		}

	};
